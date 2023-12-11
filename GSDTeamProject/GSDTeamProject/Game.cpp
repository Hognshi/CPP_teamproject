#pragma once
#include <iostream>
#include <conio.h>
#include "Class.h"

using namespace std;

void game_help()
{
	system("cls");
	printf("\t\t\t\t                       ����Ű\n"); _getch();
	printf("\t\t\t\t�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n"); _getch();
	printf("\t\t\t\t���ݽ�\n"); _getch();
	printf("\t\t\t\t���� �ٸ� ���� ���� ������ < �Ǵ� >�� �Է��ϸ� �ȴ�.\n"); _getch();
	printf("\t\t\t\t�� ���� ������ �����ϰ� ������ [   ]�� ���ʿ� �ִ� ���� �Է��ϸ� �ȴ�.\n"); _getch();
	printf("\t\t\t\t����) [ħ��1]�� �����ϰ� ������ ħ��1 �̶�� �Է��ϸ�ȴ�.\n"); _getch();
	printf("\t\t\t\t����) [ź����_��]�� �����ϰ� ������ ź����_�� �̶�� �Է��ϸ� �ȴ�.\n"); _getch();
	printf("\t\t\t\t��縦 �ѱ� ���� �ƹ� Ű�� �Է��ص� �������.\n"); _getch();
	printf("\t\t\t\t�������� �ڵ� ����� �ȴ�.\n"); _getch();
	printf("\t\t\t\t�ڹ��� ��й�ȣ �Է� â ���� Ư���� ��鿡�� ����� �ʹٸ� �ڷ� �� �Է��ϸ� �ȴ�.\n"); _getch();
	printf("\t\t\t\t�Կ��ǰ� ������\n"); _getch();
	printf("\t\t\t\t�Կ��ǿ��� ���� �ٸ� ���� ���� ���� <�� �̿��Ͽ� �Դٰ����ϴ� ����� �ƴϴ�.\n"); _getch();
	printf("\t\t\t\t�⺻������ ���� ������ �ٶ� ������� ȭ�鿡 ���.\n"); _getch();
	printf("\t\t\t\t�������� ���ݽǰ� �����ϴ�.\n"); _getch();
	printf("\t\t\t\t��򰡿� ������ �ִ� Ư�� �������� �Է��Ѵٸ� ������ ������ ��ĥ �� �ִ� �������� ���� �� �ִ�.\n"); _getch();
}

