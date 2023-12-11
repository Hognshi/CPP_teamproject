#pragma once
#include <iostream>

using namespace std;

class System //게임의 입력과 아이템 유무 판단 및 인벤토리 출력
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
	void RoomShow(); // 창문, 침대 방
	void FlowerChestShow(); // 꽃병, 서랍 방
	void SafeDraw(); // 금고, 액자 방
	void Door(); // 문
	void CheckSafe(string input); //금고 문제
	void CheckInput(string &input);
};