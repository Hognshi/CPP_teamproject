#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include "ASCII_ART.cpp"

int main()
{
	//콘솔창 크기 설정 
	system("mode con cols=150 lines=60");

	//입원실 변수 설정 
	int next = 0; int check_space = 0; int bed_under = 0; int pot_break = 0; int picture_break = 0; int lock1 = 0;
	int isolation_open1 = 0; int isolation_open2 = 0; int isolation_end = 0; int chest_3_judge = 0; int isolation_out = 0; int isolation_out2 = 0; int lock2 = 0;

	//인트로 
	while (next == 0)
	{
		system("cls"); main_intro(); talk();
		char input[10] = ""; gotoxy(0, 58); printf("입력 : "); scanf("%s", input);

		//게임시작 
		if (!strcmp(input, "1"))
		{
			next = 1;
		}
		//게임방법 
		else if (!strcmp(input, "2"))
		{
			game_help();
		}
	}

	//튜토리얼 스토리 
	system("cls"); talk(); item();
	line_story0();

	//감금실
	system("cls"); window_bed(); talk(); item();
	check_space = 1;
	line_story1();

	while (isolation_end == 0)
	{
		//장소1에 있을 때 상호작용 
		if (check_space == 1)
		{
			char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
			system("cls"); window_bed(); talk(); item();
			if (!strcmp(input, "침대"))
			{
				//침대 밑 확인 전 
				if (bed_under == 0)
				{
					//침대 밑을 확인할 수 있음 
					bed_under = 1;
					line_isolation_bed();
				}
				//침대 밑 확인 후 
				else if (bed_under == 1)
				{
					line_isolation_bed_under();
					system("cls"); window_bed(); talk(); item();
				}
			}

			else if (!strcmp(input, "창문"))
			{
				line_isolation_window();
			}

			// <를 누르면 화면 전환		
			if (!strcmp(input, "<"))
			{
				if (check_space == 1)
				{
					system("cls"); flower_chest(); talk(); item();
					check_space = 2;
				}
				else if (check_space == 2)
				{
					system("cls"); paint_safe(); talk(); item();
					check_space = 3;
				}
				else if (check_space == 3)
				{
					system("cls"); door_switch(); talk(); item();
					check_space = 4;
				}
				else if (check_space == 4)
				{
					system("cls"); window_bed(); talk(); item();
					check_space = 1;
				}
			}
			// >를 누르면 화면 전환		
			if (!strcmp(input, ">"))
			{
				if (check_space == 1)
				{
					system("cls"); door_switch(); talk(); item();
					check_space = 4;
				}
				else if (check_space == 2)
				{
					system("cls"); window_bed();  talk(); item();
					check_space = 1;
				}
				else if (check_space == 3)
				{
					system("cls"); flower_chest(); talk(); item();
					check_space = 2;
				}
				else if (check_space == 4)
				{
					system("cls"); paint_safe(); talk(); item();
					check_space = 3;
				}
			}
		}
		//장소2에 있을 때 상호작용 
		if (check_space == 2)
		{
			char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
			system("cls"); flower_chest(); talk(); item();
			if (!strcmp(input, "꽃"))
			{
				//화분을 깨부시기 전 
				if (pot_break == 0)
				{
					line_isolation_flower();
				}
				//화분을 깨부신 후 
				else if (pot_break == 1)
				{
					//철사를 얻기 전 
					if (wire == 0)
					{
						//철사 얻음 
						line_isolation_flower_decomposition();
						wire = 1; peg = 0; item();
					}
					//철사를 얻은 후 
					else if (wire == 1)
					{
						line_nothing();
					}
				}
			}
			else if (!strcmp(input, "꽃병"))
			{
				//화분을 깨기 전 
				if (pot_break == 0)
				{
					//나무막대기를 얻기 전 
					if (stick == 0)
					{
						line_isolation_flower_pot();
					}
					//나무막대기를 얻은 후 
					else if (stick == 1)
					{
						//화분을 꺰 
						pot_break = 1;
						line_isolation_flower_pot_break();
						stick = 0; item();
					}
				}
				//화분을 깬 후 
				else if (pot_break == 1)
				{
					line_nothing();
				}
			}
			else if (!strcmp(input, "서랍1"))
			{
				line_isolation_chest_1_2();
			}
			else if (!strcmp(input, "서랍2"))
			{
				line_isolation_chest_1_2();
			}
			else if (!strcmp(input, "서랍3"))
			{
				//서랍3에서 녹슨 못 얻기 전 
				if (chest_3_judge == 0)
				{
					chest_3_judge = 1;
					line_isolation_chest3();
					peg = 1; item();
				}
				//서랍3에서 녹슨 못 얻은 후 
				else if (chest_3_judge == 1)
				{
					line_nothing();
				}
			}
			// <를 누르면 화면 전환		
			if (!strcmp(input, "<"))
			{
				if (check_space == 1)
				{
					system("cls"); flower_chest(); talk(); item();
					check_space = 2;
				}
				else if (check_space == 2)
				{
					system("cls"); paint_safe(); talk(); item();
					check_space = 3;
				}
				else if (check_space == 3)
				{
					system("cls"); door_switch(); talk(); item();
					check_space = 4;
				}
				else if (check_space == 4)
				{
					system("cls"); window_bed(); talk(); item();
					check_space = 1;
				}
			}
			// >를 누르면 화면 전환		
			if (!strcmp(input, ">"))
			{
				if (check_space == 1)
				{
					system("cls"); door_switch(); talk(); item();
					check_space = 4;
				}
				else if (check_space == 2)
				{
					system("cls"); window_bed();  talk(); item();
					check_space = 1;
				}
				else if (check_space == 3)
				{
					system("cls"); flower_chest(); talk(); item();
					check_space = 2;
				}
				else if (check_space == 4)
				{
					system("cls"); paint_safe(); talk(); item();
					check_space = 3;
				}
			}
		}
		//장소3에 있을 때 상호작용 
		if (check_space == 3)
		{
			char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
			system("cls"); paint_safe(); talk(); item();
			if (!strcmp(input, "액자"))
			{
				//액자에서 나무막대기 얻기 전 
				if (picture_break == 0)
				{
					//나무막대기 얻음 
					picture_break = 1;
					line_isolation_picture();
					stick = 1; item();
				}
				//액자에서 나무막대기 얻은 후 
				else if (picture_break == 1)
				{
					line_nothing();
				}
			}
			else if (!strcmp(input, "금고"))
			{
				isolation_out = 0;
				//니퍼 얻기 전 
				if (isolation_out == 0 && nipper == 0)
				{
					system("cls"); safe(); talk(); item();
					line_isolation_safe();
					while (isolation_out == 0)
					{
						system("cls"); safe(); talk(); item();
						gotoxy(15, 52); printf("(금고 비밀번호를 입력하세요.)"); gotoxy(15, 53); printf("입력 예시 : 1278, 3478, 2420 등");
						char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
						//정답 입력 시 
						if (!strcmp(input, "7004"))
						{
							system("cls"); safe(); talk(); item();
							//니퍼 얻음 
							gotoxy(15, 52); printf("금고 안에는 니퍼가 들어있다."); gotoxy(15, 53); printf("니퍼를 얻었다."); getch();
							nipper = 1; isolation_out = 1; item();
							system("cls"); paint_safe(); talk(); item();
						}
						//금고에서 벗어남 
						else if (!strcmp(input, "뒤로"))
						{
							isolation_out = 1;
							system("cls"); paint_safe(); talk();  item();
						}
						//오답 입력 시 
						else
						{
							system("cls"); safe(); talk(); item();
							gotoxy(15, 52); printf("번호가 틀렸습니다. 다시 입력해 주세요."); getch();
						}
					}
				}
				//니퍼를 얻은 후 
				else if (isolation_out == 0 && nipper == 1)
				{
					system("cls"); safe(); talk(); item();
					line_nothing();
					system("cls"); paint_safe(); talk(); item();
				}
			}
			// <를 누르면 화면 전환		
			if (!strcmp(input, "<"))
			{
				if (check_space == 1)
				{
					system("cls"); flower_chest(); talk(); item();
					check_space = 2;
				}
				else if (check_space == 2)
				{
					system("cls"); paint_safe(); talk(); item();
					check_space = 3;
				}
				else if (check_space == 3)
				{
					system("cls"); door_switch(); talk(); item();
					check_space = 4;
				}
				else if (check_space == 4)
				{
					system("cls"); window_bed(); talk(); item();
					check_space = 1;
				}
			}
			// >를 누르면 화면 전환		
			if (!strcmp(input, ">"))
			{
				if (check_space == 1)
				{
					system("cls"); door_switch(); talk(); item();
					check_space = 4;
				}
				else if (check_space == 2)
				{
					system("cls"); window_bed();  talk(); item();
					check_space = 1;
				}
				else if (check_space == 3)
				{
					system("cls"); flower_chest(); talk(); item();
					check_space = 2;
				}
				else if (check_space == 4)
				{
					system("cls"); paint_safe(); talk(); item();
					check_space = 3;
				}
			}
		}
		//장소4에 있을 때 상호작용 
		if (check_space == 4)
		{
			char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
			system("cls"); door_switch(); talk(); item();

			if (!strcmp(input, "스위치"))
			{
				line_isolation_switch();
				system("cls"); door_switch(); talk(); item();
			}

			else if (!strcmp(input, "자물쇠1"))
			{
				//자물쇠를 열기 전 
				if (wire == 0 && lock1 == 0)
				{
					system("cls"); lock_key(); talk(); item();
					line_isolation_lock1();
					system("cls"); door_switch(); talk(); item();
				}
				//철사와 니퍼가 있을 때 자물쇠를 열 수 있음 
				else if (wire == 1 && lock1 == 0 && nipper == 1)
				{
					system("cls"); lock_key(); talk(); item();
					//자물쇠1을 염 
					gotoxy(15, 52); printf("철사를 니퍼로 구부려 락픽으로 만들었다."); getch(); gotoxy(15, 52); printf("                                         ");
					lock1 = 1; isolation_open1 = 1;
					gotoxy(15, 52); printf("락픽으로 자물쇠를 땄다."); getch(); wire = 3; nipper = 0; item();
					system("cls"); door_switch(); talk(); item();
				}
				else if (wire == 1 && lock1 == 0 && nipper == 0)
				{
					system("cls"); lock_key(); talk(); item();
					gotoxy(15, 52); printf("철사로 자물쇠를 따려고 시도 했지만"); gotoxy(15, 53); printf("철사가 너무 올곧아 실패하였다."); getch();
					gotoxy(15, 52); printf("                                         "); gotoxy(15, 53); printf("                                         ");
					gotoxy(15, 52); printf("니퍼같이 철사를 구부릴 만한 것이 필요하다."); getch();
					system("cls"); door_switch(); talk(); item();
				}
				//자물쇠를 연 후 
				else if (wire == 3 && lock1 == 1)
				{
					system("cls"); lock_key(); talk(); item();
					gotoxy(15, 52); printf("이미 자물쇠를 열었다."); getch();
					system("cls"); door_switch(); talk(); item();
				}
			}

			else if (!strcmp(input, "자물쇠2"))
			{
				system("cls"); lock_4(); talk(); item();
				isolation_out2 = 0;
				//자물쇠2 열기 전 
				if (isolation_out2 == 0 && lock2 == 0)
				{
					line_isolation_lock2();
					isolation_out2 = 0;
					while (isolation_out2 == 0)
					{
						system("cls"); lock_4(); talk(); item();
						gotoxy(15, 52); printf("(자물쇠 비밀번호를 입력하세요.)"); gotoxy(15, 53); printf("입력 예시 : 1278, 3478, 2427 등");
						char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
						//정답 입력 시 
						if (!strcmp(input, "1958"))
						{
							system("cls"); lock_4(); talk();  item();
							gotoxy(15, 52); printf("자물쇠를 열었다."); getch();
							system("cls"); door_switch(); talk(); item();
							//자물쇠2를 염 
							lock2 = 1; isolation_out2 = 1; isolation_open2 = 1;
						}
						//자물쇠2에서 벗어남
						else if (!strcmp(input, "뒤로"))
						{
							isolation_out2 = 1; lock2 = 0;
							system("cls"); door_switch(); talk(); item();
						}
						//오답 입력 시 
						else
						{
							system("cls"); lock_4(); talk();  item();
							gotoxy(15, 52); printf("번호가 틀렸습니다. 다시 입력해 주세요."); getch();
						}
					}
				}
				//자물쇠2 연 후 
				else if (isolation_out2 == 0 && lock2 == 1)
				{
					system("cls"); lock_4(); talk(); item();
					gotoxy(15, 52); printf("이미 자물쇠를 열었다."); getch();
					system("cls"); door_switch(); talk(); item();
				}
			}


			else if (!strcmp(input, "문"))
			{
				//자물쇠를 모두 열기 전 
				if (isolation_open1 == 0 && isolation_open2 == 0)
				{
					line_isolation_door();
				}
				//자물쇠1만 열었을 때 
				if (isolation_open1 == 1 && isolation_open2 == 0)
				{
					gotoxy(15, 52); printf("아직 자물쇠2를 열지 않았다."); getch();
					system("cls"); door_switch(); talk(); item();
				}
				//자물쇠2만 열었을 때 
				if (isolation_open1 == 0 && isolation_open2 == 1)
				{
					gotoxy(15, 52); printf("아직 자물쇠1을 열지 않았다."); getch();
					system("cls"); door_switch(); talk(); item();
				}
				//자물쇠를 모두 연 후 
				else if (isolation_open1 == 1 && isolation_open2 == 1)
				{
					system("cls"); door_switch(); talk(); item();
					gotoxy(15, 52); printf("이제 드디어 입원실에 갈 수 있겠군."); getch();
					//입원실 파트 종료 
					isolation_end = 1;
				}
			}
			// <를 누르면 화면 전환		
			if (!strcmp(input, "<"))
			{
				if (check_space == 1)
				{
					system("cls"); flower_chest(); talk(); item();
					check_space = 2;
				}
				else if (check_space == 2)
				{
					system("cls"); paint_safe(); talk();
					check_space = 3;
				}
				else if (check_space == 3)
				{
					system("cls"); door_switch(); talk(); item();
					check_space = 4;
				}
				else if (check_space == 4)
				{
					system("cls"); window_bed(); talk(); item();
					check_space = 1;
				}
			}
			// >를 누르면 화면 전환		
			if (!strcmp(input, ">"))
			{
				if (check_space == 1)
				{
					system("cls"); door_switch(); talk(); item();
					check_space = 4;
				}
				else if (check_space == 2)
				{
					system("cls"); window_bed();  talk(); item();
					check_space = 1;
				}
				else if (check_space == 3)
				{
					system("cls"); flower_chest(); talk(); item();
					check_space = 2;
				}
				else if (check_space == 4)
				{
					system("cls"); paint_safe(); talk(); item();
					check_space = 3;
				}
			}
		}
	}
	////////입원실 시작///////////// 
	if (isolation_end == 1)
	{
		//장면1 
		system("cls"); talk(); door();
		line1();


		//장면2 
		system("cls"); hospital(); talk();
		line2();


		//장면2-1
		system("cls"); door(); talk();
		line3();


		//장면3
		//변수선언// 
		int judge1 = 0; int judge2 = 0; int judge3 = 0; int judge4 = 0; int judge5 = 0; int judge6 = 0; int judge7 = 0; int judge8 = 0;
		int judge11 = 0; int judge22 = 0; int judge33 = 0; int judge44 = 0; int judge55 = 0; int judge66 = 0; int cardkey = 0; int out = 0;

		system("cls"); hospital(); talk();

		while (out == 0)
		{
			system("cls"); hospital(); talk();
			char input[10] = ""; gotoxy(0, 58); printf("입력 : "); scanf("%s", input);

			//침대1 
			if (!strcmp(input, "침대1"))
			{
				//두 번째 이상 침대1을 봤을 때 대사 
				if (judge1 == 2)
				{
					system("cls"); bed(); talk();
					judge1 = 1;

					while (judge1 == 1)
					{
						system("cls"); bed(); talk();
						char input[10] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

						if (!strcmp(input, "침대"))
						{
							line_bed1();
						}
						else if (!strcmp(input, "꽃병"))
						{
							line_flower1();
						}
						else if (!strcmp(input, "뒤로"))
						{
							judge1 = 2;
						}
					}
				}
				//처음 침대1을 봤을 때 대사 
				else if (judge1 == 0)
				{
					system("cls"); bed(); talk();
					line4();
					judge1 = 2;
				}

			}
			//침대2 
			else if (!strcmp(input, "침대2"))
			{
				system("cls"); bed(); talk();
				judge2 = 0;

				while (judge2 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "침대"))
					{
						line_bed2();
					}
					else if (!strcmp(input, "꽃병"))
					{
						line_flower2();
					}
					else if (!strcmp(input, "뒤로"))
					{
						judge2 = 1;
					}
				}
			}
			//침대3 
			else if (!strcmp(input, "침대3"))
			{
				system("cls"); bed(); talk();
				judge3 = 0;

				while (judge3 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "침대"))
					{
						line_bed3();
					}
					else if (!strcmp(input, "꽃병"))
					{
						line_flower3();
					}
					else if (!strcmp(input, "뒤로"))
					{
						judge3 = 1;
					}
				}
			}
			//침대4 
			else if (!strcmp(input, "침대4"))
			{
				system("cls"); bed(); talk();
				judge4 = 0;

				while (judge4 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "침대"))
					{
						line_bed4();
					}
					else if (!strcmp(input, "꽃병"))
					{
						line_flower4();
					}
					else if (!strcmp(input, "뒤로"))
					{
						judge4 = 1;
					}
				}
			}
			//침대5 
			else if (!strcmp(input, "침대5"))
			{
				system("cls"); bed(); talk();
				judge5 = 0;

				while (judge5 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "침대"))
					{
						line_bed5();
					}
					else if (!strcmp(input, "꽃병"))
					{
						line_flower5();
					}
					else if (!strcmp(input, "뒤로"))
					{
						judge5 = 1;
					}
				}
			}
			//침대6 
			else if (!strcmp(input, "침대6"))
			{
				//두 번 이상 침대6을 봤을 때 
				if (judge6 == 2)
				{
					system("cls"); bed(); talk();
					judge6 = 1;

					while (judge6 == 1)
					{
						system("cls"); bed(); talk();
						char input[10] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

						if (!strcmp(input, "침대"))
						{
							line_bed6_1();
						}
						else if (!strcmp(input, "꽃병"))
						{
							line_flower6();
						}
						else if (!strcmp(input, "뒤로"))
						{
							judge6 = 2;
						}
					}
				}
				//처음 침대6을 봤을 때 
				else if (judge6 == 0)
				{
					system("cls"); bed(); talk();
					line_bed6();
					judge6 = 2;
				}
			}
			//침대7 
			else if (!strcmp(input, "침대7"))
			{
				system("cls"); bed(); talk();
				judge7 = 0;

				while (judge7 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "침대"))
					{
						line_bed7();
					}
					else if (!strcmp(input, "꽃병"))
					{
						line_flower7();
					}
					else if (!strcmp(input, "뒤로"))
					{
						judge7 = 1;
					}
				}
			}
			//침대8 
			else if (!strcmp(input, "침대8"))
			{
				system("cls"); bed(); talk();
				judge8 = 0;

				while (judge8 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "침대"))
					{
						line_bed8();
					}
					else if (!strcmp(input, "꽃병"))
					{
						line_flower8();
					}
					else if (!strcmp(input, "뒤로"))
					{
						judge8 = 1;
					}
				}
			}
			//서랍1 
			else if (!strcmp(input, "서랍1"))
			{
				system("cls"); chest(); talk();
				//자물쇠를 풀기 전 상호작용 
				if (judge11 == 0)
				{
					line_chest1();
					judge11 = 1;
					while (judge11 == 1)
					{
						system("cls"); lock_5(); talk();
						gotoxy(15, 52); printf("(자물쇠 번호를 입력하세요.)"); gotoxy(15, 53); printf("입력 예시 : 08491, 34731, 97263 등");
						char input[10] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

						if (!strcmp(input, "53724"))
						{
							system("cls"); lock_5(); talk();
							line_chest1_1();
							judge11 = 2;
						}
						else if (!strcmp(input, "뒤로"))
						{
							judge11 = 0;
						}
						else
						{
							system("cls"); lock_5(); talk();
							gotoxy(15, 52); printf("번호가 틀렸습니다. 다시 입력해 주세요."); getch();
						}
					}
				}
				//자물쇠를 맞춘 후 대사  
				else if (judge11 == 2)
				{
					system("cls"); chest(); talk();
					line_chest1_2(); USB = 1;
				}
			}
			//서랍2
			else if (!strcmp(input, "서랍2"))
			{
				system("cls"); chest(); talk();
				line_chest2();
			}
			//서랍3 
			else if (!strcmp(input, "서랍3"))
			{
				system("cls"); chest(); talk();
				line_chest3();
			}

			//서랍4
			else if (!strcmp(input, "서랍4"))
			{
				system("cls"); chest(); talk();
				line_chest4();
			}

			//서랍5 
			else if (!strcmp(input, "서랍5"))
			{
				system("cls"); chest(); talk();
				line_chest5();
			}

			//서랍6
			else if (!strcmp(input, "서랍6"))
			{
				system("cls"); chest(); talk();
				line_chest6();
			}

			//서랍7
			else if (!strcmp(input, "서랍7"))
			{
				system("cls"); chest(); talk();
				line_chest7();
			}

			//서랍8
			else if (!strcmp(input, "서랍8"))
			{
				system("cls"); chest(); talk();
				line_chest8();
			}

			//쓰레기통 
			else if (!strcmp(input, "쓰레기통"))
			{
				system("cls"); trash(); talk();
				line_trash();
			}

			//책장 
			else if (!strcmp(input, "책장"))
			{
				system("cls"); bookshelf(); talk();
				line_bookshelf();
				judge22 = 0;

				while (judge22 == 0)
				{
					char input[20] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "탄생의_꽃"))
					{
						line_book_flower();
						system("cls"); bookshelf(); talk();
						gotoxy(15, 50); printf("[탄생의_꽃]\n"); gotoxy(15, 51); printf("[어서오세요_여우별_카페에]\n"); gotoxy(15, 52); printf("[인생문학_시]\n");
					}
					else if (!strcmp(input, "어서오세요_여우별_카페에"))
					{
						line_book_welcome_cafe();
						system("cls"); bookshelf(); talk();
						gotoxy(15, 50); printf("[탄생의_꽃]\n"); gotoxy(15, 51); printf("[어서오세요_여우별_카페에]\n"); gotoxy(15, 52); printf("[인생문학_시]\n");
					}
					else if (!strcmp(input, "인생문학_시"))
					{
						line_book_poem();
						system("cls"); bookshelf(); talk();
						gotoxy(15, 50); printf("[탄생의_꽃]\n"); gotoxy(15, 51); printf("[어서오세요_여우별_카페에]\n"); gotoxy(15, 52); printf("[인생문학_시]\n");
					}
					else if (!strcmp(input, "뒤로"))
					{
						judge22 = 1;
					}
				}
			}

			//창문 
			else if (!strcmp(input, "창문"))
			{
				system("cls"); window(); talk();
				line_window();
			}

			//문 
			else if (!strcmp(input, "문"))
			{
				system("cls"); door(); talk();
				if (cardkey == 0)
				{
					//카드키 사용전 				
					line_door();
				}

				else if (cardkey == 1)
				{
					//카드키 사용 후 				
					gotoxy(15, 52); printf("카드키를 사용하여 문을 열었다."); getch(); gotoxy(15, 52); printf("                                            "); gotoxy(15, 52);
					printf("나가기 전에 수술실 위치를 확실하게 생각해야겠어"); gotoxy(15, 53); printf("수술실 위치가 어디지?"); getch();
					char input[20] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

					//수술실 위치를 맞추면 
					if (!strcmp(input, "G418"))
					{
						system("cls"); talk(); door();
						gotoxy(15, 52); printf("G418. 여러번 확인해도 확실하게 G418이야."); gotoxy(15, 53); printf("이제 수술실로 가야겠어.");
						out = 1; getch(); system("cls"); talk();
					}
					//수술실 위치를 틀리면 
					else
					{
						system("cls"); talk(); door();
						gotoxy(15, 52); printf("뭔가 이상한데?  다시 한 번 확인해 봐야겠어"); getch();
					}
				}
			}

			//책상 
			else if (!strcmp(input, "책상"))
			{
				system("cls"); table(); talk();
				judge33 = 0;

				while (judge33 == 0)
				{
					system("cls"); table(); talk();
					gotoxy(15, 51); printf("[노트북]"); gotoxy(15, 52); printf("[서류]"); gotoxy(15, 53); printf("[서랍]");
					char input[20] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "노트북"))
					{
						judge44 = 0;
						while (judge44 == 0 && judge55 == 0)
						{
							system("cls"); table(); talk();
							gotoxy(15, 52); printf("노트북에는 잠금이 걸려있다."); getch(); gotoxy(15, 52); printf("                                                      ");
							gotoxy(15, 52); printf("비밀번호 힌트가 써져있다."); getch(); gotoxy(15, 52); printf("                                                      ");
							gotoxy(15, 51); printf("[ㅇ6= ㄷ26 ㅎ=ㄴ]");
							gotoxy(15, 53); printf("(비밀번호를 입력하세요.)"); gotoxy(15, 54); printf("입력 예시 : 3671832, 검은병동, blackhospital, dkssudgktpdy 등");
							char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
							if (!strcmp(input, "양동현"))
							{
								system("cls"); table(); talk();
								judge44 = 1; judge55 = 1;
								gotoxy(15, 52); printf("비밀번호가 해제되었습니다."); getch();
							}
							else if (!strcmp(input, "뒤로"))
							{
								judge44 = 1;
							}
							else
							{
								system("cls"); table(); talk();
								gotoxy(15, 52); printf("비밀번호가 틀렸습니다."); getch();
							}
						}
						while (judge44 == 0 && judge55 == 1)
						{
							system("cls"); laptop(); talk();
							gotoxy(15, 52); printf("[메신저]"); gotoxy(15, 53); printf("[지도]"); gotoxy(15, 54);
							char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
							if (!strcmp(input, "메신저"))
							{
								line_message();
							}
							else if (!strcmp(input, "지도"))
							{
								system("cls"); talk(); maps();
								gotoxy(15, 52); printf("이 병원의 지도이다."); gotoxy(15, 53); printf("(뚫린 곳이 문이고 @가 창문이고 칠해져 있는 곳이 정원이다.)"); getch();
							}
							else if (!strcmp(input, "뒤로"))
							{
								judge44 = 1;
							}
						}
					}
					else if (!strcmp(input, "서류"))
					{
						line_paper();
					}
					else if (!strcmp(input, "서랍"))
					{
						system("cls"); talk(); lock_8();
						//서랍에서 카드키를 찾기 전 
						if (judge66 == 0)
						{
							gotoxy(15, 52); printf("서랍에 8자리 자물쇠가 걸려있다."); getch(); gotoxy(15, 52); printf("                                                      ");
							judge66 = 1;
							while (judge66 == 1)
							{
								system("cls"); talk(); lock_8();
								gotoxy(15, 52); printf("(자물쇠 번호를 입력하세요.)"); gotoxy(15, 53); printf("입력 예시 : 1278, 3478, 24678 등");
								char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);

								if (!strcmp(input, "35678"))
								{
									system("cls"); talk(); lock_8();
									gotoxy(15, 52); printf("안에는 카드키가 들어있다."); gotoxy(15, 53); printf("카드키를 얻었다."); getch();
									judge66 = 2; cardkey = 1;
								}
								else if (!strcmp(input, "뒤로"))
								{
									judge66 = 0;
								}
								else
								{
									system("cls"); lock_8(); talk();
									gotoxy(15, 52); printf("번호가 틀렸습니다. 다시 입력해 주세요."); getch();
								}
							}
						}
						//서랍에서 카드키를 찾은 후 
						else if (judge66 == 2)
						{
							system("cls"); lock_8(); talk();
							gotoxy(15, 52); printf("더이상 서랍에서 찾을 것이 없다."); getch();
						}
					}
					else if (!strcmp(input, "뒤로"))
					{
						judge33 = 1;
					}
				}
			}
		}
	}
	/////////////수술실 시작////////////////////////////// 

		//수술실 변수 선언 
	int surgery_end = 0; int key = 0; int s_judge_chest = 0; int s_judge_chest_out = 0; int record = 0; int s_judge_table_out = 0; int s_judge_laptop = 0; int s_judge_laptop_open = 0;
	int s_judge_laptop_out = 0; int normal_end = 0; int true_end = 0;
	USB = 1;
	system("cls"); door(); talk(); item();
	line_surgery_story();
	while (surgery_end == 0)
	{
		system("cls"); surgery_next_room(); talk(); item();
		char input[10] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);
		//침대 상호작용 
		if (!strcmp(input, "침대"))
		{
			system("cls"); surgery_bed(); talk(); item();
			line_surgery_bed();
			system("cls"); talk(); item();
			line_surgery_bed_under();
		}
		//카트 상호작용 
		else if (!strcmp(input, "카트"))
		{
			system("cls"); surgery_cart(); talk(); item();
			line_surgery_cart();
		}
		//문1 상호작용 
		else if (!strcmp(input, "문1"))
		{
			//열쇠를 찾기 전 
			if (key == 0)
			{
				system("cls"); door(); talk(); item();
				line_surgery_door1();
			}
			//열쇠만 찾고 자료는 찾지 않았을 때 
			else if (key == 1 && data == 0)
			{
				system("cls"); door(); talk(); item();
				//수술실 종료 
				surgery_end = 1; normal_end = 1;
				line_surgery_door1_1();
			}
			//열쇠와 자료 모두 찾았을 때 
			else if (key == 1 && data == 1)
			{
				system("cls"); door(); talk(); item();
				//수술실 종료 
				surgery_end = 1; true_end = 1;
				line_surgery_door1_2();
			}
		}
		//문2 상호작용 
		else if (!strcmp(input, "문2"))
		{
			system("cls"); surgery_door2(); talk(); item();
			line_surgery_door2();
		}
		//문3 상호작용 
		else if (!strcmp(input, "문3"))
		{
			system("cls"); door(); talk(); item();
			line_surgery_door3();
		}
		//책상 상호작용 
		else if (!strcmp(input, "책상"))
		{
			s_judge_table_out = 0;
			while (s_judge_table_out == 0)
			{
				system("cls"); surgery_table(); talk(); item();
				gotoxy(15, 51); printf("[노트북]"); gotoxy(15, 52); printf("[녹음기]");
				char input[20] = " "; gotoxy(0, 58); printf("입력 :           "); gotoxy(7, 58); scanf("%s", input);
				//노트북 
				if (!strcmp(input, "노트북"))
				{
					s_judge_laptop = 0;
					//노트북 비밀번호 해제 전 
					while (s_judge_laptop == 0 && s_judge_laptop_open == 0)
					{
						system("cls"); surgery_table(); talk(); item();
						gotoxy(15, 52); printf("노트북에는 잠금이 걸려있다."); getch(); gotoxy(15, 52); printf("                                                      ");
						gotoxy(15, 52); printf("비밀번호 힌트가 써져있다."); getch(); gotoxy(15, 52); printf("                                                      ");
						gotoxy(15, 51); printf("[진정제, C/H/O, +, 6자리]");
						gotoxy(15, 53); printf("(비밀번호를 입력하세요.)"); gotoxy(15, 54); printf("입력 예시 : 3671832, 검은병동, blackhospital, dkssudgktpdy 등");
						char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
						if (!strcmp(input, "648513"))
						{
							system("cls"); surgery_table(); talk(); item();
							s_judge_laptop = 1; s_judge_laptop_open = 1;
							gotoxy(15, 52); printf("비밀번호가 해제되었습니다."); getch();
						}
						else if (!strcmp(input, "뒤로"))
						{
							s_judge_laptop = 1;
						}
						else
						{
							system("cls"); surgery_table(); talk(); item();
							gotoxy(15, 52); printf("비밀번호가 틀렸습니다."); getch();
						}
					}
					//노트북 비밀번호 해제 후 
					while (s_judge_laptop == 0 && s_judge_laptop_open == 1 && USB == 1)
					{
						system("cls"); laptop(); talk();  item();
						s_judge_laptop_out = 0;
						gotoxy(15, 52); printf("노트북에는 여러 자료들이 들어있다."); getch(); gotoxy(15, 52); printf("                                                      ");
						gotoxy(15, 52); printf("개중에는 기밀문서도 꽤 있는 것 같다."); getch(); gotoxy(15, 52); printf("                                                      ");
						gotoxy(15, 52); printf("이걸 들고 갈 방법이 없을까?"); getch();
						while (s_judge_laptop_out == 0)
						{
							char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
							if (!strcmp(input, "USB"))
							{
								system("cls"); laptop(); talk();  item();
								s_judge_laptop_out = 1; s_judge_laptop = 1; USB = 2; data = 1;
								gotoxy(15, 52); printf("입원실에서 얻은 USB를 이용하여 자료를 담았다."); getch(); gotoxy(15, 52); printf("                                                      ");
								gotoxy(15, 52); printf("이거면 나가서 신고할 때 자료가 충분할거야."); getch(); gotoxy(15, 52); printf("                                                      ");
							}
							else if (!strcmp(input, "뒤로"))
							{
								s_judge_laptop_out = 1; s_judge_laptop = 1;
							}
							else
							{
								system("cls"); laptop(); talk(); item();
								gotoxy(15, 52); printf("아무일도 일어나지 않았다."); getch();
							}
						}
					}
					//노트북 자료 담은 후 
					if (USB == 2)
					{
						system("cls"); laptop(); talk(); item();
						line_nothing();
					}
				}
				//녹음기 
				else if (!strcmp(input, "녹음기"))
				{
					line_record(); record = 1;
				}
				else if (!strcmp(input, "뒤로"))
				{
					s_judge_table_out = 1;
				}
			}
		}
		//사물함 상호작용 
		else if (!strcmp(input, "사물함"))
		{
			system("cls"); surgery_locker(); talk(); item();
			//녹음 듣기 전 
			if (record == 0)
			{
				line_surgery_locker_before();
			}
			//녹음 들은 후 
			else if (record == 1 && key == 0)
			{
				//열쇠 얻음 
				key = 1;
				line_surgery_locker_after();
			}
			//이제 더이상 찾을 것이 없음 
			else if (record == 1 && key == 1)
			{
				line_nothing();
			}
		}
		//찬장 상호작용 
		else if (!strcmp(input, "찬장"))
		{
			s_judge_chest_out = 0;
			//비밀번호 입력 전 
			while (s_judge_chest == 0 && s_judge_chest_out == 0)
			{
				system("cls"); surgery_chest(); talk(); item();
				line_surgery_chest();
				system("cls"); lock_direction(); talk();   item();
				gotoxy(15, 53); printf("(비밀번호를 입력하세요.)"); gotoxy(15, 54); printf("입력 예시 : 왼오오위, 아래위왼왼오, 오왼오왼위아래 등");
				char input[10] = " "; gotoxy(0, 58); printf("입력 :                                           "); gotoxy(7, 58); scanf("%s", input);
				//정답 입력 시 
				if (!strcmp(input, "왼왼위아래오아래"))
				{
					system("cls"); lock_direction(); talk(); item();
					s_judge_chest = 1; s_judge_chest_out = 1;
					gotoxy(15, 52); printf("자물쇠가 열렸습니다."); getch();
				}
				//빠져나올 시 
				else if (!strcmp(input, "뒤로"))
				{
					s_judge_chest_out = 1;
				}
				//오답 입력 시 
				else
				{
					system("cls"); lock_direction(); talk(); item();
					gotoxy(15, 52); printf("비밀번호가 틀렸습니다."); getch();
				}
			}
			//비밀번호 입력 후 
			while (s_judge_chest == 1 && s_judge_chest_out == 0)
			{
				system("cls"); surgery_chest_open(); talk(); s_judge_chest_out = 1; item();
				gotoxy(15, 52); printf("찬장 안에는 여러 약품들이 들어있다."); getch();
			}
		}
	}
	if (normal_end == 1 && true_end == 0)
	{
		system("cls"); talk();
		line_normal_end();
		system("cls"); main_intro(); gotoxy(0, 0); printf("                                                                                                                                            ");
	}
	else if (normal_end == 0 && true_end == 1)
	{
		system("cls"); talk();
		line_true_end();
		system("cls"); main_intro(); gotoxy(0, 0); printf("                                                                                                                                            ");
	}

}