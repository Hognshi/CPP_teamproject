#pragma once
#include <iostream>
#include <conio.h>
#include "ASCII_ART.cpp"

using namespace std;

class Item
{
public:
	bool peg = false; bool wire = false; bool stick = false; bool nipper = false; bool USB = false; bool data = false;
	string itemList[6];
	Item()
	{
		for (int i = 0; i < 6; i++)
		{
			itemList[i] = " ";
		}
		if (nipper == true)
		{
			itemList[0] = "니퍼 ";
		}
		if (stick == true)
		{
			itemList[1] = "낡은 나무 막대기 ";
		}
		if (wire == true)
		{
			itemList[2] = "철사 ";
		}
		if (peg == true)
		{
			itemList[3] = "녹슨 못 ";
		}
		if (USB == true)
		{
			itemList[4] = "USB ";
		}
		if (data == true)
		{
			itemList[4] = "자료 ";
		}
	}

};

class Room
{
public:
	bool next = false; int check_space = 0; bool bed_under = false; bool pot_break = false; bool picture_break = false;
	bool lock1 = false; bool isolation_open1 = false; bool isolation_open2 = false; bool isolation_end = false;
	bool chest_3_judge = false; bool isolation_out = false; bool isolation_out2 = false; bool lock2 = false;
};


