#pragma once
#include <iostream>
#include <conio.h>
#include "Class.h"

using namespace std;
void game_help()
{
	system("cls");
	cout<<"\t\t\t\t                       ����Ű\n"; _getch();
	cout<<"\t\t\t\t�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n"; _getch();
	cout<<"\t\t\t\t������\n"; _getch();
	cout<<"\t\t\t\t���� �ٸ� ���� ���� ������ < �Ǵ� >�� �Է��ϸ� �ȴ�.\n"; _getch();
	cout<<"\t\t\t\t�� ���� ������ �����ϰ� ������ [   ]�� ���ʿ� �ִ� ���� �Է��ϸ� �ȴ�.\n"; _getch();
	cout<<"\t\t\t\t����) [ħ��1]�� �����ϰ� ������ ħ��1 �̶�� �Է��ϸ�ȴ�.\n"; _getch();
	cout<<"\t\t\t\t����) [ź����_��]�� �����ϰ� ������ ź����_�� �̶�� �Է��ϸ� �ȴ�.\n"; _getch();
	cout<<"\t\t\t\t��縦 �ѱ� ���� �ƹ� Ű�� �Է��ص� �������.\n"; _getch();
	cout<<"\t\t\t\t�������� �ڵ� ����� �ȴ�.\n"; _getch();
	cout<<"\t\t\t\t�ڹ��� ��й�ȣ �Է� â ���� Ư���� ��鿡�� ����� �ʹٸ� �ڷ� �� �Է��ϸ� �ȴ�.\n"; _getch();
	cout<<"\t\t\t\t�繫��\n"; _getch();
	cout<<"\t\t\t\t�繫�ǿ��� ���� �ٸ� ���� ���� ���� <�� �̿��Ͽ� �Դٰ����ϴ� ����� �ƴϴ�.\n"; _getch();
	cout<<"\t\t\t\t�⺻������ ���� ������ �ٶ� ������� ȭ�鿡 ���.\n"; _getch();
	cout<<"\t\t\t\t�������� �����ǰ� �����ϴ�.\n"; _getch();
	cout<<"\t\t\t\t������ �ִ� Ư�� �������� ������ ������ ��ĥ �� �ִ�.\n"; _getch();
	
}