void startScene(NightDutyRoom d, string &input)
{
	System system;

	printf("�����������������������������������������������������������������������\n");
	printf("                                                                                                                                            \n");
	printf("                                                                                                                                            \n");
	printf("                                                                                                                                            \n");
	printf("                                                                                                                                            \n");
	printf("                                                      KRQBBBQBBBQBBBBBBBBBBBBBQBgr                                                          \n");
	printf("                                                      BQ15PKPKPKqXX2S5qKPKPKPSSZBB                                                          \n");
	printf("                                                rBE   BB                        QB   .BB.    rr                                             \n");
	printf("                                         BBB    vBB   BB          :BB          .BB    XI    iBBv                                            \n");
	printf("                                 :BQ     rDL          QB          BBBI         .QB           ::     vBB                                     \n");
	printf("                                 7BB                  BQ          BBBY         .BQ                  :BD                                     \n");
	printf("                                                      BB    PBBBBBBBQBBBBBBB   .BQ                          ..                              \n");
	printf("                          BBB                         BB    BBBBBBBBBBBQBBBB.  .BD                         .BB7                             \n");
	printf("                          vBs                         BB          BBBu         :QZ                          ir                              \n");
	printf("                                                      BB          BQBY         :BK                                ::                        \n");
	printf("                    7BM           :BBBBBQBBBQBBBBBQBBBBB          BBBd         rBBBBBBBBQBBBQBBBBBQBBBBv          BB                        \n");
	printf("                     r.           bBBL1uUu1uU1UuU1Uj1Y7i          2BB:          v7ujU111U1U1UuUu2u1uJPBB                                    \n");
	printf("                                  2Bi                                                                 BB                                    \n");
	printf("                Sv                                                                                                    .BR                   \n");
	printf("               .BB                   .r               ..                                                              .BS                   \n");
	printf("                       sdRBBBBMD.    BBu           5BBBBBBBY           1B       .B     .5        :bBBBBBBBBBBM:                             \n");
	printf("                      :BQBBBQBQBD    EBB         :BBBr.::uBBB          BB:      2Bs    BB7      BBQBBBRRRBBBBBr                             \n");
	printf("                              BBM :::ZBB         BBd      iBB          BBi   .. QBM   .BB5     rBB                                          \n");
	printf("             QB.              BBBBQBBBQB.        gBBRurrLRBBR          BBBQBBBBBQBBBQBBBBq     vQB                       BBB                \n");
	printf("             QB:              BBB     BBJ         .PBBBBBBP.           BBJ      gBBuuvLBBS     rBBBQBBQEQBBBBBB          rQv                \n");
	printf("                              QBB     QBB                              BBP  ....QBBBBBBBBS      rJgBBBBBQgggDMK                             \n");
	printf("                              :BQ      2r    iqPgQBBBBBBBBBQBQBBBS     YBBBBBBBBBB7    BBP            .BB                  vi               \n");
	printf("           iBB                               dBBQBBBQg5uvriiirrL7                      BBi     iii::..SBB..:ivIu          5BB               \n");
	printf("            Lr             :jbQBBQBBBBBBBr       :                            .LZBBBPi         BBBBBBBBQBBBBBBBB                            \n");
	printf("                     r    PBBBBBBQEK1J1BBu      BB                         :BBBBBBBBBBQQ            .rsI1dPr                                \n");
	printf("                   KBB    BB7          BB7      BBr                       YBBq.       BBB         5BBBBBBBBBBv          .                   \n");
	printf("                  BBBBB   BBI          BBS      BB7                       QBB         .BBi       BBB        BBv       .BB:..                \n");
	printf("            .PBBBBBBBBBB  BBB   .....  QBB      BBB:ir77vvsLY7vvj.        iBBP      .5BBB        QBR        BBP      5BBBBBBBBY             \n");
	printf("           QQBBBBBBBQBBBB  QBBQBBBBBQBBBBD      iBBBBBBBBBBBBBBBBD         :BBBBBBBBBBB7          BBBBRbqQBBBQ     :QBBBBBQBQBBB:           \n");
	printf("          BBBBBBBBBBBBBBBQJ    ...:.::..                                      ijbbqL:               uBBBBQBv     iBBBQBBBBBQBBBBB.          \n");
	printf("         1BBBBBBBBBBQBBBQBQBX.                                                                                .KQBBBQBBBBBBBQBBBBB          \n");
	printf("         XBQBBBBBQBBBBBBBBBBBBBBDJi.                                                                      :vgBBQBBBBBBBBBBBBBQBQBB          \n");
	printf("          BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                :B            7B                    .:iUPZQBBBBBBBBBQBBBBBBBQBBBBBBBB:          \n");
	printf("          .BBBBBBBBBBBBBBBBBBBBBBQBBBBBBBBBB                JB            gB                   QBBBBBBBBBBBBBBBBBBBBBQBQBQBQBBBBi           \n");
	printf("            7BBBBBBBBBBBBBBBQBQBBBBBBBBBBBBBBBQBBBQBBBBBBBQBBBBBBBBBQBBBBBBBBBBBBBBBQBBBBBQBBBQBBBBBBBQBBBBBBBBBBBQBBBBBQBBBBB7             \n");
	printf("                .rKQBQBBBBBBBBBBBBBBBQBbRX.                                                      rqjgQBBBBBBBBBBBBBBBBBE1:                  \n");
	printf("                                                                                                                                        \n");
	printf("                                                                                                                                            \n");
	for (int j = 0; j < 70; j++)
	{
		cout << "��";
	}
	cout << "\n\n";
	cout << "1) Start To P?ay\n2) How To P?ay";
	cout << "\n\n";
	for (int j = 0; j < 70; j++)
	{
		cout << "��";
	}

	system.ItemShow();
	cout << "\n�Է�"; cin >> input;

	if (input == "1")
	{
		d.RoomShow();
		d.CheckInput(input);
	}
	else
	{
		game_help();
		d.RoomShow();
		d.CheckInput(input);
	}
}
// ������ ���� �Ǵ�
void System :: Item()
{
	for (int i = 0; i < 11; i++)
	{
		itemList[i] = " ";
	}
	if (nipper)
	{
		itemList[0] = "���� ";
	}
	if (stick)
	{
		itemList[1] = "���� ���� ����� ";
	}
	if (wire)
	{
		itemList[2] = "ö�� ";
	}
	if (peg)
	{
		itemList[3] = "�콼 �� ";
	}
	if (USB)
	{
		itemList[4] = "USB ";
	}
	if (data)
	{
		itemList[5] = "�ڷ� ";
	}
	if (flowerVase)
	{
		itemList[6] = "[�ɺ�] ";
	}
	if (birdcage)
	{
		itemList[7] = "[����]�ָ� ";
	}
	if (flowerGround)
	{
		itemList[8] = "[�ɹ�]�ָ� ";
	}
	if (butterfly)
	{
		itemList[9] = "[����]�ָ� ";
	}
	if (map)
	{
		itemList[10] = "������ ";
	}
}

// �κ��丮 ���
void System::ItemShow()
{
	Item();
	cout << "\nitem list : ";
	for (int i = 0; i < 11; i++)
	{
		if (itemList[i] != " ")
		{
			cout << itemList[i] << " ";
		}
	}
	cout << "\n";
}

