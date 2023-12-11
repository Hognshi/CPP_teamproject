#pragma once
#include <iostream>

using namespace std;

class System //������ �Է°� ������ ���� �Ǵ� �� �κ��丮 ���
{
protected:
	string input;
	bool flowerVase = false; bool birdcage = false; bool flowerGround = false; bool butterfly = false; bool map = false; bool docx = false;
	string itemList[6];
public:
	void Item();
	void ItemShow();
};

class NightDutyRoom : System
{
private:
	int check_space = 0;
	bool Escape = false;
public:
	void RoomShow(); // â��, ħ�� ��
	void FlowerChestShow(); // �ɺ�, ���� ��
	void SafeDraw(); // �ݰ�, ���� ��
	void Door(); // ��
	void CheckSafe(); //�ݰ� ����
	void CheckInput(string &input);
	bool IsEscape();
};

class Office : System
{
private:
	bool meetingDocx = false;
	bool unLockNoteBook = false;
	bool isEnd = false;
public:
	void OfficeRoom();
	void CheckInput(string &input);
	bool IsEnd();
};