void startScene(NightDutyRoom d, string &input)
{
	System system;

	cout<<"�����������������������������������������������������������������������\n";
	cout<<"                                                                                                                                            \n";
	cout<<"                                                                                                                                            \n";
	cout<<"                                                                                                                                            \n";
	cout<<"                                                                                                                                            \n";
	cout<<"                                                      KRQBBBQBBBQBBBBBBBBBBBBBQBgr                                                          \n";
	cout<<"                                                      BQ15PKPKPKqXX2S5qKPKPKPSSZBB                                                          \n";
	cout<<"                                                rBE   BB                        QB   .BB.    rr                                             \n";
	cout<<"                                         BBB    vBB   BB          :BB          .BB    XI    iBBv                                            \n";
	cout<<"                                 :BQ     rDL          QB          BBBI         .QB           ::     vBB                                     \n";
	cout<<"                                 7BB                  BQ          BBBY         .BQ                  :BD                                     \n";
	cout<<"                                                      BB    PBBBBBBBQBBBBBBB   .BQ                          ..                              \n";
	cout<<"                          BBB                         BB    BBBBBBBBBBBQBBBB.  .BD                         .BB7                             \n";
	cout<<"                          vBs                         BB          BBBu         :QZ                          ir                              \n";
	cout<<"                                                      BB          BQBY         :BK                                ::                        \n";
	cout<<"                    7BM           :BBBBBQBBBQBBBBBQBBBBB          BBBd         rBBBBBBBBQBBBQBBBBBQBBBBv          BB                        \n";
	cout<<"                     r.           bBBL1uUu1uU1UuU1Uj1Y7i          2BB:          v7ujU111U1U1UuUu2u1uJPBB                                    \n";
	cout<<"                                  2Bi                                                                 BB                                    \n";
	cout<<"                Sv                                                                                                    .BR                   \n";
	cout<<"               .BB                   .r               ..                                                              .BS                   \n";
	cout<<"                       sdRBBBBMD.    BBu           5BBBBBBBY           1B       .B     .5        :bBBBBBBBBBBM:                             \n";
	cout<<"                      :BQBBBQBQBD    EBB         :BBBr.::uBBB          BB:      2Bs    BB7      BBQBBBRRRBBBBBr                             \n";
	cout<<"                              BBM :::ZBB         BBd      iBB          BBi   .. QBM   .BB5     rBB                                          \n";
	cout<<"             QB.              BBBBQBBBQB.        gBBRurrLRBBR          BBBQBBBBBQBBBQBBBBq     vQB                       BBB                \n";
	cout<<"             QB:              BBB     BBJ         .PBBBBBBP.           BBJ      gBBuuvLBBS     rBBBQBBQEQBBBBBB          rQv                \n";
	cout<<"                              QBB     QBB                              BBP  ....QBBBBBBBBS      rJgBBBBBQgggDMK                             \n";
	cout<<"                              :BQ      2r    iqPgQBBBBBBBBBQBQBBBS     YBBBBBBBBBB7    BBP            .BB                  vi               \n";
	cout<<"           iBB                               dBBQBBBQg5uvriiirrL7                      BBi     iii::..SBB..:ivIu          5BB               \n";
	cout<<"            Lr             :jbQBBQBBBBBBBr       :                            .LZBBBPi         BBBBBBBBQBBBBBBBB                            \n";
	cout<<"                     r    PBBBBBBQEK1J1BBu      BB                         :BBBBBBBBBBQQ            .rsI1dPr                                \n";
	cout<<"                   KBB    BB7          BB7      BBr                       YBBq.       BBB         5BBBBBBBBBBv          .                   \n";
	cout<<"                  BBBBB   BBI          BBS      BB7                       QBB         .BBi       BBB        BBv       .BB:..                \n";
	cout<<"            .PBBBBBBBBBB  BBB   .....  QBB      BBB:ir77vvsLY7vvj.        iBBP      .5BBB        QBR        BBP      5BBBBBBBBY             \n";
	cout<<"           QQBBBBBBBQBBBB  QBBQBBBBBQBBBBD      iBBBBBBBBBBBBBBBBD         :BBBBBBBBBBB7          BBBBRbqQBBBQ     :QBBBBBQBQBBB:           \n";
	cout<<"          BBBBBBBBBBBBBBBQJ    ...:.::..                                      ijbbqL:               uBBBBQBv     iBBBQBBBBBQBBBBB.          \n";
	cout<<"         1BBBBBBBBBBQBBBQBQBX.                                                                                .KQBBBQBBBBBBBQBBBBB          \n";
	cout<<"         XBQBBBBBQBBBBBBBBBBBBBBDJi.                                                                      :vgBBQBBBBBBBBBBBBBQBQBB          \n";
	cout<<"          BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                :B            7B                    .:iUPZQBBBBBBBBBQBBBBBBBQBBBBBBBB:          \n";
	cout<<"          .BBBBBBBBBBBBBBBBBBBBBBQBBBBBBBBBB                JB            gB                   QBBBBBBBBBBBBBBBBBBBBBQBQBQBQBBBBi           \n";
	cout<<"            7BBBBBBBBBBBBBBBQBQBBBBBBBBBBBBBBBQBBBQBBBBBBBQBBBBBBBBBQBBBBBBBBBBBBBBBQBBBBBQBBBQBBBBBBBQBBBBBBBBBBBQBBBBBQBBBBB7             \n";
	cout<<"                .rKQBQBBBBBBBBBBBBBBBQBbRX.                                                      rqjgQBBBBBBBBBBBBBBBBBE1:                  \n";
	cout<<"                                                                                                                                        \n";
	cout<<"                                                                                                                                            \n";
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
		input = "1";
		d.CheckInput(input);
	}
}
// ������ ���� �Ǵ�
void System :: Item()
{
	for (int i = 0; i < 6; i++)
	{
		itemList[i] = " ";
	}
	if (flowerVase)
	{
		itemList[0] = "[�ɺ�] ";
	}
	if (birdcage)
	{
		itemList[1] = "[����]�ָ� ";
	}
	if (flowerGround)
	{
		itemList[2] = "[�ɹ�]�ָ� ";
	}
	if (butterfly)
	{
		itemList[3] = "[����]�ָ� ";
	}
	if (map)
	{
		itemList[4] = "������ ";
	}
	if (docx)
	{
		itemList[5] = "ȸ�� �ڷ� ";
	}
}