//������ �� ���
void NightDutyRoom::RoomShow()
{
	system("cls");
	cout << "                                                                                                                                            \n";
	cout << "                                                                                                                                            \n";
	cout << "                                                                                                                                            \n";
	cout << "                                                                                                                                            \n";
	cout << "                           [â��]                                                                                                           \n";
	cout << "                                                                                                                                            \n";
	cout << "           .BRj152S2525I5U2LBBZsIU52525IS2IUjQB.                                                                                            \n";
	cout << "           .Bi              dB.              7B.                                                                                            \n";
	cout << "           .B7              QBi              JB.                                                                                            \n";
	cout << "           .B7              gB:              JB.                                                                                            \n";
	cout << "           .Br              DB:              vB.                                                                                            \n";
	cout << "           .BB              BBB              BB.                                                                                            \n";
	cout << "           .BBBBBQBQBBBQBBBBBBBBBBBBBBBQBBBBBBB.                                                                                            \n";
	cout << "           .Bgvuj1j1j1u1uuY7QBqvJujUjUu1j1JJ7QQ.                                                                                            \n";
	cout << "           .Bi              EB.              rB.                                                                                            \n";
	cout << "           .BL              QBi              jB:                                                                                            \n";
	cout << "           .Br              MB:              vB.                                                                                            \n";
	cout << "           .BY              DBi              UB.                                                                                            \n";
	cout << "           .BB              BBB              BB.                                                                                            \n";
	cout << "           :BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB:                                                                                            \n";
	cout << "                                                                                                                                            \n";
	cout << "                                                                          [ħ��]                                                            \n";
	cout << "                                           sI2SSXXKX57                                                                                      \n";
	cout << "                                           B         B                                                                                      \n";
	cout << "                                           B.        B .qbZEDEDdZZZZDEZdDEDEZEZdZEZEDEZEZEDEZdDdZEDEDEZdEqi                                 \n";
	cout << "                                           BBBBBQBBBBB BB............................................... UB                                 \n";
	cout << "                                     QBbgEPIPPEbEbEPK11BB .............................................  BQ                                 \n";
	cout << "                                     B:                DQ .::::::::::::::::::::::::::::::::::::::::::::. BR                                 \n";
	cout << "                                     Bi                RB :::::::::::::::::::::::::::::::::::::::::::::. BQ                                 \n";
	cout << "                                     Bi                BB .::::::::::::::::::::::::::::::::::::::::::::: BQ                                 \n";
	cout << "                                     Br                QB :::::::::::::::::::::::::::::::::::::::::::::..QQ                                 \n";
	cout << "                                     Bi                MQ..::::::::::::::::::::::::::::::::::::::::::::: BR                                 \n";
	cout << "                                     Br               .QB :::::::::::::::::::::::::::::::::::::::::::::..QQ                                 \n";
	cout << "                                     Br   QBbggMgMgMgD5BB .::::::::::::::::::::::::::::::::::::::::::::: BR                                 \n";
	cout << "                                     B7   B:           ZB :::::::::::::::::::::::::::::::::::::::::::::..BQ                                 \n";
	cout << "                                     B7   Qr           QB..::::::::::::::::::::::::::::::::::::::::::::: BR                                 \n";
	cout << "                                     B7   Br           QB .::::::::::::::::::::::::::::::::::::::::::::. QQ                                 \n";
	cout << "                                     Br   Br           BB .............................................. BR                                 \n";
	cout << "                                     B7   Br           BBi77v7v7v7v7v7v7v7v7v7v7v7v7v7v7v7v7v7v77:i77ri:iBB                                 \n";
	cout << "                                     Br   Br           sBBBBBBBBQBBBBBBBBBBBBBBBBBQBBBBBBBBBBBBBQBBQQQBBRB7                                 \n";
	cout << "                                     Qi   Br                                                     MP   ED                                    \n";
	cout << "                                     BD   Qv                                                     BB   BB                                    \n";
	cout << "                                     rXXPXS                                                      B5XqXSB                                    \n";
	cout << "                                                                                                                                            \n";

}