void CheckPlayer(string input)
{
	Item item;
	Room room;

	

	cout << "\nitem list : ";
	for (int i = 0; i < 6; i++)
	{
		if (item.itemList[i] != " ")
		{
			cout << item.itemList[i];
		}
	}

	cout << "\n입력 : ";  cin >> input;


	//bool isEnd = false;
	//bool isIntroOver = false;
	//bool isTalk = false;
	//string input;

	//while (isEnd == false)
	//{
	//	for (int i = 0; i < 70; i++)
	//	{
	//		cout << "■";
	//	}
	//	if (input.compare("32") && isTalk == true)
	//	{
	//		isTalk = false;
	//		printf("\n드디어 이 병원에서 탈출할 시간이 왔군.\n");
	//		printf("반드시 오늘 탈출해야만 한다.\n");
	//		printf("그 사람이 자기가 있는 입원실로 오라그랬으니 일단 이 감금실부터 나가야겠군.\n");
	//		isIntroOver = true;
	//	}
	//	else if (isTalk == false)
	//	{
	//		cout << "\n\n\n";
	//	}
		/*for (int i = 0; i < 70; i++)
		{
			cout << "■";
		}*/

	/*	cout << "item list : ";
		for (int i = 0; i < 6; i++)
		{
			if (item.itemList[i] != " ")
			{
				cout << item.itemList[i];
			}
		}*/

	//	cout << "\n입력 : "; //cin >> input;
	//	input = _getch();

	//	if (input == "1")
	//	{
	//		line_story0();
	//	}

	//	else if (input.compare("2") == 0)
	//	{
	//		game_help();
	//		line_story0();
	//		room.check_space == 1;
	//	}
	//	else if (input.compare("13"))
	//	{
	//		isTalk = true;
	//		isIntroOver = true;
	//		window_bed();
	//	}
	//	while (room.isolation_end == false && isIntroOver == true)
	//	{
	//		//장소1에 있을 때 상호작용 
	//		if (room.check_space == 1)
	//		{
	//			window_bed();
	//			if (input.compare("침대") == 0)
	//			{
	//				//침대 밑 확인 전 
	//				if (room.bed_under == false)
	//				{
	//					//침대 밑을 확인할 수 있음 
	//					room.bed_under = true;
	//					line_isolation_bed();
	//				}
	//				//침대 밑 확인 후 
	//				else if (room.bed_under == 1)
	//				{
	//					line_isolation_bed_under();
	//					window_bed();
	//				}
	//			}

	//			else if (input.compare("창문") == 0)
	//			{
	//				line_isolation_window();
	//			}

	//			// <를 누르면 화면 전환		
	//			if (input.compare("<") == 0)
	//			{
	//				if (room.check_space == 1)
	//				{
	//					flower_chest();
	//					room.check_space = 2;
	//				}
	//				else if (room.check_space == 2)
	//				{
	//					paint_safe();
	//					room.check_space = 3;
	//				}
	//				else if (room.check_space == 3)
	//				{
	//					system("cls"); door_switch();
	//					room.check_space = 4;
	//				}
	//				else if (room.check_space == 4)
	//				{
	//					system("cls"); window_bed();
	//					room.check_space = 1;
	//				}
	//			}
	//			// >를 누르면 화면 전환		
	//			if (input.compare(">") == 0)
	//			{
	//				if (room.check_space == 1)
	//				{
	//					door_switch();
	//					room.check_space = 4;
	//				}
	//				else if (room.check_space == 2)
	//				{
	//					window_bed();
	//					room.check_space = 1;
	//				}
	//				else if (room.check_space == 3)
	//				{
	//					flower_chest();
	//					room.check_space = 2;
	//				}
	//				else if (room.check_space == 4)
	//				{
	//					paint_safe();
	//					room.check_space = 3;
	//				}
	//			}
	//		}
	//		//장소2에 있을 때 상호작용 
	//		if (room.check_space == 2)
	//		{
	//			flower_chest();
	//			if (input.compare("꽃") == 0)
	//			{
	//				//화분을 깨부시기 전 
	//				if (room.pot_break == false)
	//				{
	//					line_isolation_flower();
	//				}
	//				//화분을 깨부신 후 
	//				else if (room.pot_break == true)
	//				{
	//					//철사를 얻기 전 
	//					if (item.wire == false)
	//					{
	//						//철사 얻음 
	//						line_isolation_flower_decomposition();
	//						item.wire = true; item.peg = false;
	//					}
	//					//철사를 얻은 후 
	//					else if (item.wire == true)
	//					{
	//						line_nothing();
	//					}
	//				}
	//			}
	//			else if (input.compare("꽃병") == 0)
	//			{
	//				//화분을 깨기 전 
	//				if (room.pot_break == false)
	//				{
	//					//나무막대기를 얻기 전 
	//					if (item.stick == false)
	//					{
	//						line_isolation_flower_pot();
	//					}
	//					//나무막대기를 얻은 후 
	//					else if (item.stick == true)
	//					{
	//						//화분을 꺰 
	//						room.pot_break = true;
	//						line_isolation_flower_pot_break();
	//						item.stick = false;
	//					}
	//				}
	//				//화분을 깬 후 
	//				else if (room.pot_break == true)
	//				{
	//					line_nothing();
	//				}
	//			}
	//			else if (input.compare("서랍1") == 0)
	//			{
	//				line_isolation_chest_1_2();
	//			}
	//			else if (input.compare("서랍2") == 0)
	//			{
	//				line_isolation_chest_1_2();
	//			}
	//			else if (input.compare("서랍2") == 0)
	//			{
	//				//서랍3에서 녹슨 못 얻기 전 
	//				if (room.chest_3_judge == false)
	//				{
	//					room.chest_3_judge = true;
	//					line_isolation_chest3();
	//					item.peg = true;
	//				}
	//				//서랍3에서 녹슨 못 얻은 후 
	//				else if (room.chest_3_judge == true)
	//				{
	//					line_nothing();
	//				}
	//			}
	//			// <를 누르면 화면 전환		
	//			if (input.compare("<") == 0)
	//			{
	//				if (room.check_space == 1)
	//				{
	//					flower_chest();
	//					room.check_space = 2;
	//				}
	//				else if (room.check_space == 2)
	//				{
	//					paint_safe();
	//					room.check_space = 3;
	//				}
	//				else if (room.check_space == 3)
	//				{
	//					door_switch();
	//					room.check_space = 4;
	//				}
	//				else if (room.check_space == 4)
	//				{
	//					window_bed();
	//					room.check_space = 1;
	//				}
	//			}
	//			// >를 누르면 화면 전환		
	//			if (input.compare(">") == 0)
	//			{
	//				if (room.check_space == 1)
	//				{
	//					door_switch();
	//					room.check_space = 4;
	//				}
	//				else if (room.check_space == 2)
	//				{
	//					window_bed();
	//					room.check_space = 1;
	//				}
	//				else if (room.check_space == 3)
	//				{
	//					flower_chest();
	//					room.check_space = 2;
	//				}
	//				else if (room.check_space == 4)
	//				{
	//					paint_safe();
	//					room.check_space = 3;
	//				}
	//			}
	//		}
	//		//장소3에 있을 때 상호작용 
	//		if (room.check_space == 3)
	//		{
	//			paint_safe();
	//			if (input.compare("액자") == 0)
	//			{
	//				//액자에서 나무막대기 얻기 전 
	//				if (room.picture_break == false)
	//				{
	//					//나무막대기 얻음 
	//					room.picture_break = true;
	//					line_isolation_picture();
	//					item.stick = true;
	//				}
	//				//액자에서 나무막대기 얻은 후 
	//				else if (room.picture_break == true)
	//				{
	//					line_nothing();
	//				}
	//			}
	//			else if (input.compare("금고") == 0)
	//			{
	//				room.isolation_out = false;
	//				//니퍼 얻기 전 
	//				if (room.isolation_out == 0 && item.nipper == 0)
	//				{
	//					safe();
	//					line_isolation_safe();
	//					while (room.isolation_out == 0)
	//					{
	//						safe();;
	//						printf("(금고 비밀번호를 입력하세요.)\n"); printf("입력 예시 : 1278, 3478, 2420 등");
	//						//정답 입력 시 
	//						if (input.compare("7004") == 0)
	//						{
	//							safe();
	//							//니퍼 얻음 
	//							printf("금고 안에는 니퍼가 들어있다."); printf("니퍼를 얻었다.");
	//							item.nipper = true; room.isolation_out = true;
	//							paint_safe();
	//						}
	//						//금고에서 벗어남 
	//						else if (input.compare("뒤로") == 0)
	//						{
	//							room.isolation_out = true;
	//							paint_safe();
	//						}
	//						//오답 입력 시 
	//						else
	//						{
	//							system("cls"); safe();
	//							printf("번호가 틀렸습니다. 다시 입력해 주세요.");
	//						}
	//					}
	//				}
	//				//니퍼를 얻은 후 
	//				else if (room.isolation_out == false && item.nipper == true)
	//				{
	//					safe();
	//					line_nothing();
	//					paint_safe();
	//				}
	//			}
	//			// <를 누르면 화면 전환		
	//			if (input.compare("<") == 0)
	//			{
	//				if (room.check_space == 1)
	//				{
	//					flower_chest();
	//					room.check_space = 2;
	//				}
	//				else if (room.check_space == 2)
	//				{
	//					paint_safe();
	//					room.check_space = 3;
	//				}
	//				else if (room.check_space == 3)
	//				{
	//					door_switch();
	//					room.check_space = 4;
	//				}
	//				else if (room.check_space == 4)
	//				{
	//					window_bed();
	//					room.check_space = 1;
	//				}
	//			}
	//			// >를 누르면 화면 전환		
	//			if (input.compare(">") == 0)
	//			{
	//				if (room.check_space == 1)
	//				{
	//					door_switch();
	//					room.check_space = 4;
	//				}
	//				else if (room.check_space == 2)
	//				{
	//					window_bed();
	//					room.check_space = 1;
	//				}
	//				else if (room.check_space == 3)
	//				{
	//					flower_chest();
	//					room.check_space = 2;
	//				}
	//				else if (room.check_space == 4)
	//				{
	//					paint_safe();
	//					room.check_space = 3;
	//				}
	//			}
	//		}
	//		//장소4에 있을 때 상호작용 
	//		if (room.check_space == 4)
	//		{
	//			door_switch();

	//			if (input.compare("스위치") == 0)
	//			{
	//				line_isolation_switch();
	//				door_switch();
	//			}

	//			else if (input.compare("자물쇠1") == 0)
	//			{
	//				//자물쇠를 열기 전 
	//				if (item.wire == false && room.lock1 == false)
	//				{
	//					lock_key();
	//					line_isolation_lock1();
	//					door_switch();
	//				}
	//				//철사와 니퍼가 있을 때 자물쇠를 열 수 있음 
	//				else if (item.wire == true && room.lock1 == false && item.nipper == true)
	//				{
	//					lock_key();
	//					//자물쇠1을 염 
	//					printf("철사를 니퍼로 구부려 락픽으로 만들었다."); printf("                                         ");
	//					room.lock1 = true; room.isolation_open1 = true;
	//					printf("락픽으로 자물쇠를 땄다."); item.wire = false; item.nipper = false;
	//					door_switch();
	//				}
	//				else if (item.wire == true && room.lock1 == false && item.nipper == true)
	//				{
	//					lock_key();
	//					printf("철사로 자물쇠를 따려고 시도 했지만"); printf("철사가 너무 올곧아 실패하였다.");
	//					printf("                                         "); printf("                                         ");
	//					printf("니퍼같이 철사를 구부릴 만한 것이 필요하다.");
	//					door_switch();
	//				}
	//				//자물쇠를 연 후 
	//				else if (item.wire == false && room.lock1 == true)
	//				{
	//					lock_key();
	//					printf("이미 자물쇠를 열었다.");
	//					door_switch();
	//				}
	//			}

	//			else if (input.compare("자물쇠2") == 0)
	//			{
	//				lock_4();
	//				room.isolation_out2 = false;
	//				//자물쇠2 열기 전 
	//				if (room.isolation_out2 == false && room.lock2 == false)
	//				{
	//					line_isolation_lock2();
	//					room.isolation_out2 = false;
	//					while (room.isolation_out2 == false)
	//					{
	//						lock_4();
	//						printf("(자물쇠 비밀번호를 입력하세요.)"); printf("입력 예시 : 1278, 3478, 2427 등");
	//						//정답 입력 시 
	//						if (input.compare("1958") == 0)
	//						{
	//							lock_4();
	//							printf("자물쇠를 열었다.");
	//							door_switch();;
	//							//자물쇠2를 염 
	//							room.lock2 = true; room.isolation_out2 = true; room.isolation_open2 = true;
	//						}
	//						//자물쇠2에서 벗어남
	//						else if (input.compare("뒤로") == 0)
	//						{
	//							room.isolation_out2 = true; room.lock2 = true;
	//							door_switch();
	//						}
	//						//오답 입력 시 
	//						else
	//						{
	//							lock_4();
	//							printf("번호가 틀렸습니다. 다시 입력해 주세요.");
	//						}
	//					}
	//				}
	//				//자물쇠2 연 후 
	//				else if (room.isolation_out2 == false && room.lock2 == true)
	//				{
	//					lock_4();
	//					printf("이미 자물쇠를 열었다.");
	//					door_switch();
	//				}
	//			}


	//			else if (input.compare("문") == 0)
	//			{
	//				//자물쇠를 모두 열기 전 
	//				if (room.isolation_open1 == false && room.isolation_open2 == false)
	//				{
	//					line_isolation_door();
	//				}
	//				//자물쇠1만 열었을 때 
	//				if (room.isolation_open1 == true && room.isolation_open2 == false)
	//				{
	//					printf("아직 자물쇠2를 열지 않았다.");
	//					door_switch();
	//				}
	//				//자물쇠2만 열었을 때 
	//				if (room.isolation_open1 == false && room.isolation_open2 == true)
	//				{
	//					printf("아직 자물쇠1을 열지 않았다.");
	//					door_switch();
	//				}
	//				//자물쇠를 모두 연 후 
	//				else if (room.isolation_open1 == true && room.isolation_open2 == true)
	//				{
	//					door_switch();
	//					printf("이제 드디어 입원실에 갈 수 있겠군.");
	//					//입원실 파트 종료 
	//					room.isolation_end = true;
	//				}
	//			}
	//			// <를 누르면 화면 전환		
	//			if (input.compare("<") == 0)
	//			{
	//				if (room.check_space == 1)
	//				{
	//					flower_chest();
	//					room.check_space = 2;
	//				}
	//				else if (room.check_space == 2)
	//				{
	//					paint_safe();
	//					room.check_space = 3;
	//				}
	//				else if (room.check_space == 3)
	//				{
	//					door_switch();
	//					room.check_space = 4;
	//				}
	//				else if (room.check_space == 4)
	//				{
	//					window_bed();
	//					room.check_space = 1;
	//				}
	//			}
	//			// >를 누르면 화면 전환		
	//			if (input.compare(">") == 0)
	//			{
	//				if (room.check_space == 1)
	//				{
	//					door_switch();
	//					room.check_space = 4;
	//				}
	//				else if (room.check_space == 2)
	//				{
	//					window_bed();
	//					room.check_space = 1;
	//				}
	//				else if (room.check_space == 3)
	//				{
	//					flower_chest();
	//					room.check_space = 2;
	//				}
	//				else if (room.check_space == 4)
	//				{
	//					paint_safe();
	//					room.check_space = 3;
	//				}
	//			}
	//		}
	//	}
	//}
}