// �κ��丮 ���
void System::ItemShow()
{
	Item();
	cout << "\nitem list : ";
	for (int i = 0; i < 6; i++)
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
	cout<<"r:rrrrrrrirrrirrrirrrrrrrrrrrrrrrrrrrirrrrrrrirrrrrrrrrrrrrrrrrrrrrrrrrrrrrirrrrrrrrririrrrrrrrrrrrirrrirrrrrrrrrrrrrrrrrrrrrirrrrririrrrr7:\n";
	cout<<"r:rrririrrrrrrrrrirrrrrrrrrrrrrrririririrrririrrrrrirrrrrrrrrrrirrrrrrrirrrrrrrrrirrrrrrririrrrirrrrrrrrrrririrrrrrrrrrrrrrrrrrrrrrrrirrrrr:\n";
	cout<<"r:rrririrrrrrrrrrirrrrrrrrrrrrrrririririrrririrrrrrirrrrrrrrrrrirrrrrrrirrrrrrrrrirrrrrrririrrrirrrrrrrrrrririrrrrrrrrrrrrrrrrrrrrrrrirrrrr:\n";
	cout<<"r:rririririrrririrrriririririrrrirrrirrriririrrririrrririrrrrririririririririrrriririrrrrrrrirrriririrrrirrrirrrrrirrrirrrrrrrirrrrrrrirrrri\n";
	cout<<"r:ririririririririririririririrrririrrriririririrrririririririrrriririririrrriririririririririrrrirrrirrririririririririririririririrrrirrr:\n";
	cout<<"rirriririririrrririrrriririririririririririririririririririririririririririririririririririririririririririririrrrirrririririrrrrrrriririrr:\n";
	cout<<"r:rrririririririrrriririririririrrrrrirrrrriiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiririririrrriririrrriririririrrrirrririr:\n";
	cout<<"r:irirrrrriririririririrrririririririririri:::::::::::::::::.:.:.:::::.:::::.:::.:.:.:.:.:.:.:.:...iiririrrririririrrririrrrrririririririrri\n";
	cout<<"r:riririririrrrirrrirrriririririririririri:YbBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBQBBBBBBBBBBBBBBR:iiririririrrriririririririrrriririrrrrr:\n";
	cout<<"r:iriririririririririririririrrriririririiiBP .................................................. MBi:riririririririririririririririrrriririi\n";
	cout<<"r:rirrrirrririrrriririrrriririririririrrr:iBU .................................................. uBi:iriririririririririrrririririrrrrrrrir:\n";
	cout<<"r:rrirrririririririrrrrririririririririri::B2  ................................................. 5Bi:iirirrriririririririririririrrririririi\n";
	cout<<"r:rrriririrrrrriririririrrririririrrrirrr:iBI .................................................. jBi:iriririririrrrrriririrrrirrrrrirrrirrr:\n";
	cout<<"i:iririririrrriririririrrriririririririri::B2 .................................................. sBi:iiriririririririririririririrrririririi\n";
	cout<<"r:ririririrrririririririririririrrriririr:iB5 .................................................. YBi:iriririrrrrriririrrriririrrrrriririrrr:\n";
	cout<<"r:iririririririririrrririrrriririririrrri::BI  ................................................. sBr:rirrriririrrrrriririririririririririrr:\n";
	cout<<"r:ririririrrririrrririrrrrririririrrririr:iQI .................................................  vBr:iriririrrrirrriririririririririririrrr:\n";
	cout<<"r:iririririrrririririririrrririririririri::B2 .................................................. vBr:iiririrrririrrrrriririrrriririrrrrrirr:\n";
	cout<<"r:rrrirrririririririririrrrrriririrrrirrr:iBI .................................................. rBr:iririririririrrriririririrrririrrrrrrr:\n";
	cout<<"r:rrirrrrriririririrrriririririririririri:iBU  ................................................. rBr:ririrrrrririririririrrriririrrriririrri\n";
	cout<<"r:riririririririririririrrriririririririr:iB2 .................................................. rB7:iririiiiiriiiriririririririririririrrr:\n";
	cout<<"iirririririririririririrrriririririririri::B2  ................................................. rBv.iiri:.:.:.:.:.::iirirrriririririririrri\n";
	cout<<"r:rirrriririririrrrrririrrririrrririririr:iBI .................................................. iBv:iriisJu5IXI5IUss:iirrriririririririrrr:\n";
	cout<<"r:rriririrrririririririririririrrriririri:iB2  ................................................. iBL:ri:iBBBQBBBQBBBB::rrririririririrrrirri\n";
	cout<<"r:riririririririririririririririririririr:iB5 .................................................. :Bv:ir:iBB        QB:iiririririririrrririr:\n";
	cout<<"r:rrrrirrriririririririririririririririri:iB2 .................................................. :BY.ii::BBY:rrri:LBB::riririrrriririrrrirri\n";
	cout<<"r:riririrrrirrriririririririririrrriririi:iQI .................................................. :BJ:ir::BBBBBBBBBBQB::iririririrrriririrrr:\n";
	cout<<"r:rriririririrrriririrrririrrriririrrriri::BU .................................................. :B1.ri::BBi      vBQ::rirrrrririririririrr:\n";
	cout<<"r:riririririrrririrrrrrrrrririrrririririr:iB5 .................................................. .Bj:ir::BBi      vBB::iririrrrrrrrrrrririr:\n";
	cout<<"r:rririrrririririririririririririrrririri::BU  .........................................         .Q1.ii::BB:      rBB::ririririririririrrrri\n";
	cout<<"r:rrriririririririrrrirrrrririririririrrr:iQI .........................................   :r7:   .Bj:ir::QBJ.:::: XQB::iririrrririrrririrrr:\n";
	cout<<"r:rrrriririririririrrrrrirrririririrrrrri::B2 ........................................  rBBBBBQq  B2.ri:iBBBBBBBBBBBB::riririrrriririririrri\n";
	cout<<"r:ririririririrrririrrririrrrrriririririr:iB2 ........................................ :BQBBBBBB2 BX.irii77777vvv7v7v:iiririririririrrririr:\n";
	cout<<"rirriririririrrriririririrrririririririri:iB2  ....................................... 7QBBBBBBBZ BP.irri:::.:::.::::iiriririririririririrri\n";
	cout<<"r:rrriririririririririrrririrrriririririi:iB2 ........................................  ZBBBBBBB  BK.iriririiiriririririririririririrrrrrir:\n";
	cout<<"r:iriririririririririririrrririririririri:iB2 .........................................  :1ggPi   Bq.iirirrrrrrrrrrririrrrrriririririririrri\n";
	cout<<"r:riririrrriririririririririririririririr:iBI ..........................................          BK.irrrirrrrririririririrrrirrriririririr:\n";
	cout<<"r:rririrrrirrriririririrrriririririririri:iB2  ........................................... . ...  Bd.iirirrriririririrrririrrririririrrrirri\n";
	cout<<"r:rrririrrririrrrrrirrririrrririrrrrririr:iBI ..................................................  BE.irrririrrrrriririririririrrririrrrirrr:\n";
	cout<<"rirrrriririririririririrrrrririrrriririri:iBU ..................................................  BD.ririririririririririririririririrrrirri\n";
	cout<<"r:rirrririririririrrririririririririririr:iQ5 ..................................................  BD.irrrrririririririririririririrrririrrr:\n";
	cout<<"r:iriririririrrrirrririrrriririririririri:iB2 ..................................................  Bg.iirirrriririririrrriririririrrriririri:\n";
	cout<<"r:riririrrririririririrrrirrrrriririririr:iBI ..................................................  Bg.iriririririrrrrrrririrrririririririrrr:\n";
	cout<<"r:rrirrrirrrirrrirrririririrrrrrirrrirrri::BU ..................................................  BQ.irrrrrrrrirrrrrirrrrrirrririririrrrrrri\n";
	cout<<"r:rrrrrrririrrrrrrrrrirrrrrrrirrrrririrrr:iQ5 ..................................................  BQ.irrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr7i\n";
	cout<<"r::i:i:i:i:i:i:i:i:i:i:i:::i:i:i:i:i:i:i:.:Bj                                                     BB ::i:i:i:::::i:i:i:i:i:i:i:::i:i:i:i:i::\n";
}