// ������ 
void NightDutyRoom::FlowerChestShow()
{
	system("cls");
	cout << "                                                                                                                                            \n";
	cout << "                                                                     i.                                                                     \n";
	cout << "                                                                   BBQBQ7.                                                                  \n";
	cout << "                                                               .MZJB   SBBBB                                                                \n";
	cout << "                                                              .QY   IIg    BE                                                               \n";
	cout << "                                                              BB : 2B7B.  5B:                                                               \n";
	cout << "                                                              .QBS  iv    Bs              [��]                                              \n";
	cout << "                                                                BZ::UBXjJBB                                                                 \n";
	cout << "                                                                 qgS7BgrLi                                                                  \n";
	cout << "                                                                   v7BBPi                                                                   \n";
	cout << "                                                                 :B5:.:7BQi                                                                 \n";
	cout << "                                                                 B5  .   qB                                                                 \n";
	cout << "                                                                BB ...... BD                                                                \n";
	cout << "                                                                Bd ..:.:. QB                                                                \n";
	cout << "                                                                BI .:.:.. BB            [�ɺ�]                                              \n";
	cout << "                                                                BB ..:... BQ                                                                \n";
	cout << "                                                                :B7 .... :B:                                                                \n";
	cout << "                                                                 iQ1    .BP                                                                 \n";
	cout << "                                                                  2QBBBBBB:                                                                 \n";
	cout << "                BBMBBBQQQQRQQQRQQQRQQQQQQQQQRQQQQQQQRQRQRQRQRQRQMgX25qKK2IbMRQRQMQRQRQRQQQQQQQRQQQRQRQQQRQQQQQQQQQQQQQQQQBQQBB              \n";
	cout << "                BB                                                                                                          iQ              \n";
	cout << "                QB  .BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBQBBBBBQBBBBBBBBBBBQBBBBBQBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBB5  rB              \n";
	cout << "                BB  :B7                                                                                                 BB  7B              \n";
	cout << "                QB  .B.                                             ii                                                  BB  7B              \n";
	cout << "                BB  .B:                                            7BBY                 [����1]                         BB  vB              \n";
	cout << "                QB  .B.                                                                                                 BB  7B              \n";
	cout << "                BB  .Br                                                                                                 BQ  7B              \n";
	cout << "                QB ..QRQBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBQBBBBBBBBBBBBBBBBBBBBBQBBBQQQS  7B              \n";
	cout << "                BB  .                                                                                                       7B              \n";
	cout << "                QB  7BPKqbPbPPPbPPPPPPPPqPPPPbPbPbqPqbqbPPqPPPPPPPKK12XPPPPbPbqPPbPPPbPPPbPPPPPPqPqPqPPPPPPbPPPbPdPbPPXSBd  7B              \n";
	cout << "                BQ  7B                                                                                                  BE  vB              \n";
	cout << "                QB  rB                                             YBB.                 [����2]                         BE  7B              \n";
	cout << "                BB  rQ                                              Xu                                                  Bd  vB              \n";
	cout << "                QB  rB                                                                                                  BD  7B              \n";
	cout << "                BB  rBDPEdZEDEDdZEZEZdDEDdDEDEZEDdZEDdZdDEZEDEDZDEZbdPEdZEZEDZDEZdDdDEDEZEDdDdDEZEDEDEZdZEZEDEZEDEDdDdbKBP  vB              \n";
	cout << "                QB .                                                                                                        7B              \n";
	cout << "                BB  :QBBBBBBBBBBBBBBBBBBBBBBBBBBBQBBBQBQBBBBBBBBBBBQBQBBBBBBBBBBBBBQBQBBBQBBBQBBBBBBBBBBBQBQBBBBBQBQBQBQBr  vB              \n";
	cout << "                QB  vB.                                                                                                 Bg  7B              \n";
	cout << "                BB  7B                                             :BB                                                  Bb  7B              \n";
	cout << "                QB  rB                                             iBB                  [����3]                         BE  7B              \n";
	cout << "                BB  7B                                                                                                  Bb  7Q              \n";
	cout << "                QB  rB.                                                                                                 Bg  7B              \n";
	cout << "                BB  :BBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBBBQBBBv  7B              \n";
	cout << "                QB                                                                                                          rB              \n";
	cout << "                QBBBBBBQBBBBBQBQBBBBBBBBBBBBBBBBBBBQBBBBBBBBBBBQBBBBBQBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBQBQBBBBBQBQBBBB              \n";
	cout << "                                                                                                                                           \n";

}

