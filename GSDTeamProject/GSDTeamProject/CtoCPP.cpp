#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include "ASCII_ART.cpp"

int main()
{
	//�ܼ�â ũ�� ���� 
	system("mode con cols=150 lines=60");

	//�Կ��� ���� ���� 
	int next = 0; int check_space = 0; int bed_under = 0; int pot_break = 0; int picture_break = 0; int lock1 = 0;
	int isolation_open1 = 0; int isolation_open2 = 0; int isolation_end = 0; int chest_3_judge = 0; int isolation_out = 0; int isolation_out2 = 0; int lock2 = 0;

	//��Ʈ�� 
	while (next == 0)
	{
		system("cls"); main_intro(); talk();
		char input[10] = ""; gotoxy(0, 58); printf("�Է� : "); scanf("%s", input);

		//���ӽ��� 
		if (!strcmp(input, "1"))
		{
			next = 1;
		}
		//���ӹ�� 
		else if (!strcmp(input, "2"))
		{
			game_help();
		}
	}

	//Ʃ�丮�� ���丮 
	system("cls"); talk(); item();
	line_story0();

	//���ݽ�
	system("cls"); window_bed(); talk(); item();
	check_space = 1;
	line_story1();

	while (isolation_end == 0)
	{
		//���1�� ���� �� ��ȣ�ۿ� 
		if (check_space == 1)
		{
			char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
			system("cls"); window_bed(); talk(); item();
			if (!strcmp(input, "ħ��"))
			{
				//ħ�� �� Ȯ�� �� 
				if (bed_under == 0)
				{
					//ħ�� ���� Ȯ���� �� ���� 
					bed_under = 1;
					line_isolation_bed();
				}
				//ħ�� �� Ȯ�� �� 
				else if (bed_under == 1)
				{
					line_isolation_bed_under();
					system("cls"); window_bed(); talk(); item();
				}
			}

			else if (!strcmp(input, "â��"))
			{
				line_isolation_window();
			}

			// <�� ������ ȭ�� ��ȯ		
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
			// >�� ������ ȭ�� ��ȯ		
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
		//���2�� ���� �� ��ȣ�ۿ� 
		if (check_space == 2)
		{
			char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
			system("cls"); flower_chest(); talk(); item();
			if (!strcmp(input, "��"))
			{
				//ȭ���� ���νñ� �� 
				if (pot_break == 0)
				{
					line_isolation_flower();
				}
				//ȭ���� ���ν� �� 
				else if (pot_break == 1)
				{
					//ö�縦 ��� �� 
					if (wire == 0)
					{
						//ö�� ���� 
						line_isolation_flower_decomposition();
						wire = 1; peg = 0; item();
					}
					//ö�縦 ���� �� 
					else if (wire == 1)
					{
						line_nothing();
					}
				}
			}
			else if (!strcmp(input, "�ɺ�"))
			{
				//ȭ���� ���� �� 
				if (pot_break == 0)
				{
					//��������⸦ ��� �� 
					if (stick == 0)
					{
						line_isolation_flower_pot();
					}
					//��������⸦ ���� �� 
					else if (stick == 1)
					{
						//ȭ���� �� 
						pot_break = 1;
						line_isolation_flower_pot_break();
						stick = 0; item();
					}
				}
				//ȭ���� �� �� 
				else if (pot_break == 1)
				{
					line_nothing();
				}
			}
			else if (!strcmp(input, "����1"))
			{
				line_isolation_chest_1_2();
			}
			else if (!strcmp(input, "����2"))
			{
				line_isolation_chest_1_2();
			}
			else if (!strcmp(input, "����3"))
			{
				//����3���� �콼 �� ��� �� 
				if (chest_3_judge == 0)
				{
					chest_3_judge = 1;
					line_isolation_chest3();
					peg = 1; item();
				}
				//����3���� �콼 �� ���� �� 
				else if (chest_3_judge == 1)
				{
					line_nothing();
				}
			}
			// <�� ������ ȭ�� ��ȯ		
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
			// >�� ������ ȭ�� ��ȯ		
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
		//���3�� ���� �� ��ȣ�ۿ� 
		if (check_space == 3)
		{
			char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
			system("cls"); paint_safe(); talk(); item();
			if (!strcmp(input, "����"))
			{
				//���ڿ��� ��������� ��� �� 
				if (picture_break == 0)
				{
					//��������� ���� 
					picture_break = 1;
					line_isolation_picture();
					stick = 1; item();
				}
				//���ڿ��� ��������� ���� �� 
				else if (picture_break == 1)
				{
					line_nothing();
				}
			}
			else if (!strcmp(input, "�ݰ�"))
			{
				isolation_out = 0;
				//���� ��� �� 
				if (isolation_out == 0 && nipper == 0)
				{
					system("cls"); safe(); talk(); item();
					line_isolation_safe();
					while (isolation_out == 0)
					{
						system("cls"); safe(); talk(); item();
						gotoxy(15, 52); printf("(�ݰ� ��й�ȣ�� �Է��ϼ���.)"); gotoxy(15, 53); printf("�Է� ���� : 1278, 3478, 2420 ��");
						char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
						//���� �Է� �� 
						if (!strcmp(input, "7004"))
						{
							system("cls"); safe(); talk(); item();
							//���� ���� 
							gotoxy(15, 52); printf("�ݰ� �ȿ��� ���۰� ����ִ�."); gotoxy(15, 53); printf("���۸� �����."); getch();
							nipper = 1; isolation_out = 1; item();
							system("cls"); paint_safe(); talk(); item();
						}
						//�ݰ��� ��� 
						else if (!strcmp(input, "�ڷ�"))
						{
							isolation_out = 1;
							system("cls"); paint_safe(); talk();  item();
						}
						//���� �Է� �� 
						else
						{
							system("cls"); safe(); talk(); item();
							gotoxy(15, 52); printf("��ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է��� �ּ���."); getch();
						}
					}
				}
				//���۸� ���� �� 
				else if (isolation_out == 0 && nipper == 1)
				{
					system("cls"); safe(); talk(); item();
					line_nothing();
					system("cls"); paint_safe(); talk(); item();
				}
			}
			// <�� ������ ȭ�� ��ȯ		
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
			// >�� ������ ȭ�� ��ȯ		
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
		//���4�� ���� �� ��ȣ�ۿ� 
		if (check_space == 4)
		{
			char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
			system("cls"); door_switch(); talk(); item();

			if (!strcmp(input, "����ġ"))
			{
				line_isolation_switch();
				system("cls"); door_switch(); talk(); item();
			}

			else if (!strcmp(input, "�ڹ���1"))
			{
				//�ڹ��踦 ���� �� 
				if (wire == 0 && lock1 == 0)
				{
					system("cls"); lock_key(); talk(); item();
					line_isolation_lock1();
					system("cls"); door_switch(); talk(); item();
				}
				//ö��� ���۰� ���� �� �ڹ��踦 �� �� ���� 
				else if (wire == 1 && lock1 == 0 && nipper == 1)
				{
					system("cls"); lock_key(); talk(); item();
					//�ڹ���1�� �� 
					gotoxy(15, 52); printf("ö�縦 ���۷� ���η� �������� �������."); getch(); gotoxy(15, 52); printf("                                         ");
					lock1 = 1; isolation_open1 = 1;
					gotoxy(15, 52); printf("�������� �ڹ��踦 ����."); getch(); wire = 3; nipper = 0; item();
					system("cls"); door_switch(); talk(); item();
				}
				else if (wire == 1 && lock1 == 0 && nipper == 0)
				{
					system("cls"); lock_key(); talk(); item();
					gotoxy(15, 52); printf("ö��� �ڹ��踦 ������ �õ� ������"); gotoxy(15, 53); printf("ö�簡 �ʹ� �ð�� �����Ͽ���."); getch();
					gotoxy(15, 52); printf("                                         "); gotoxy(15, 53); printf("                                         ");
					gotoxy(15, 52); printf("���۰��� ö�縦 ���θ� ���� ���� �ʿ��ϴ�."); getch();
					system("cls"); door_switch(); talk(); item();
				}
				//�ڹ��踦 �� �� 
				else if (wire == 3 && lock1 == 1)
				{
					system("cls"); lock_key(); talk(); item();
					gotoxy(15, 52); printf("�̹� �ڹ��踦 ������."); getch();
					system("cls"); door_switch(); talk(); item();
				}
			}

			else if (!strcmp(input, "�ڹ���2"))
			{
				system("cls"); lock_4(); talk(); item();
				isolation_out2 = 0;
				//�ڹ���2 ���� �� 
				if (isolation_out2 == 0 && lock2 == 0)
				{
					line_isolation_lock2();
					isolation_out2 = 0;
					while (isolation_out2 == 0)
					{
						system("cls"); lock_4(); talk(); item();
						gotoxy(15, 52); printf("(�ڹ��� ��й�ȣ�� �Է��ϼ���.)"); gotoxy(15, 53); printf("�Է� ���� : 1278, 3478, 2427 ��");
						char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
						//���� �Է� �� 
						if (!strcmp(input, "1958"))
						{
							system("cls"); lock_4(); talk();  item();
							gotoxy(15, 52); printf("�ڹ��踦 ������."); getch();
							system("cls"); door_switch(); talk(); item();
							//�ڹ���2�� �� 
							lock2 = 1; isolation_out2 = 1; isolation_open2 = 1;
						}
						//�ڹ���2���� ���
						else if (!strcmp(input, "�ڷ�"))
						{
							isolation_out2 = 1; lock2 = 0;
							system("cls"); door_switch(); talk(); item();
						}
						//���� �Է� �� 
						else
						{
							system("cls"); lock_4(); talk();  item();
							gotoxy(15, 52); printf("��ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է��� �ּ���."); getch();
						}
					}
				}
				//�ڹ���2 �� �� 
				else if (isolation_out2 == 0 && lock2 == 1)
				{
					system("cls"); lock_4(); talk(); item();
					gotoxy(15, 52); printf("�̹� �ڹ��踦 ������."); getch();
					system("cls"); door_switch(); talk(); item();
				}
			}


			else if (!strcmp(input, "��"))
			{
				//�ڹ��踦 ��� ���� �� 
				if (isolation_open1 == 0 && isolation_open2 == 0)
				{
					line_isolation_door();
				}
				//�ڹ���1�� ������ �� 
				if (isolation_open1 == 1 && isolation_open2 == 0)
				{
					gotoxy(15, 52); printf("���� �ڹ���2�� ���� �ʾҴ�."); getch();
					system("cls"); door_switch(); talk(); item();
				}
				//�ڹ���2�� ������ �� 
				if (isolation_open1 == 0 && isolation_open2 == 1)
				{
					gotoxy(15, 52); printf("���� �ڹ���1�� ���� �ʾҴ�."); getch();
					system("cls"); door_switch(); talk(); item();
				}
				//�ڹ��踦 ��� �� �� 
				else if (isolation_open1 == 1 && isolation_open2 == 1)
				{
					system("cls"); door_switch(); talk(); item();
					gotoxy(15, 52); printf("���� ���� �Կ��ǿ� �� �� �ְڱ�."); getch();
					//�Կ��� ��Ʈ ���� 
					isolation_end = 1;
				}
			}
			// <�� ������ ȭ�� ��ȯ		
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
			// >�� ������ ȭ�� ��ȯ		
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
	////////�Կ��� ����///////////// 
	if (isolation_end == 1)
	{
		//���1 
		system("cls"); talk(); door();
		line1();


		//���2 
		system("cls"); hospital(); talk();
		line2();


		//���2-1
		system("cls"); door(); talk();
		line3();


		//���3
		//��������// 
		int judge1 = 0; int judge2 = 0; int judge3 = 0; int judge4 = 0; int judge5 = 0; int judge6 = 0; int judge7 = 0; int judge8 = 0;
		int judge11 = 0; int judge22 = 0; int judge33 = 0; int judge44 = 0; int judge55 = 0; int judge66 = 0; int cardkey = 0; int out = 0;

		system("cls"); hospital(); talk();

		while (out == 0)
		{
			system("cls"); hospital(); talk();
			char input[10] = ""; gotoxy(0, 58); printf("�Է� : "); scanf("%s", input);

			//ħ��1 
			if (!strcmp(input, "ħ��1"))
			{
				//�� ��° �̻� ħ��1�� ���� �� ��� 
				if (judge1 == 2)
				{
					system("cls"); bed(); talk();
					judge1 = 1;

					while (judge1 == 1)
					{
						system("cls"); bed(); talk();
						char input[10] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

						if (!strcmp(input, "ħ��"))
						{
							line_bed1();
						}
						else if (!strcmp(input, "�ɺ�"))
						{
							line_flower1();
						}
						else if (!strcmp(input, "�ڷ�"))
						{
							judge1 = 2;
						}
					}
				}
				//ó�� ħ��1�� ���� �� ��� 
				else if (judge1 == 0)
				{
					system("cls"); bed(); talk();
					line4();
					judge1 = 2;
				}

			}
			//ħ��2 
			else if (!strcmp(input, "ħ��2"))
			{
				system("cls"); bed(); talk();
				judge2 = 0;

				while (judge2 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "ħ��"))
					{
						line_bed2();
					}
					else if (!strcmp(input, "�ɺ�"))
					{
						line_flower2();
					}
					else if (!strcmp(input, "�ڷ�"))
					{
						judge2 = 1;
					}
				}
			}
			//ħ��3 
			else if (!strcmp(input, "ħ��3"))
			{
				system("cls"); bed(); talk();
				judge3 = 0;

				while (judge3 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "ħ��"))
					{
						line_bed3();
					}
					else if (!strcmp(input, "�ɺ�"))
					{
						line_flower3();
					}
					else if (!strcmp(input, "�ڷ�"))
					{
						judge3 = 1;
					}
				}
			}
			//ħ��4 
			else if (!strcmp(input, "ħ��4"))
			{
				system("cls"); bed(); talk();
				judge4 = 0;

				while (judge4 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "ħ��"))
					{
						line_bed4();
					}
					else if (!strcmp(input, "�ɺ�"))
					{
						line_flower4();
					}
					else if (!strcmp(input, "�ڷ�"))
					{
						judge4 = 1;
					}
				}
			}
			//ħ��5 
			else if (!strcmp(input, "ħ��5"))
			{
				system("cls"); bed(); talk();
				judge5 = 0;

				while (judge5 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "ħ��"))
					{
						line_bed5();
					}
					else if (!strcmp(input, "�ɺ�"))
					{
						line_flower5();
					}
					else if (!strcmp(input, "�ڷ�"))
					{
						judge5 = 1;
					}
				}
			}
			//ħ��6 
			else if (!strcmp(input, "ħ��6"))
			{
				//�� �� �̻� ħ��6�� ���� �� 
				if (judge6 == 2)
				{
					system("cls"); bed(); talk();
					judge6 = 1;

					while (judge6 == 1)
					{
						system("cls"); bed(); talk();
						char input[10] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

						if (!strcmp(input, "ħ��"))
						{
							line_bed6_1();
						}
						else if (!strcmp(input, "�ɺ�"))
						{
							line_flower6();
						}
						else if (!strcmp(input, "�ڷ�"))
						{
							judge6 = 2;
						}
					}
				}
				//ó�� ħ��6�� ���� �� 
				else if (judge6 == 0)
				{
					system("cls"); bed(); talk();
					line_bed6();
					judge6 = 2;
				}
			}
			//ħ��7 
			else if (!strcmp(input, "ħ��7"))
			{
				system("cls"); bed(); talk();
				judge7 = 0;

				while (judge7 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "ħ��"))
					{
						line_bed7();
					}
					else if (!strcmp(input, "�ɺ�"))
					{
						line_flower7();
					}
					else if (!strcmp(input, "�ڷ�"))
					{
						judge7 = 1;
					}
				}
			}
			//ħ��8 
			else if (!strcmp(input, "ħ��8"))
			{
				system("cls"); bed(); talk();
				judge8 = 0;

				while (judge8 == 0)
				{
					system("cls"); bed(); talk();
					char input[10] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "ħ��"))
					{
						line_bed8();
					}
					else if (!strcmp(input, "�ɺ�"))
					{
						line_flower8();
					}
					else if (!strcmp(input, "�ڷ�"))
					{
						judge8 = 1;
					}
				}
			}
			//����1 
			else if (!strcmp(input, "����1"))
			{
				system("cls"); chest(); talk();
				//�ڹ��踦 Ǯ�� �� ��ȣ�ۿ� 
				if (judge11 == 0)
				{
					line_chest1();
					judge11 = 1;
					while (judge11 == 1)
					{
						system("cls"); lock_5(); talk();
						gotoxy(15, 52); printf("(�ڹ��� ��ȣ�� �Է��ϼ���.)"); gotoxy(15, 53); printf("�Է� ���� : 08491, 34731, 97263 ��");
						char input[10] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

						if (!strcmp(input, "53724"))
						{
							system("cls"); lock_5(); talk();
							line_chest1_1();
							judge11 = 2;
						}
						else if (!strcmp(input, "�ڷ�"))
						{
							judge11 = 0;
						}
						else
						{
							system("cls"); lock_5(); talk();
							gotoxy(15, 52); printf("��ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է��� �ּ���."); getch();
						}
					}
				}
				//�ڹ��踦 ���� �� ���  
				else if (judge11 == 2)
				{
					system("cls"); chest(); talk();
					line_chest1_2(); USB = 1;
				}
			}
			//����2
			else if (!strcmp(input, "����2"))
			{
				system("cls"); chest(); talk();
				line_chest2();
			}
			//����3 
			else if (!strcmp(input, "����3"))
			{
				system("cls"); chest(); talk();
				line_chest3();
			}

			//����4
			else if (!strcmp(input, "����4"))
			{
				system("cls"); chest(); talk();
				line_chest4();
			}

			//����5 
			else if (!strcmp(input, "����5"))
			{
				system("cls"); chest(); talk();
				line_chest5();
			}

			//����6
			else if (!strcmp(input, "����6"))
			{
				system("cls"); chest(); talk();
				line_chest6();
			}

			//����7
			else if (!strcmp(input, "����7"))
			{
				system("cls"); chest(); talk();
				line_chest7();
			}

			//����8
			else if (!strcmp(input, "����8"))
			{
				system("cls"); chest(); talk();
				line_chest8();
			}

			//�������� 
			else if (!strcmp(input, "��������"))
			{
				system("cls"); trash(); talk();
				line_trash();
			}

			//å�� 
			else if (!strcmp(input, "å��"))
			{
				system("cls"); bookshelf(); talk();
				line_bookshelf();
				judge22 = 0;

				while (judge22 == 0)
				{
					char input[20] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "ź����_��"))
					{
						line_book_flower();
						system("cls"); bookshelf(); talk();
						gotoxy(15, 50); printf("[ź����_��]\n"); gotoxy(15, 51); printf("[�������_���캰_ī�信]\n"); gotoxy(15, 52); printf("[�λ�����_��]\n");
					}
					else if (!strcmp(input, "�������_���캰_ī�信"))
					{
						line_book_welcome_cafe();
						system("cls"); bookshelf(); talk();
						gotoxy(15, 50); printf("[ź����_��]\n"); gotoxy(15, 51); printf("[�������_���캰_ī�信]\n"); gotoxy(15, 52); printf("[�λ�����_��]\n");
					}
					else if (!strcmp(input, "�λ�����_��"))
					{
						line_book_poem();
						system("cls"); bookshelf(); talk();
						gotoxy(15, 50); printf("[ź����_��]\n"); gotoxy(15, 51); printf("[�������_���캰_ī�信]\n"); gotoxy(15, 52); printf("[�λ�����_��]\n");
					}
					else if (!strcmp(input, "�ڷ�"))
					{
						judge22 = 1;
					}
				}
			}

			//â�� 
			else if (!strcmp(input, "â��"))
			{
				system("cls"); window(); talk();
				line_window();
			}

			//�� 
			else if (!strcmp(input, "��"))
			{
				system("cls"); door(); talk();
				if (cardkey == 0)
				{
					//ī��Ű ����� 				
					line_door();
				}

				else if (cardkey == 1)
				{
					//ī��Ű ��� �� 				
					gotoxy(15, 52); printf("ī��Ű�� ����Ͽ� ���� ������."); getch(); gotoxy(15, 52); printf("                                            "); gotoxy(15, 52);
					printf("������ ���� ������ ��ġ�� Ȯ���ϰ� �����ؾ߰ھ�"); gotoxy(15, 53); printf("������ ��ġ�� �����?"); getch();
					char input[20] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

					//������ ��ġ�� ���߸� 
					if (!strcmp(input, "G418"))
					{
						system("cls"); talk(); door();
						gotoxy(15, 52); printf("G418. ������ Ȯ���ص� Ȯ���ϰ� G418�̾�."); gotoxy(15, 53); printf("���� �����Ƿ� ���߰ھ�.");
						out = 1; getch(); system("cls"); talk();
					}
					//������ ��ġ�� Ʋ���� 
					else
					{
						system("cls"); talk(); door();
						gotoxy(15, 52); printf("���� �̻��ѵ�?  �ٽ� �� �� Ȯ���� ���߰ھ�"); getch();
					}
				}
			}

			//å�� 
			else if (!strcmp(input, "å��"))
			{
				system("cls"); table(); talk();
				judge33 = 0;

				while (judge33 == 0)
				{
					system("cls"); table(); talk();
					gotoxy(15, 51); printf("[��Ʈ��]"); gotoxy(15, 52); printf("[����]"); gotoxy(15, 53); printf("[����]");
					char input[20] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);

					if (!strcmp(input, "��Ʈ��"))
					{
						judge44 = 0;
						while (judge44 == 0 && judge55 == 0)
						{
							system("cls"); table(); talk();
							gotoxy(15, 52); printf("��Ʈ�Ͽ��� ����� �ɷ��ִ�."); getch(); gotoxy(15, 52); printf("                                                      ");
							gotoxy(15, 52); printf("��й�ȣ ��Ʈ�� �����ִ�."); getch(); gotoxy(15, 52); printf("                                                      ");
							gotoxy(15, 51); printf("[��6= ��26 ��=��]");
							gotoxy(15, 53); printf("(��й�ȣ�� �Է��ϼ���.)"); gotoxy(15, 54); printf("�Է� ���� : 3671832, ��������, blackhospital, dkssudgktpdy ��");
							char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
							if (!strcmp(input, "�絿��"))
							{
								system("cls"); table(); talk();
								judge44 = 1; judge55 = 1;
								gotoxy(15, 52); printf("��й�ȣ�� �����Ǿ����ϴ�."); getch();
							}
							else if (!strcmp(input, "�ڷ�"))
							{
								judge44 = 1;
							}
							else
							{
								system("cls"); table(); talk();
								gotoxy(15, 52); printf("��й�ȣ�� Ʋ�Ƚ��ϴ�."); getch();
							}
						}
						while (judge44 == 0 && judge55 == 1)
						{
							system("cls"); laptop(); talk();
							gotoxy(15, 52); printf("[�޽���]"); gotoxy(15, 53); printf("[����]"); gotoxy(15, 54);
							char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
							if (!strcmp(input, "�޽���"))
							{
								line_message();
							}
							else if (!strcmp(input, "����"))
							{
								system("cls"); talk(); maps();
								gotoxy(15, 52); printf("�� ������ �����̴�."); gotoxy(15, 53); printf("(�ո� ���� ���̰� @�� â���̰� ĥ���� �ִ� ���� �����̴�.)"); getch();
							}
							else if (!strcmp(input, "�ڷ�"))
							{
								judge44 = 1;
							}
						}
					}
					else if (!strcmp(input, "����"))
					{
						line_paper();
					}
					else if (!strcmp(input, "����"))
					{
						system("cls"); talk(); lock_8();
						//�������� ī��Ű�� ã�� �� 
						if (judge66 == 0)
						{
							gotoxy(15, 52); printf("������ 8�ڸ� �ڹ��谡 �ɷ��ִ�."); getch(); gotoxy(15, 52); printf("                                                      ");
							judge66 = 1;
							while (judge66 == 1)
							{
								system("cls"); talk(); lock_8();
								gotoxy(15, 52); printf("(�ڹ��� ��ȣ�� �Է��ϼ���.)"); gotoxy(15, 53); printf("�Է� ���� : 1278, 3478, 24678 ��");
								char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);

								if (!strcmp(input, "35678"))
								{
									system("cls"); talk(); lock_8();
									gotoxy(15, 52); printf("�ȿ��� ī��Ű�� ����ִ�."); gotoxy(15, 53); printf("ī��Ű�� �����."); getch();
									judge66 = 2; cardkey = 1;
								}
								else if (!strcmp(input, "�ڷ�"))
								{
									judge66 = 0;
								}
								else
								{
									system("cls"); lock_8(); talk();
									gotoxy(15, 52); printf("��ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է��� �ּ���."); getch();
								}
							}
						}
						//�������� ī��Ű�� ã�� �� 
						else if (judge66 == 2)
						{
							system("cls"); lock_8(); talk();
							gotoxy(15, 52); printf("���̻� �������� ã�� ���� ����."); getch();
						}
					}
					else if (!strcmp(input, "�ڷ�"))
					{
						judge33 = 1;
					}
				}
			}
		}
	}
	/////////////������ ����////////////////////////////// 

		//������ ���� ���� 
	int surgery_end = 0; int key = 0; int s_judge_chest = 0; int s_judge_chest_out = 0; int record = 0; int s_judge_table_out = 0; int s_judge_laptop = 0; int s_judge_laptop_open = 0;
	int s_judge_laptop_out = 0; int normal_end = 0; int true_end = 0;
	USB = 1;
	system("cls"); door(); talk(); item();
	line_surgery_story();
	while (surgery_end == 0)
	{
		system("cls"); surgery_next_room(); talk(); item();
		char input[10] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);
		//ħ�� ��ȣ�ۿ� 
		if (!strcmp(input, "ħ��"))
		{
			system("cls"); surgery_bed(); talk(); item();
			line_surgery_bed();
			system("cls"); talk(); item();
			line_surgery_bed_under();
		}
		//īƮ ��ȣ�ۿ� 
		else if (!strcmp(input, "īƮ"))
		{
			system("cls"); surgery_cart(); talk(); item();
			line_surgery_cart();
		}
		//��1 ��ȣ�ۿ� 
		else if (!strcmp(input, "��1"))
		{
			//���踦 ã�� �� 
			if (key == 0)
			{
				system("cls"); door(); talk(); item();
				line_surgery_door1();
			}
			//���踸 ã�� �ڷ�� ã�� �ʾ��� �� 
			else if (key == 1 && data == 0)
			{
				system("cls"); door(); talk(); item();
				//������ ���� 
				surgery_end = 1; normal_end = 1;
				line_surgery_door1_1();
			}
			//����� �ڷ� ��� ã���� �� 
			else if (key == 1 && data == 1)
			{
				system("cls"); door(); talk(); item();
				//������ ���� 
				surgery_end = 1; true_end = 1;
				line_surgery_door1_2();
			}
		}
		//��2 ��ȣ�ۿ� 
		else if (!strcmp(input, "��2"))
		{
			system("cls"); surgery_door2(); talk(); item();
			line_surgery_door2();
		}
		//��3 ��ȣ�ۿ� 
		else if (!strcmp(input, "��3"))
		{
			system("cls"); door(); talk(); item();
			line_surgery_door3();
		}
		//å�� ��ȣ�ۿ� 
		else if (!strcmp(input, "å��"))
		{
			s_judge_table_out = 0;
			while (s_judge_table_out == 0)
			{
				system("cls"); surgery_table(); talk(); item();
				gotoxy(15, 51); printf("[��Ʈ��]"); gotoxy(15, 52); printf("[������]");
				char input[20] = " "; gotoxy(0, 58); printf("�Է� :           "); gotoxy(7, 58); scanf("%s", input);
				//��Ʈ�� 
				if (!strcmp(input, "��Ʈ��"))
				{
					s_judge_laptop = 0;
					//��Ʈ�� ��й�ȣ ���� �� 
					while (s_judge_laptop == 0 && s_judge_laptop_open == 0)
					{
						system("cls"); surgery_table(); talk(); item();
						gotoxy(15, 52); printf("��Ʈ�Ͽ��� ����� �ɷ��ִ�."); getch(); gotoxy(15, 52); printf("                                                      ");
						gotoxy(15, 52); printf("��й�ȣ ��Ʈ�� �����ִ�."); getch(); gotoxy(15, 52); printf("                                                      ");
						gotoxy(15, 51); printf("[������, C/H/O, +, 6�ڸ�]");
						gotoxy(15, 53); printf("(��й�ȣ�� �Է��ϼ���.)"); gotoxy(15, 54); printf("�Է� ���� : 3671832, ��������, blackhospital, dkssudgktpdy ��");
						char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
						if (!strcmp(input, "648513"))
						{
							system("cls"); surgery_table(); talk(); item();
							s_judge_laptop = 1; s_judge_laptop_open = 1;
							gotoxy(15, 52); printf("��й�ȣ�� �����Ǿ����ϴ�."); getch();
						}
						else if (!strcmp(input, "�ڷ�"))
						{
							s_judge_laptop = 1;
						}
						else
						{
							system("cls"); surgery_table(); talk(); item();
							gotoxy(15, 52); printf("��й�ȣ�� Ʋ�Ƚ��ϴ�."); getch();
						}
					}
					//��Ʈ�� ��й�ȣ ���� �� 
					while (s_judge_laptop == 0 && s_judge_laptop_open == 1 && USB == 1)
					{
						system("cls"); laptop(); talk();  item();
						s_judge_laptop_out = 0;
						gotoxy(15, 52); printf("��Ʈ�Ͽ��� ���� �ڷ���� ����ִ�."); getch(); gotoxy(15, 52); printf("                                                      ");
						gotoxy(15, 52); printf("���߿��� ��й����� �� �ִ� �� ����."); getch(); gotoxy(15, 52); printf("                                                      ");
						gotoxy(15, 52); printf("�̰� ��� �� ����� ������?"); getch();
						while (s_judge_laptop_out == 0)
						{
							char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
							if (!strcmp(input, "USB"))
							{
								system("cls"); laptop(); talk();  item();
								s_judge_laptop_out = 1; s_judge_laptop = 1; USB = 2; data = 1;
								gotoxy(15, 52); printf("�Կ��ǿ��� ���� USB�� �̿��Ͽ� �ڷḦ ��Ҵ�."); getch(); gotoxy(15, 52); printf("                                                      ");
								gotoxy(15, 52); printf("�̰Ÿ� ������ �Ű��� �� �ڷᰡ ����Ұž�."); getch(); gotoxy(15, 52); printf("                                                      ");
							}
							else if (!strcmp(input, "�ڷ�"))
							{
								s_judge_laptop_out = 1; s_judge_laptop = 1;
							}
							else
							{
								system("cls"); laptop(); talk(); item();
								gotoxy(15, 52); printf("�ƹ��ϵ� �Ͼ�� �ʾҴ�."); getch();
							}
						}
					}
					//��Ʈ�� �ڷ� ���� �� 
					if (USB == 2)
					{
						system("cls"); laptop(); talk(); item();
						line_nothing();
					}
				}
				//������ 
				else if (!strcmp(input, "������"))
				{
					line_record(); record = 1;
				}
				else if (!strcmp(input, "�ڷ�"))
				{
					s_judge_table_out = 1;
				}
			}
		}
		//�繰�� ��ȣ�ۿ� 
		else if (!strcmp(input, "�繰��"))
		{
			system("cls"); surgery_locker(); talk(); item();
			//���� ��� �� 
			if (record == 0)
			{
				line_surgery_locker_before();
			}
			//���� ���� �� 
			else if (record == 1 && key == 0)
			{
				//���� ���� 
				key = 1;
				line_surgery_locker_after();
			}
			//���� ���̻� ã�� ���� ���� 
			else if (record == 1 && key == 1)
			{
				line_nothing();
			}
		}
		//���� ��ȣ�ۿ� 
		else if (!strcmp(input, "����"))
		{
			s_judge_chest_out = 0;
			//��й�ȣ �Է� �� 
			while (s_judge_chest == 0 && s_judge_chest_out == 0)
			{
				system("cls"); surgery_chest(); talk(); item();
				line_surgery_chest();
				system("cls"); lock_direction(); talk();   item();
				gotoxy(15, 53); printf("(��й�ȣ�� �Է��ϼ���.)"); gotoxy(15, 54); printf("�Է� ���� : �޿�����, �Ʒ����޿޿�, ���޿������Ʒ� ��");
				char input[10] = " "; gotoxy(0, 58); printf("�Է� :                                           "); gotoxy(7, 58); scanf("%s", input);
				//���� �Է� �� 
				if (!strcmp(input, "�޿����Ʒ����Ʒ�"))
				{
					system("cls"); lock_direction(); talk(); item();
					s_judge_chest = 1; s_judge_chest_out = 1;
					gotoxy(15, 52); printf("�ڹ��谡 ���Ƚ��ϴ�."); getch();
				}
				//�������� �� 
				else if (!strcmp(input, "�ڷ�"))
				{
					s_judge_chest_out = 1;
				}
				//���� �Է� �� 
				else
				{
					system("cls"); lock_direction(); talk(); item();
					gotoxy(15, 52); printf("��й�ȣ�� Ʋ�Ƚ��ϴ�."); getch();
				}
			}
			//��й�ȣ �Է� �� 
			while (s_judge_chest == 1 && s_judge_chest_out == 0)
			{
				system("cls"); surgery_chest_open(); talk(); s_judge_chest_out = 1; item();
				gotoxy(15, 52); printf("���� �ȿ��� ���� ��ǰ���� ����ִ�."); getch();
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