//������ �Է� üũ
void NightDutyRoom::CheckInput(string &input)
{
	if (input == "1")
	{
		for (int i = 0; i < 9; i++)
		{
			system("cls");
			RoomShow(); for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n������ ���� ��������..?\n";
			}
			else if (i == 1)
			{
				cout << "\n���䡦 ��, �������̳�.\n";
			}
			else if (i == 2)
			{
				cout << "\n!!\n";
			}
			else if (i == 3)
			{
				cout << "\n���� ��ħ�� ȸ�� �־��µ�, �ʰڴ�!\n";
			}
			else if (i == 4)
			{
				cout << "\n���߳�. ȸ�� ���� �繫�ǿ� �ִµ�.\n";
			}
			else if (i == 5)
			{
				cout << "\n���� ���߰ڴ�.\n";
			}
			else if (i == 6)
			{
				cout << "\n(ö��ö��)\n";
			}
			else if (i == 7)
			{
				cout << "\n�ƴ� ���� �� �� ����?\n";
			}
			else if (i == 8)
			{
				cout << "\n�ϴ� �ֺ��� �ѷ�����.\n";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 8)
				cin >> input;
			else
				_getch();
		}
	}
	else if (input == "ħ��")
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
				cout << "â������ �ܴ��ϰ� �����ִ�.";
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
	else if (input == "����1" || input == "����2")
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
			
			if (i == 0)
			{
				cout << "������ ����ִ�.";
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
	else if (input == "����3")
	{
		for (int i = 0; i < 2; i++)
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
				cout << "!�ޱ׶�!";
			}
			else if (i == 1)
			{
				cout << "[�ɹ�]�ָ��� �����";
				flowerGround = true;
			}

			cout << "\n\n";

			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}

			cout << "\n";
			ItemShow();

			if (i == 1)
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
				cout << "(3 / 3)�̶� ������ �ִ�.";
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
			if (i == 0 && !butterfly)
			{
				cout << "(1 / 3)�̶� ������ �ִ�.";
			}
			else if (i == 1 && !butterfly)
			{
				cout << "<���̾� �����̵� ��Ʈ>";
			}
			else if (i == 1 && butterfly)
			{
				cout << "\n�ݰ�� ����־�.\n";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();

			_getch();

			if (i == 1 && !butterfly)
			{
				CheckSafe();
				system("cls");
				SafeDraw();
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}
				cout << "\n\n\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "��";
				}

				ItemShow();
				cin >> input;
			}
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
					cout << "[�ɹ�]�ָ�";

				cout << ")" << "�� �ƴ϶�("; 
				
				if (!birdcage)
					cout << "?";
				else
					cout << "[����]�ָ�";
					cout << ")" << " ���� ���ư��� �Ѵ�";
			}
			cout << "\n\n";
			if (butterfly && flowerGround && birdcage)
			{
				cout << "\n���� ���ȴ�.\n";
				Escape = true;
			}
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (butterfly && flowerGround && birdcage)
				_getch();
			else
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
		{
			butterfly = true;
			system("cls");
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n[����]�ָ��� �����.\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();

			break;
		}
	}
	_getch();
}