void RoomNum(int & roomCount, string input)
{

		//오른쪽 이동
		if (roomCount == 0 && input.compare(">"))
		{
			roomCount = 1;
			door_switch();
		}
		else if (roomCount == 1 && input.compare(">"))
		{
			roomCount = 2;
			paint_safe();
		}
		else if (roomCount == 2 && input.compare(">"))
		{
			roomCount = 3;
			flower_chest();
		}
		else if (roomCount == 3 && input.compare(">"))
		{
			roomCount = 4;
			window_bed();
		}

		//왼쪽 이동
		if (roomCount == 4&& input.compare("<"))
		{
			roomCount = 3;
			flower_chest();
		}
		else if (roomCount == 3 && input.compare("<"))
		{
			roomCount = 2;
			paint_safe();
		}
		else if (roomCount == 2 && input.compare("<"))
		{
			roomCount = 1;
			door_switch();
		}
		else if (roomCount == 1 && input.compare("<"))
		{
			roomCount = 4;
			window_bed();
		}
}

int main()
{
	system("mode con cols=150 lines=50");
	Item item;
	Room room;

	string input;
	int roomCount = 0;
	startScene();
	CheckPlayer(input);

	if (input.compare("1"))
	{
		line_story0();
		window_bed();
		while (room.isolation_end == 0)
		{
			CheckPlayer(input);
			if (input.compare(">"))
			{
				roomCount++;
				RoomNum(roomCount, input);
			}
			else if (input.compare("<"))
			{
				roomCount--;
				RoomNum(roomCount, input);
			}
			else if (-1 > roomCount)
			{
				cout << "더 이상 왼쪽으로 갈 수 없습니다";
			}
			else if (5 < roomCount)
			{
				cout << "더 이상 오른쪽으로 갈 수 없습니다";
			}
		}
	}
}