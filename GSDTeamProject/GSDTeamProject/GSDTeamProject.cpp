#pragma once
#include <iostream>
#include "ASCII_ART.h"

using namespace std;

class item
{
private:
    int peg = 0; int wire = 1; int stick = 0; int nipper = 1; int USB = 0; int data = 0;
public:
    string itemList[6];
    item()
    {
        for (int i = 0; i < 6; i++)
        {
            itemList[i] = " ";
        }
        if (nipper == 1)
        {
            itemList[0] = "니퍼 ";
        }
        if (stick == 1)
        {
            itemList[1] = "낡은 나무 막대기 ";
        }
        if (wire == 1)
        {
            itemList[2] = "철사 ";
        }
        if (peg == 1)
        {
            itemList[3] = "녹슨 못 ";
        }
        if (USB == 1)
        {
            itemList[4] = "USB ";
        }
        if (data == 1)
        {
            itemList[4] = "자료 ";
        }
    }

};

class room
{
private:
    int next = 0; int check_space = 0; int bed_under = 0; int pot_break = 0; int picture_break = 0; int lock1 = 0;
    int isolation_open1 = 0; int isolation_open2 = 0; int isolation_end = 0; int chest_3_judge = 0; int isolation_out = 0; int isolation_o;
public:

};

int main()
{
    system("mode con cols=150 lines=50");
    int end = 0;
    item item;
    startScene();

    while (end != 1)
    {
        for (int i = 0; i < 70; i++)
        {
            cout << "■";
        }
        cout << "\n\n\n";
        for (int i = 0; i < 70; i++)
        {
            cout << "■";
        }
        cout << "\n";

        string input;
        cout << "item list : ";
        for (int i = 0; i < 6; i++)
        {
            if (item.itemList[i] != " ")
            {
                cout << item.itemList[i];
            }
        }

        cout << "\n입력 : "; cin >> input;
    }
}