bool NightDutyRoom::IsEscape()
{
	return Escape;
}

void Office::OfficeRoom()
{
	cout<<"BB                                                                                                                                         K\n";
	cout<<" 7Q.                                                                                                                                      bU\n";
	cout<<"  .QB.                                                                                                                                  dBi \n";
	cout<<"    :BQ                                                                                                                               vB1   \n";
	cout<<"      vBd                                                                                                                           :BM     \n";
	cout<<"        UBj                                                                                                                        RB:      \n";
	cout<<"          ZBr                                                                                                                    1Bv        \n";
	cout<<"Bu         .Rg:                                                                                                                iQq          \n";
	cout<<".jBS         BBivvLvLvLvLvLvL77BjiiQBi77v7vrEB77vvLvL77iBD:BBi77v77r5Bd5qKKXPKK1BEBBrrv7v7rdBs112111IjJBg:BB1IXSX52dBgDgMDMgMZdBI           \n";
	cout<<"   1B2       BB                B  1         B          Bi S         B          B 7         Q          B: L         B          Bj            \n";
	cout<<"     BBq.    BB    [å��]      B  2         B          Br 5         B          B v         B          Br j         B          B2        i   \n";
	cout << "     B.:BQ.  BB                B5 [����6] B          Br 5 [����7] B          B 7 [����8] B          Br Y [����9] B          BU     :12Q2  \n";
	cout<<"BPr  B.  :B  MB                B  K         B          Br K         B          B L         B          B7 U         B          QX   7P1. :K  \n";
	cout<<" :XMIB.   Q  MBs2qKPXPXqXPKPXX5S  BS55XSS2sEB          Br BgddEdZP5bB          B vJU2S55JMBB          Br BbPZDRRQDBB          BS   B    .E  \n";
	cout<<"    .BQKr B  QB                             B  [å��6] Br           B  [å��7] B          .B  [å��8] B7           B  [å��9] BX   Q    .B  \n";
	cout<<" [  B  vEB  BB                             B          B7           B          B          iB          Br          .B          BU   B  :YI7  \n";
	cout<<"r.   B    B  QB                             B          Br          .B          B          :B          Br           B          B2   EXv:    i\n";
	cout<<"SgQu.B    B  gB                             B          B7          .B          B          iB          B7          .B          BJ       rKMZu\n";
	cout<<"   iqBZi  B. XBI7vYvv7v7777rri:BL           QBQBQBBBBBRBi          .BRdgDgZgZZPB          :BRQBBQBQBQQBr          .BbPPdPPPbX2Bi  :YdgdY:   \n";
	cout<<"      .IMgB. PB                B7                                                                                              BRK57.       \n";
	cout<<"          i  PB     [å��1]     B7                                                                                              BB           \n";
	cout<<"             dB                B7                                                                                              BB           \n";
	cout<<"             dBRQQRgDg         Bv                                                                                              BB           \n";
	cout<<"             RB      B         Bv                                                                                              BB [ȸ�ǽǹ�] \n";
	cout<<"             gB      B         BY                                                                                              BB           \n";
	cout<<"             gQ      B         BL                                                                                              BQ           \n";
	cout<<"             ZB      B.jBgQMQRMBY                                                                                              BBuu7:.      \n";
	cout<<"             gg      B.        B7                                                                                              B  :L2dgMdXLi\n";
	cout<<"       iPBD  EB      B:        Qv           qdEggMgMDDbP            7ju52S5S22Jv            IXPPEdEddqq2            i7YLsYJsuv7B.       .:7u\n";
	cout<<"   vZBBBSsB  ZB      B: [����1] B7         rB          B7          .B          BX          rB          B7          .B          BJ           \n";
	cout<<"BBBBQB    B  PB      B:        B7          iB          Br          .B          BU          :B          B7          .B          QU           \n";
	cout<<"7.   B    B  EB      BBsu2U211vBv          :B          Br           B          B2          :B          Br           B          Bu           \n";
	cout<<"  ] B  :PB  PB                            :B          Br           B          BU          .B          Q7           B          B2           \n";
	cout<<"    :BEBBuB  bB                            7B  [å��2] Br           B  [å��3] B1          vB  [å��4] Br           Q  [å��5] BU           \n";
	cout<<" .qBBB:   B  PB BBBBBBBBBB        rBKdEDZZKBB          Br jBgQMQRMdRB          Br iBZDMgMDbQB          Br PREDMggEPDB          BI           \n";
	cout<<"BB1 :B    B. PQ B  [���� B        7         B          Br P         B          Br r         Q          Br B         B          B2           \n";
	cout<<"    iB  .KB  qB B  ����] B        i [����2] B          Br J [����3] B          Bi : [����4] B          Br B [����5] B          B5           \n";
	cout<<"    :B7BBL   dB BM:r7v7vjB        i         B          Br L         B          Qr :         B          Bi B         Q          B2           \n";
	cout<<"   rBBS.     PB                   i         B          Bi v         B          Bi i         B          Qi B         B          B1           \n";
	cout<<"rDBQ:        BB5YYvv7v777YSPPbPEPbXBBPPZZZbPRBBBQBQBBBBBBQjBBbdDZgZEMBBBBBBBBBQQBQQBqZZgZZPQBBBBBBBBBBBBRjBBXddEdZPRBQMBQBQBQQDBB.          \n";
	cout<<"BY        .EB7                                                                                                                   Bg         \n";
	cout<<"        .QB7                                                                                                                      jBj       \n";
	cout<<"      :QBi                                                                                                                          gQ:     \n";
	cout<<"    iBQi                                                                                                                             .BQ    \n";
	cout<<"  rQQ.                                                                                                                                 YB1  \n";
	cout<<"LqU                                                                                                                                      UQ.\n";
}