//������ ���� �ݰ� ���� ���
void NightDutyRoom::SafeDraw()
{
	cout <<"                                                                                                                                            \n";
	cout <<"                                                                                                                                            \n";
	cout <<"                                                                                          KBBB:                                             \n";
	cout <<"                                                                                        KBB. 1BB                                            \n";
	cout <<"                                                                                      qBB.     dBE                                          \n";
	cout <<"                                                                                    YBP          EB7                                        \n";
	cout <<"                                                                                   QBK           :MBB7                                      \n";
	cout <<"                                                    BBPgXSI5IX5SISI5ISIS5K5S5XIX5S1LrvuII55X55I52U77s5IS5SSXSXSX5X5X5X5X5X5XIX5ZPBQ         \n";
	cout <<"                                                    B7                                                                           QB         \n";
	cout <<"                                                    Bj  BBLX5XSSSXu5BBrLYjsJsJsJsJYjYJYsYJsJYJssYssjsJssYjsJsJssYJYjYJsjsjss7KB. BB         \n";
	cout <<"                                                    Bs  BL          qQ                                                        B. BB         \n";
	cout <<"                                                    Bj  B1 .......  ZB                                                        B: BQ         \n";
	cout <<"                                                    BY  Bu  .....  .Bv                                                        B: BB         \n";
	cout <<"                                                    BJ  BU        sBM                                                7gBBR    B: BB         \n";
	cout <<"                                                    BY  BBPK1JXgBBBi                                              IBBBR1UBBj  B: BB         \n";
	cout <<"                                                    BY  B7 uZMb1:                :YZBBBBBBQB:                  7BBBq7rr7rr1Bg B: BB         \n";
	cout <<"                                                    Bv  Br                   iPBBBBd5sL777sgBQ               2BBd7rrvvv7v7rrBBB: BB         \n";
	cout <<"                                                    QY  Bv               7PBBBD277r77v7vvv7r7BBi           EBBUrrv7vvLvLvvvriBB: BB         \n";
	cout <<"                                                    Bv  Bv           ibBBQEj7r77v7LvLvLvvvL77idBQ        dBBJi77vvvvLvLvLvL7iuB. BB         \n";
	cout <<"                                                    Bs  BY       :2BBBd177r7vLvvvvvLvYvLvLvv7vrvBBK    dBBYrrv7LvLvLvLvLvLvvrvB: BB         \n";
	cout <<"                                                    BL  Br   :1DBBDuvr77v7LvYvLvYvYvLvLvLvLvYvv7rjBBBQBBui77LvLvLvLvLvLvYvL7rsB. BB         \n";
	cout <<"                                                    BJ  BbrEQQb2v77vvvvLvvvLvLvYvLvvvLvLvLvLvLvv77ivU17r7vvL7LvLvYvLvLvLvLvvrjB. BB         \n";
	cout <<"                                                    Bs  BQLv7r77777777v7v7v7v7v7v7v777v777v777v7777rrr7777v7v7v7v7v7v7v777v7rYB. BB         \n";
	cout <<"                                                    Bu  BRiv7v7v7v7v7v7v7v7vvv7v7v7v7L7vvvvvvv7v7vvv7v7v7vvv7vvv7vvvvv7vvvvvrUB. BQ         \n";
	cout <<"                                                    BY  BBBBBQBBBBBBBBBBBQBQBBBBBQBBBBBBBBBBBBBQBBBBBQBBBBBBBBBBBBBQBBBBBBBBBQB  QB         \n";
	cout <<"                                                    BX                                                                           BB         \n";
	cout <<"                  [�ݰ�]                            BBBQBBBBBBBBBBBBBBBBBBBQBBBBBBBBBQBQBQBBBBBBBQBBBQBBBBBQBBBBBBBQBBBBBBBBBBBBBBQ         \n";
	cout <<"                                                                                                                                            \n";
	cout <<"       BBBBBBQBQBQBQQQQQBQBQBBBQBQBBQ                                                                                                       \n";
	cout <<"       Bv                          BQ                                                    [����]                                             \n";
	cout <<"       Br BBBBBBBBBBBQBBBBBBBBBBBB BB                                                                                                       \n";
	cout <<"       Br BB2KXKXqSqXK5XXKXKXKXIBB BB                                                                                                       \n";
	cout <<"       Br BQSKPKPXKSPbbSqKPKPKq5BB BB                                                                                                       \n";
	cout <<"       Br QB5qKPKXDBBBBBZXqPqPKXBB BQ                                                                                                       \n";
	cout <<"       Qr BBSKPqXRBr   7BgXKPqPIBB QB                                                                                                       \n";
	cout <<"       Br QBIPqP5BM     BBIPqPXSBB BB                                                                                                       \n";
	cout <<"       Qr BQSKPKqdBPi.iEBPKKPKq5BB QB                                                                                                       \n";
	cout <<"       Br BBIPKPKKPBBBBBKKKPqPXSBB BB                                                                                                       \n";
	cout <<"       Qr BQXKPqPKKSKXK5qqPqPqqIBB BB                                                                                                       \n";
	cout <<"       Br BB2KXKXKXKXKSqXKXqXqX5BB BB                                                                                                       \n";
	cout <<"       Br BBBBBBBQBBBQBQBQBBBBBBBQ BB                                                                                                       \n";
	cout <<"       B:                          QQ                                                                                                       \n";
	cout <<"       BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                                                                                       \n";
	cout <<"                                                                                                                                            \n";
	cout <<"                                                                                                                                            \n";
	cout <<"                                                                                                                                            \n";
}

