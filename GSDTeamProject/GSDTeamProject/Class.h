#pragma once
#include <iostream>

using namespace std;

class System //������ �Է°� ������ ���� �Ǵ� �� �κ��丮 ���
{
public:
	string input;
	bool peg = false; bool wire = false; bool stick = false; bool nipper = false; bool USB = false; bool data = false;
	bool flowerVase = false; bool birdcage = false; bool flowerGround = false; bool butterfly = false; bool map = false;
	string itemList[11];
public:
	void Item();
	void ItemShow();
};

class NightDutyRoom : System
{
private:
	int check_space = 0; 
public:
	void RoomShow(); // â��, ħ�� ��
	void FlowerChestShow(); // �ɺ�, ���� ��
	void SafeDraw(); // �ݰ�, ���� ��
	void Door(); // ��
	void CheckSafe(string input); //�ݰ� ����
	void CheckInput(string &input);
};