void Office::CheckInput(string &input)
{
	if (input == "��")
	{
		for (int i = 0; i < 5; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n��¼�ٰ� ������ �ڹ����� �� ����̳�.\n";
			}
			else if (i == 1)
			{
				cout << "\n���� �� ȸ�ǽǷ� ���� ����. ���� ȸ�� ������ ������ ���߰ڴ�.\n";
			}
			else if (i == 2)
			{
				cout << "\n�ٵ� ��� �ڷḦ �״���?\n";
			}
			else if (i == 3)
			{
				cout << "\n�����غ��� ȸ�ǽ��� ��������� �𸣳�?\n";
			}
			else if (i == 4)
			{
				cout << "\n�ϴ� ã�ƺ���.\n";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			ItemShow();
			if (i == 4)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "å��1")
	{
		for (int i = 0; i < 4; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n�絿�� ����� �ڸ���.\n";
			}
			if (i == 1)
			{
				cout << "\n[��ǻ��]\n��Ʈ�Ͽ��� ����� �ɷ��ִ�.\n";
			}
			if (i == 2)
			{
				cout << "\n��й�ȣ ��Ʈ�� �����ִ�.\n��6= ��26 ��=��\n";
			}
			if (i == 3)
			{
				cout << "\n(��й�ȣ�� �Է��ϼ���.)\n";
				if (input == "�絿��")
				{
					cout << "\n[�޽���]\n�絿�� : ȸ�Ǵ� g421���� �����մϴ�. \n";
					unLockNoteBook = true;
				}
				else
				{
					cout << "\n�߸��� ��й�ȣ��\n";
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
	else if (input == "å��2")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n������ ����� �ڸ���.\n";
			}
			if (i == 1)
			{
				cout << "\n����ȭ�� ���� ���ڰ� �Ǿ� �ִ�.\n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 1)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "å��3")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n������ �븮�� �ڸ���.\n";
			}
			if (i == 1)
			{
				cout << "\n���޷��� ���������� �� ����ִ�. \n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 1)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "å��4")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n���� ����� �ڸ���.\n";
			}
			if (i == 1)
			{
				cout << "\n��ä���� �õ��� �ִ�. \n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 1)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "å��5")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n������ ���� �ڸ���.\n";
			}
			if (i == 1)
			{
				cout << "\n�������� �Ƹ���� �Ǿ� �ִ�.  \n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 1)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "å��6")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\nȫ���� ����� �ڸ���.\n";
			}
			if (i == 1)
			{
				cout << "\n���� ƫ���� ������ ��� ��������.  \n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 1)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "å��7")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n������ ���Ӵ� �ڸ���.\n";
			}
			if (i == 1)
			{
				cout << "\n�󺥴��� �ִ� ������ �����ִ�.  \n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 1)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "å��8")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n������ ����� �ڸ���.\n";
			}
			if (i == 1)
			{
				cout << "\n��Ȳ ī���̼��� ���ڰ� �Ǿ� �ִ�.\n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 1)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "å��9")
	{
		for (int i = 0; i < 3; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n������ ���� �ڸ���.\n";
			}
			if (i == 1)
			{
				cout << "\n�����ʰ� ȭ���ϰ� �Ǿ� �ִ�. \n";
			}
			if (i == 2)
			{
				cout << "[����]\n�ڹ��谡 �ɷ��ִ�\n�ؿ��� �޸� �����ִ�.\n���� ������ ���� ����� �ֽ��϶�.\nEX) :  1278, 3478, 24678";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 1)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "467")
	{
		for (int i = 0; i < 3; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n!ö��!\n";
			}
			if (i == 1)
			{
				cout << "\n�ڹ��踦 ������.\n";
			}
			if (i == 2)
			{
				cout << "ȸ�� �ڷḦ �����.";
				meetingDocx = true;
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 2)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "ȸ�ǽǹ�" && meetingDocx && unLockNoteBook)
	{
		isEnd = true;
		system("cls");
		cout << "ȸ�� �ڷᵵ ì������ �� ȸ�ǽǷ� ���߰ڴ�!"; _getch();
		exit(0);
	}
	else if (input == "ȸ�ǽǹ�" && !meetingDocx && unLockNoteBook)
	{
		isEnd = true;
		system("cls");
		cout << "�� ȸ�� �ڷᰡ �� ���̳�.. �켱 ȸ�ǽǷ� ���� ���߰ڴ�.."; _getch();
		exit(0);
	}
	else if (input == "ȸ�ǽǹ�" && !meetingDocx && !unLockNoteBook)
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\nȸ�ǽ��� �����?\n";
			}
			if (i == 1)
			{
				cout << "\n���ϴ� ���� �ð��� ����. ���� ������! ������! ������!\n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 1)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else if (input == "����1" || input == "����2" || input == "����3" || input == "����4" || input == "����5" || input == "����6" || input == "����7" || input == "����8")
	{
		for (int i = 0; i < 1; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\nŸ���� ������ ���°� �ε������� ������\n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "��";
			}
			cout << "\n";
			ItemShow();
			if (i == 0)
			{
				cin >> input;
			}
			else
				_getch();
		}
	}
	else
	{
		ItemShow();
		cin >> input;
	}
}

bool Office::IsEnd()
{
	return isEnd;
}

int main()
{
	NightDutyRoom duty;
	Office office;
	string input;
	system("mode con cols=150 lines=60");
	startScene(duty, input);

	while (true)
	{
		duty.CheckInput(input);
		if (duty.IsEscape())
			break;
	}
	while (true)
	{
		office.CheckInput(input);
	}
}