void NightDutyRoom::Door()
{
	printf("r:rrrrrrrirrrirrrirrrrrrrrrrrrrrrrrrrirrrrrrrirrrrrrrrrrrrrrrrrrrrrrrrrrrrrirrrrrrrrririrrrrrrrrrrrirrrirrrrrrrrrrrrrrrrrrrrrirrrrririrrrr7:\n");
	printf("r:rrririrrrrrrrrrirrrrrrrrrrrrrrririririrrririrrrrrirrrrrrrrrrrirrrrrrrirrrrrrrrrirrrrrrririrrrirrrrrrrrrrririrrrrrrrrrrrrrrrrrrrrrrrirrrrr:\n");
	printf("r:rrririrrrrrrrrrirrrrrrrrrrrrrrririririrrririrrrrrirrrrrrrrrrrirrrrrrrirrrrrrrrrirrrrrrririrrrirrrrrrrrrrririrrrrrrrrrrrrrrrrrrrrrrrirrrrr:\n");
	printf("r:rririririrrririrrriririririrrrirrrirrriririrrririrrririrrrrririririririririrrriririrrrrrrrirrriririrrrirrrirrrrrirrrirrrrrrrirrrrrrrirrrri\n");
	printf("r:ririririririririririririririrrririrrriririririrrririririririrrriririririrrriririririririririrrrirrrirrririririririririririririririrrrirrr:\n");
	printf("rirriririririrrririrrriririririririririririririririririririririririririririririririririririririririririririririrrrirrririririrrrrrrriririrr:\n");
	printf("r:rrririririririrrriririririririrrrrrirrrrriiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiririririrrriririrrriririririrrrirrririr:\n");
	printf("r:irirrrrriririririririrrririririririririri:::::::::::::::::.:.:.:::::.:::::.:::.:.:.:.:.:.:.:.:...iiririrrririririrrririrrrrririririririrri\n");
	printf("r:riririririrrrirrrirrriririririririririri:YbBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBQBBBBBBBBBBBBBBR:iiririririrrriririririririrrriririrrrrr:\n");
	printf("r:iriririririririririririririrrriririririiiBP .................................................. MBi:riririririririririririririririrrriririi\n");
	printf("r:rirrrirrririrrriririrrriririririririrrr:iBU .................................................. uBi:iriririririririririrrririririrrrrrrrir:\n");
	printf("r:rrirrririririririrrrrririririririririri::B2  ................................................. 5Bi:iirirrriririririririririririrrririririi\n");
	printf("r:rrriririrrrrriririririrrririririrrrirrr:iBI .................................................. jBi:iriririririrrrrriririrrrirrrrrirrrirrr:\n");
	printf("i:iririririrrriririririrrriririririririri::B2 .................................................. sBi:iiriririririririririririririrrririririi\n");
	printf("r:ririririrrririririririririririrrriririr:iB5 .................................................. YBi:iriririrrrrriririrrriririrrrrriririrrr:\n");
	printf("r:iririririririririrrririrrriririririrrri::BI  ................................................. sBr:rirrriririrrrrriririririririririririrr:\n");
	printf("r:ririririrrririrrririrrrrririririrrririr:iQI .................................................  vBr:iriririrrrirrriririririririririririrrr:\n");
	printf("r:iririririrrririririririrrririririririri::B2 .................................................. vBr:iiririrrririrrrrriririrrriririrrrrrirr:\n");
	printf("r:rrrirrririririririririrrrrriririrrrirrr:iBI .................................................. rBr:iririririririrrriririririrrririrrrrrrr:\n");
	printf("r:rrirrrrriririririrrriririririririririri:iBU  ................................................. rBr:ririrrrrririririririrrriririrrriririrri\n");
	printf("r:riririririririririririrrriririririririr:iB2 .................................................. rB7:iririiiiiriiiriririririririririririrrr:\n");
	printf("iirririririririririririrrriririririririri::B2  ................................................. rBv.iiri:.:.:.:.:.::iirirrriririririririrri\n");
	printf("r:rirrriririririrrrrririrrririrrririririr:iBI .................................................. iBv:iriisJu5IXI5IUss:iirrriririririririrrr:\n");
	printf("r:rriririrrririririririririririrrriririri:iB2  ................................................. iBL:ri:iBBBQBBBQBBBB::rrririririririrrrirri\n");
	printf("r:riririririririririririririririririririr:iB5 .................................................. :Bv:ir:iBB        QB:iiririririririrrririr:\n");
	printf("r:rrrrirrriririririririririririririririri:iB2 .................................................. :BY.ii::BBY:rrri:LBB::riririrrriririrrrirri\n");
	printf("r:riririrrrirrriririririririririrrriririi:iQI .................................................. :BJ:ir::BBBBBBBBBBQB::iririririrrriririrrr:\n");
	printf("r:rriririririrrriririrrririrrriririrrriri::BU .................................................. :B1.ri::BBi      vBQ::rirrrrririririririrr:\n");
	printf("r:riririririrrririrrrrrrrrririrrririririr:iB5 .................................................. .Bj:ir::BBi      vBB::iririrrrrrrrrrrririr:\n");
	printf("r:rririrrririririririririririririrrririri::BU  .........................................         .Q1.ii::BB:      rBB::ririririririririrrrri\n");
	printf("r:rrriririririririrrrirrrrririririririrrr:iQI .........................................   :r7:   .Bj:ir::QBJ.:::: XQB::iririrrririrrririrrr:\n");
	printf("r:rrrriririririririrrrrrirrririririrrrrri::B2 ........................................  rBBBBBQq  B2.ri:iBBBBBBBBBBBB::riririrrriririririrri\n");
	printf("r:ririririririrrririrrririrrrrriririririr:iB2 ........................................ :BQBBBBBB2 BX.irii77777vvv7v7v:iiririririririrrririr:\n");
	printf("rirriririririrrriririririrrririririririri:iB2  ....................................... 7QBBBBBBBZ BP.irri:::.:::.::::iiriririririririririrri\n");
	printf("r:rrriririririririririrrririrrriririririi:iB2 ........................................  ZBBBBBBB  BK.iriririiiriririririririririririrrrrrir:\n");
	printf("r:iriririririririririririrrririririririri:iB2 .........................................  :1ggPi   Bq.iirirrrrrrrrrrririrrrrriririririririrri\n");
	printf("r:riririrrriririririririririririririririr:iBI ..........................................          BK.irrrirrrrririririririrrrirrriririririr:\n");
	printf("r:rririrrrirrriririririrrriririririririri:iB2  ........................................... . ...  Bd.iirirrriririririrrririrrririririrrrirri\n");
	printf("r:rrririrrririrrrrrirrririrrririrrrrririr:iBI ..................................................  BE.irrririrrrrriririririririrrririrrrirrr:\n");
	printf("rirrrriririririririririrrrrririrrriririri:iBU ..................................................  BD.ririririririririririririririririrrrirri\n");
	printf("r:rirrririririririrrririririririririririr:iQ5 ..................................................  BD.irrrrririririririririririririrrririrrr:\n");
	printf("r:iriririririrrrirrririrrriririririririri:iB2 ..................................................  Bg.iirirrriririririrrriririririrrriririri:\n");
	printf("r:riririrrririririririrrrirrrrriririririr:iBI ..................................................  Bg.iriririririrrrrrrririrrririririririrrr:\n");
	printf("r:rrirrrirrrirrrirrririririrrrrrirrrirrri::BU ..................................................  BQ.irrrrrrrrirrrrrirrrrrirrririririrrrrrri\n");
	printf("r:rrrrrrririrrrrrrrrrirrrrrrrirrrrririrrr:iQ5 ..................................................  BQ.irrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr7i\n");
	printf("r::i:i:i:i:i:i:i:i:i:i:i:::i:i:i:i:i:i:i:.:Bj                                                     BB ::i:i:i:::::i:i:i:i:i:i:i:::i:i:i:i:i::\n");
}

