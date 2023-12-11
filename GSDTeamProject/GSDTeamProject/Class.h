#pragma once
#include <iostream>

using namespace std;

class System //게임의 입력과 아이템 유무 판단 및 인벤토리 출력
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
	void RoomShow(); // 창문, 침대 방
	void FlowerChestShow(); // 꽃병, 서랍 방
	void SafeDraw(); // 금고, 액자 방
	void Door(); // 문
	void CheckSafe(); //금고 문제
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