//������ �Է� üũ
void NightDutyRoom::CheckInput(string &input)
{
	if (input == "ħ��" || input == "1")
	{
		for (int i = 0; i < 1; i++)
		{
			system("cls");
			RoomShow();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n��� ���� �ڰ� �Ͼ�� ħ��. ��Ʈ������ ǫ���ϴ�.\n";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			cin >> input;
		}
	}
	else if (input == "â��")
	{
		for (int i = 0; i < 1; i++)
		{
			system("cls");
			RoomShow();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "â������ �ܴ��ϰ� ���� öâ�� �ִ�.";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			cin >> input;
		}
	}
	else if (input == "�ɺ�")
	{
		for (int i = 0; i < 4; i++)
		{
			system("cls");
			FlowerChestShow();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "���� ���� ä���� ���� �ɺ��̴�.";
			}
			else if (i == 1)
			{
				cout << "�� �� ���̰� �ɺ��� ���� �ִ�";
			}
			else if (i == 2)
			{
				cout << "1) ���ɴ�\n2) ��������";
			}
			else if (i == 3)
			{
				if (input == "1")
				{
					cout << "���� �� ����̴�.\n�ɸ��� ���ο� ����.";
				}
				else if (input == "2")
				{
					cout << "[�ɺ�] ȹ��";
					flowerVase = true;
				}
			}
			
			cout << "\n\n";

			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}

			cout << "\n";
			ItemShow();

			if (i == 2 || i == 3)
			{
				cin >> input;
			}
			else
			{
				_getch();
			}
		}
	}
	else if (input == "����")
	{
		for (int i = 0; i < 3; i++)
		{
			system("cls"); 
			SafeDraw();

			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "(1 / 3)�̶� ������ �ִ�.";
			}
			if (i == 1)
			{
				cout << "1) ���ɴ�:\n2) �������� ��������\n3) [�ɺ�] ������)";
			}
			if (i == 2)
			{
				if (input == "1")
				{
					cout << "�������� ���캸���� ��, ȸ�� �ڷḦ ì����� �繫���� ���ؼ� ���� �� �� ����.";
				}
				else if (input == "2")
				{
					cout << "������ ȹ��";
					map = true;
				}
				else if (input == "3")
				{
					if (!flowerVase)
					{
						cout << "�������Ѱ� ����";
					}
					else
					{
						cout << "���ڸ� ���� �ɺ��� ��������, ��濡 ���� ������ Ƥ��.\n���� ���� �׸��� �������� �㹰���� �귯������ �� �ȿ� �ִ� �ָ��� ��������";
						birdcage = true;
						flowerVase = false;
					}
				}
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if(i == 1 || i == 2)
				cin >> input;
			else
				_getch();
		}
	}
	else if (input == "�ݰ�")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			SafeDraw();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "(1 / 3)�̶� ������ �ִ�.";
			}
			if (i == 1)
			{
				cout << "<���̾� �����̵� ��Ʈ>";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();

			_getch();
			if(i == 1)
				CheckSafe();
		}
	}
	else if (input == "��")
	{
		for (int i = 0; i < 1; i++)
		{
			system("cls");
			Door();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "(";
				if(!butterfly)
					cout << "?";
				else
					cout << "[����]�ָ�";

				cout << ")" << "��" << "("; 
				
				if (!flowerGround)
					cout << "?";
				else
					cout << "[����]�ָ�";

				cout << ")" << "�� �ƴ϶�("; 
				
				if (!birdcage)
					cout << "?";
				else
					cout << "[����]�ָ�";
					cout << ")" << " ���� ���ư��� �Ѵ�";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			cin >> input;
		}
	}
	else if (input == ">") // ������
	{
		check_space++;
		check_space %= 4;
		if (check_space == 0)
		{
			for (int i = 0; i < 1; i++)
			{
				system("cls");
				RoomShow();
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n";
				ItemShow();
				cin >> input;
			}
		}
		else if (check_space == 1)
		{
			for (int i = 0; i < 1; i++)
			{
				system("cls");
				FlowerChestShow();
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n\n";
				cout << "\n\n";

				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}

				cout << "\n";
				ItemShow();
				cin >> input;
			}
		}
		else if (check_space == 2)
		{
			for (int i = 0; i < 1; i++)
			{
				system("cls");
				SafeDraw();

				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n";
				ItemShow();
				cin >> input;
			}
		}
		else if (check_space == 3)
		{
			for (int i = 0; i < 1; i++)
			{
				system("cls");
				Door();
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n";
				ItemShow();
				cin >> input;
			}
		}
	}
	else if (input == "<") // ����
	{
		check_space--;
		check_space += 4;
		check_space %= 4;
		if (check_space == 0)
		{
			for (int i = 0; i < 1; i++)
			{
				system("cls");
				RoomShow();
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n";
				ItemShow();
				cin >> input;
			}
		}
		else if (check_space == 1)
		{
			for (int i = 0; i < 1; i++)
			{
				system("cls");
				FlowerChestShow();
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n\n";
				cout << "\n\n";

				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}

				cout << "\n";
				ItemShow();
				cin >> input;
			}
		}
		else if (check_space == 2)
		{
			for (int i = 0; i < 1; i++)
			{
				system("cls");
				SafeDraw();

				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n";
				ItemShow();
				cin >> input;
			}
		}
		else if (check_space == 3)
		{
			for (int i = 0; i < 1; i++)
			{
				system("cls");
				Door();
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n";
				ItemShow();
				cin >> input;
			}
		}
	}
	else
	{
		ItemShow();
		cin >> input;
	}
}

void NightDutyRoom::CheckSafe()
{
	int answer[3] = {0,0,0};
	string button;

	while (true)
	{
		system("cls");
		for (int j = 0; j < 70; j++)
		{
			cout << "��";
		}
		cout << "\n\n<���̾� �����̵� ��Ʈ>\n";

		for (int i = 0; i < 3; i++)
		{
			if (answer[i] == 0)
			{
				cout << "(      ) ";
			}
			else if (answer[i] == 1)
			{
				if (i % 2 != 0)
					cout << "(�����̵�) ";
				else
					cout << "(���̾�) ";
			}
			else if (answer[i] == 2)
			{
				if (i % 2 != 0)
					cout << "(Ŭ�ι�)   ";
				else
					cout << "(��Ʈ)   ";
			}
		}

		cout << "\n\n";
		cout << "[�ٲٱ�1] [�ٲٱ�2] [�ٲٱ�3]";

		cout << "\n\n";
		for (int j = 0; j < 70; j++)
		{
			cout << "��";
		}

		cout << "\n\n";

		cin >> button;

		if (button == "�ٲٱ�1")
			answer[0] = (answer[0] + 1) % 3;
		else if (button == "�ٲٱ�2")
			answer[1] = (answer[1] + 1) % 3;
		else if (button == "�ٲٱ�3")
			answer[2] = (answer[2] + 1) % 3;

		if (answer[0] == 1 && answer[1] == 1 && answer[2] == 2)
			break;
	}
}

int main()
{
	NightDutyRoom duty;
	string input;
	system("mode con cols=150 lines=60");
	startScene(duty, input);

	while (true)
	{
		duty.CheckInput(input);
	}
}