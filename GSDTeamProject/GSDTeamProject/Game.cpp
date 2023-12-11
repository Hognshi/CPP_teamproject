#pragma once
#include <iostream>
#include <conio.h>
#include "Class.h"

using namespace std;
void game_help()
{
	system("cls");
	cout<<"\t\t\t\t                       조작키\n"; _getch();
	cout<<"\t\t\t\tㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n"; _getch();
	cout<<"\t\t\t\t숙직실\n"; _getch();
	cout<<"\t\t\t\t방의 다른 쪽을 보고 싶으면 < 또는 >을 입력하면 된다.\n"; _getch();
	cout<<"\t\t\t\t방 안의 물건을 조사하고 싶으면 [   ]의 안쪽에 있는 것을 입력하면 된다.\n"; _getch();
	cout<<"\t\t\t\t예시) [침대1]을 조사하고 싶으면 침대1 이라고 입력하면된다.\n"; _getch();
	cout<<"\t\t\t\t예시) [탄생의_꽃]을 조사하고 싶으면 탄생의_꽃 이라고 입력하면 된다.\n"; _getch();
	cout<<"\t\t\t\t대사를 넘길 때는 아무 키를 입력해도 상관없다.\n"; _getch();
	cout<<"\t\t\t\t아이템은 자동 사용이 된다.\n"; _getch();
	cout<<"\t\t\t\t자물쇠 비밀번호 입력 창 같은 특정한 장면에서 벗어나고 싶다면 뒤로 를 입력하면 된다.\n"; _getch();
	cout<<"\t\t\t\t사무실\n"; _getch();
	cout<<"\t\t\t\t사무실에는 방의 다른 쪽을 보기 위해 <를 이용하여 왔다갔다하는 방식이 아니다.\n"; _getch();
	cout<<"\t\t\t\t기본적으로 방을 위에서 바라본 모습으로 화면에 뜬다.\n"; _getch();
	cout<<"\t\t\t\t나머지는 숙직실과 동일하다.\n"; _getch();
	cout<<"\t\t\t\t가지고 있는 특정 아이템은 엔딩에 영향을 미칠 수 있다.\n"; _getch();
	
}

void startScene(NightDutyRoom d, string &input)
{
	System system;

	cout<<"■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
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
		cout << "■";
	}
	cout << "\n\n";
	cout << "1) Start To P?ay\n2) How To P?ay";
	cout << "\n\n";
	for (int j = 0; j < 70; j++)
	{
		cout << "■";
	}

	system.ItemShow();
	cout << "\n입력"; cin >> input;

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
// 아이템 유무 판단
void System :: Item()
{
	for (int i = 0; i < 6; i++)
	{
		itemList[i] = " ";
	}
	if (flowerVase)
	{
		itemList[0] = "[꽃병] ";
	}
	if (birdcage)
	{
		itemList[1] = "[새장]팻말 ";
	}
	if (flowerGround)
	{
		itemList[2] = "[꽃밭]팻말 ";
	}
	if (butterfly)
	{
		itemList[3] = "[나비]팻말 ";
	}
	if (map)
	{
		itemList[4] = "구조도 ";
	}
	if (docx)
	{
		itemList[5] = "회의 자료 ";
	}
}

// 인벤토리 출력
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

//숙직실 방 출력
void NightDutyRoom::RoomShow()
{
	system("cls");
	cout << "                                                                                                                                            \n";
	cout << "                                                                                                                                            \n";
	cout << "                                                                                                                                            \n";
	cout << "                                                                                                                                            \n";
	cout << "                           [창문]                                                                                                           \n";
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
	cout << "                                                                          [침대]                                                            \n";
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

// 숙직실 
void NightDutyRoom::FlowerChestShow()
{
	system("cls");
	cout << "                                                                                                                                            \n";
	cout << "                                                                     i.                                                                     \n";
	cout << "                                                                   BBQBQ7.                                                                  \n";
	cout << "                                                               .MZJB   SBBBB                                                                \n";
	cout << "                                                              .QY   IIg    BE                                                               \n";
	cout << "                                                              BB : 2B7B.  5B:                                                               \n";
	cout << "                                                              .QBS  iv    Bs              [꽃]                                              \n";
	cout << "                                                                BZ::UBXjJBB                                                                 \n";
	cout << "                                                                 qgS7BgrLi                                                                  \n";
	cout << "                                                                   v7BBPi                                                                   \n";
	cout << "                                                                 :B5:.:7BQi                                                                 \n";
	cout << "                                                                 B5  .   qB                                                                 \n";
	cout << "                                                                BB ...... BD                                                                \n";
	cout << "                                                                Bd ..:.:. QB                                                                \n";
	cout << "                                                                BI .:.:.. BB            [꽃병]                                              \n";
	cout << "                                                                BB ..:... BQ                                                                \n";
	cout << "                                                                :B7 .... :B:                                                                \n";
	cout << "                                                                 iQ1    .BP                                                                 \n";
	cout << "                                                                  2QBBBBBB:                                                                 \n";
	cout << "                BBMBBBQQQQRQQQRQQQRQQQQQQQQQRQQQQQQQRQRQRQRQRQRQMgX25qKK2IbMRQRQMQRQRQRQQQQQQQRQQQRQRQQQRQQQQQQQQQQQQQQQQBQQBB              \n";
	cout << "                BB                                                                                                          iQ              \n";
	cout << "                QB  .BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBQBBBBBQBBBBBBBBBBBQBBBBBQBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBB5  rB              \n";
	cout << "                BB  :B7                                                                                                 BB  7B              \n";
	cout << "                QB  .B.                                             ii                                                  BB  7B              \n";
	cout << "                BB  .B:                                            7BBY                 [서랍1]                         BB  vB              \n";
	cout << "                QB  .B.                                                                                                 BB  7B              \n";
	cout << "                BB  .Br                                                                                                 BQ  7B              \n";
	cout << "                QB ..QRQBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBQBBBBBBBBBBBBBBBBBBBBBQBBBQQQS  7B              \n";
	cout << "                BB  .                                                                                                       7B              \n";
	cout << "                QB  7BPKqbPbPPPbPPPPPPPPqPPPPbPbPbqPqbqbPPqPPPPPPPKK12XPPPPbPbqPPbPPPbPPPbPPPPPPqPqPqPPPPPPbPPPbPdPbPPXSBd  7B              \n";
	cout << "                BQ  7B                                                                                                  BE  vB              \n";
	cout << "                QB  rB                                             YBB.                 [서랍2]                         BE  7B              \n";
	cout << "                BB  rQ                                              Xu                                                  Bd  vB              \n";
	cout << "                QB  rB                                                                                                  BD  7B              \n";
	cout << "                BB  rBDPEdZEDEDdZEZEZdDEDdDEDEZEDdZEDdZdDEZEDEDZDEZbdPEdZEZEDZDEZdDdDEDEZEDdDdDEZEDEDEZdZEZEDEZEDEDdDdbKBP  vB              \n";
	cout << "                QB .                                                                                                        7B              \n";
	cout << "                BB  :QBBBBBBBBBBBBBBBBBBBBBBBBBBBQBBBQBQBBBBBBBBBBBQBQBBBBBBBBBBBBBQBQBBBQBBBQBBBBBBBBBBBQBQBBBBBQBQBQBQBr  vB              \n";
	cout << "                QB  vB.                                                                                                 Bg  7B              \n";
	cout << "                BB  7B                                             :BB                                                  Bb  7B              \n";
	cout << "                QB  rB                                             iBB                  [서랍3]                         BE  7B              \n";
	cout << "                BB  7B                                                                                                  Bb  7Q              \n";
	cout << "                QB  rB.                                                                                                 Bg  7B              \n";
	cout << "                BB  :BBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBBBQBBBv  7B              \n";
	cout << "                QB                                                                                                          rB              \n";
	cout << "                QBBBBBBQBBBBBQBQBBBBBBBBBBBBBBBBBBBQBBBBBBBBBBBQBBBBBQBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBQBQBBBBBQBQBBBB              \n";
	cout << "                                                                                                                                           \n";

}

//숙직실 액자 금고 벽면 출력
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
	cout <<"                  [금고]                            BBBQBBBBBBBBBBBBBBBBBBBQBBBBBBBBBQBQBQBBBBBBBQBBBQBBBBBQBBBBBBBQBBBBBBBBBBBBBBQ         \n";
	cout <<"                                                                                                                                            \n";
	cout <<"       BBBBBBQBQBQBQQQQQBQBQBBBQBQBBQ                                                                                                       \n";
	cout <<"       Bv                          BQ                                                    [액자]                                             \n";
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

//숙직실 입력 체크
void NightDutyRoom::CheckInput(string &input)
{
	if (input == "1")
	{
		for (int i = 0; i < 9; i++)
		{
			system("cls");
			RoomShow(); for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n으음… 내가 잠들었었나..?\n";
			}
			else if (i == 1)
			{
				cout << "\n여긴… 아, 숙직실이네.\n";
			}
			else if (i == 2)
			{
				cout << "\n!!\n";
			}
			else if (i == 3)
			{
				cout << "\n오늘 아침에 회의 있었는데, 늦겠다!\n";
			}
			else if (i == 4)
			{
				cout << "\n망했네. 회의 문서 사무실에 있는데.\n";
			}
			else if (i == 5)
			{
				cout << "\n빨리 가야겠다.\n";
			}
			else if (i == 6)
			{
				cout << "\n(철컥철컥)\n";
			}
			else if (i == 7)
			{
				cout << "\n아니 문이 왜 안 열려?\n";
			}
			else if (i == 8)
			{
				cout << "\n일단 주변을 둘러보자.\n";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n";
			ItemShow();
			if (i == 8)
				cin >> input;
			else
				_getch();
		}
	}
	else if (input == "침대")
	{
		for (int i = 0; i < 1; i++)
		{
			system("cls");
			RoomShow();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n방금 내가 자고 일어났던 침대. 매트리스가 푹신하다.\n";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n";
			ItemShow();
			cin >> input;
		}
	}
	else if (input == "창문")
	{
		for (int i = 0; i < 1; i++)
		{
			system("cls");
			RoomShow();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "창문에는 단단하게 막혀있다.";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n";
			ItemShow();
			cin >> input;
		}
	}
	else if (input == "꽃병")
	{
		for (int i = 0; i < 4; i++)
		{
			system("cls");
			FlowerChestShow();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "물이 가득 채워진 유리 꽃병이다.";
			}
			else if (i == 1)
			{
				cout << "꽃 한 송이가 꽃병에 꽂혀 있다";
			}
			else if (i == 2)
			{
				cout << "1) 살핀다\n2) 가져간다";
			}
			else if (i == 3)
			{
				if (input == "1")
				{
					cout << "꽃은 흰 장미이다.\n꽃말은 새로운 시작.";
				}
				else if (input == "2")
				{
					cout << "[꽃병] 획득";
					flowerVase = true;
				}
			}
			
			cout << "\n\n";

			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "서랍1" || input == "서랍2")
	{
		for (int i = 0; i < 1; i++)
		{
			system("cls");
			FlowerChestShow();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			
			if (i == 0)
			{
				cout << "서랍이 비어있다.";
			}

			cout << "\n\n";

			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}

			cout << "\n";
			ItemShow();

			cin >> input;

		}
	}
	else if (input == "서랍3")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			FlowerChestShow();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";

			if (i == 0)
			{
				cout << "!달그락!";
			}
			else if (i == 1)
			{
				cout << "[꽃밭]팻말을 얻었다";
				flowerGround = true;
			}

			cout << "\n\n";

			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "액자")
	{
		for (int i = 0; i < 3; i++)
		{
			system("cls"); 
			SafeDraw();

			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "(3 / 3)이라 쓰여져 있다.";
			}
			if (i == 1)
			{
				cout << "1) 살핀다:\n2) 구조도를 가져간다\n3) [꽃병] 던진다)";
			}
			if (i == 2)
			{
				if (input == "1")
				{
					cout << "구조도를 살펴보았을 때, 회의 자료를 챙기려면 사무실을 통해서 가야 할 것 같다.";
				}
				else if (input == "2")
				{
					cout << "구조도 획득";
					map = true;
				}
				else if (input == "3")
				{
					if (!flowerVase)
					{
						cout << "던질만한게 없어";
					}
					else
					{
						cout << "액자를 향해 꽃병을 던졌더니, 사방에 유리 파편이 튄다.\n물에 젖은 그림이 찢어지고 허물어져 흘러내리자 그 안에 있던 팻말이 떨어진다";
						birdcage = true;
						flowerVase = false;
					}
				}
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n";
			ItemShow();
			if(i == 1 || i == 2)
				cin >> input;
			else
				_getch();
		}
	}
	else if (input == "금고")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			SafeDraw();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0 && !butterfly)
			{
				cout << "(1 / 3)이라 쓰여져 있다.";
			}
			else if (i == 1 && !butterfly)
			{
				cout << "<다이아 스페이드 하트>";
			}
			else if (i == 1 && butterfly)
			{
				cout << "\n금고는 비어있어.\n";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
					cout << "■";
				}
				cout << "\n\n\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "■";
				}

				ItemShow();
				cin >> input;
			}
		}
	}
	else if (input == "문")
	{
		for (int i = 0; i < 1; i++)
		{
			system("cls");
			Door();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "(";
				if(!butterfly)
					cout << "?";
				else
					cout << "[나비]팻말";

				cout << ")" << "는" << "("; 
				
				if (!flowerGround)
					cout << "?";
				else
					cout << "[꽃밭]팻말";

				cout << ")" << "이 아니라("; 
				
				if (!birdcage)
					cout << "?";
				else
					cout << "[새장]팻말";
					cout << ")" << " 으로 돌아가야 한다";
			}
			cout << "\n\n";
			if (butterfly && flowerGround && birdcage)
			{
				cout << "\n문이 열렸다.\n";
				Escape = true;
			}
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n";
			ItemShow();
			if (butterfly && flowerGround && birdcage)
				_getch();
			else
				cin >> input;
		}
	}
	else if (input == ">") // 오른쪽
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
					cout << "■";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "■";
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
					cout << "■";
				}
				cout << "\n\n";
				cout << "\n\n";

				for (int j = 0; j < 70; j++)
				{
					cout << "■";
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
					cout << "■";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "■";
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
					cout << "■";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "■";
				}
				cout << "\n";
				ItemShow();
				cin >> input;
			}
		}
	}
	else if (input == "<") // 왼쪽
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
					cout << "■";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "■";
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
					cout << "■";
				}
				cout << "\n\n";
				cout << "\n\n";

				for (int j = 0; j < 70; j++)
				{
					cout << "■";
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
					cout << "■";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "■";
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
					cout << "■";
				}
				cout << "\n\n";
				cout << "\n\n";
				for (int j = 0; j < 70; j++)
				{
					cout << "■";
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
			cout << "■";
		}
		cout << "\n\n<다이아 스페이드 하트>\n";

		for (int i = 0; i < 3; i++)
		{
			if (answer[i] == 0)
			{
				cout << "(      ) ";
			}
			else if (answer[i] == 1)
			{
				if (i % 2 != 0)
					cout << "(스페이드) ";
				else
					cout << "(다이아) ";
			}
			else if (answer[i] == 2)
			{
				if (i % 2 != 0)
					cout << "(클로버)   ";
				else
					cout << "(하트)   ";
			}
		}

		cout << "\n\n";
		cout << "[바꾸기1] [바꾸기2] [바꾸기3]";

		cout << "\n\n";
		for (int j = 0; j < 70; j++)
		{
			cout << "■";
		}

		cout << "\n\n";

		cin >> button;

		if (button == "바꾸기1")
			answer[0] = (answer[0] + 1) % 3;
		else if (button == "바꾸기2")
			answer[1] = (answer[1] + 1) % 3;
		else if (button == "바꾸기3")
			answer[2] = (answer[2] + 1) % 3;

		if (answer[0] == 1 && answer[1] == 1 && answer[2] == 2)
		{
			butterfly = true;
			system("cls");
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n[나비]팻말을 얻었다.\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	cout<<"     BBq.    BB    [책장]      B  2         B          Br 5         B          B v         B          Br j         B          B2        i   \n";
	cout << "     B.:BQ.  BB                B5 [서랍6] B          Br 5 [서랍7] B          B 7 [서랍8] B          Br Y [서랍9] B          BU     :12Q2  \n";
	cout<<"BPr  B.  :B  MB                B  K         B          Br K         B          B L         B          B7 U         B          QX   7P1. :K  \n";
	cout<<" :XMIB.   Q  MBs2qKPXPXqXPKPXX5S  BS55XSS2sEB          Br BgddEdZP5bB          B vJU2S55JMBB          Br BbPZDRRQDBB          BS   B    .E  \n";
	cout<<"    .BQKr B  QB                             B  [책상6] Br           B  [책상7] B          .B  [책상8] B7           B  [책상9] BX   Q    .B  \n";
	cout<<" [  B  vEB  BB                             B          B7           B          B          iB          Br          .B          BU   B  :YI7  \n";
	cout<<"r.   B    B  QB                             B          Br          .B          B          :B          Br           B          B2   EXv:    i\n";
	cout<<"SgQu.B    B  gB                             B          B7          .B          B          iB          B7          .B          BJ       rKMZu\n";
	cout<<"   iqBZi  B. XBI7vYvv7v7777rri:BL           QBQBQBBBBBRBi          .BRdgDgZgZZPB          :BRQBBQBQBQQBr          .BbPPdPPPbX2Bi  :YdgdY:   \n";
	cout<<"      .IMgB. PB                B7                                                                                              BRK57.       \n";
	cout<<"          i  PB     [책상1]     B7                                                                                              BB           \n";
	cout<<"             dB                B7                                                                                              BB           \n";
	cout<<"             dBRQQRgDg         Bv                                                                                              BB           \n";
	cout<<"             RB      B         Bv                                                                                              BB [회의실문] \n";
	cout<<"             gB      B         BY                                                                                              BB           \n";
	cout<<"             gQ      B         BL                                                                                              BQ           \n";
	cout<<"             ZB      B.jBgQMQRMBY                                                                                              BBuu7:.      \n";
	cout<<"             gg      B.        B7                                                                                              B  :L2dgMdXLi\n";
	cout<<"       iPBD  EB      B:        Qv           qdEggMgMDDbP            7ju52S5S22Jv            IXPPEdEddqq2            i7YLsYJsuv7B.       .:7u\n";
	cout<<"   vZBBBSsB  ZB      B: [서랍1] B7         rB          B7          .B          BX          rB          B7          .B          BJ           \n";
	cout<<"BBBBQB    B  PB      B:        B7          iB          Br          .B          BU          :B          B7          .B          QU           \n";
	cout<<"7.   B    B  EB      BBsu2U211vBv          :B          Br           B          B2          :B          Br           B          Bu           \n";
	cout<<"  ] B  :PB  PB                            :B          Br           B          BU          .B          Q7           B          B2           \n";
	cout<<"    :BEBBuB  bB                            7B  [책상2] Br           B  [책상3] B1          vB  [책상4] Br           Q  [책상5] BU           \n";
	cout<<" .qBBB:   B  PB BBBBBBBBBB        rBKdEDZZKBB          Br jBgQMQRMdRB          Br iBZDMgMDbQB          Br PREDMggEPDB          BI           \n";
	cout<<"BB1 :B    B. PQ B  [쓰레 B        7         B          Br P         B          Br r         Q          Br B         B          B2           \n";
	cout<<"    iB  .KB  qB B  기통] B        i [서랍2] B          Br J [서랍3] B          Bi : [서랍4] B          Br B [서랍5] B          B5           \n";
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
	if (input == "문")
	{
		for (int i = 0; i < 5; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n어쩌다가 늦잠을 자버려서 뭔 고생이냐.\n";
			}
			else if (i == 1)
			{
				cout << "\n역시 다 회의실로 갔나 보네. 빨리 회의 문서나 가지고 가야겠다.\n";
			}
			else if (i == 2)
			{
				cout << "\n근데 어디에 자료를 뒀더라?\n";
			}
			else if (i == 3)
			{
				cout << "\n생각해보니 회의실이 어디인지도 모르네?\n";
			}
			else if (i == 4)
			{
				cout << "\n일단 찾아보자.\n";
			}
			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "책상1")
	{
		for (int i = 0; i < 4; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n양동현 부장님 자리다.\n";
			}
			if (i == 1)
			{
				cout << "\n[컴퓨터]\n노트북에는 잠금이 걸려있다.\n";
			}
			if (i == 2)
			{
				cout << "\n비밀번호 힌트가 써져있다.\nㅇ6= ㄷ26 ㅎ=ㄴ\n";
			}
			if (i == 3)
			{
				cout << "\n(비밀번호를 입력하세요.)\n";
				if (input == "양동현")
				{
					cout << "\n[메신저]\n양동현 : 회의는 g421에서 진행합니다. \n";
					unLockNoteBook = true;
				}
				else
				{
					cout << "\n잘못된 비밀번호야\n";
				}
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "책상2")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n예유별 과장님 자리다.\n";
			}
			if (i == 1)
			{
				cout << "\n수선화가 아주 예쁘게 피어 있다.\n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "책상3")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n나은희 대리님 자리다.\n";
			}
			if (i == 1)
			{
				cout << "\n진달래가 아직까지도 잘 살아있다. \n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "책상4")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n동희나 사원님 자리다.\n";
			}
			if (i == 1)
			{
				cout << "\n유채꽃이 시들어가고 있다. \n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "책상5")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n도동나 인턴 자리다.\n";
			}
			if (i == 1)
			{
				cout << "\n사프란이 아름답게 피어 있다.  \n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "책상6")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n홍동윤 차장님 자리다.\n";
			}
			if (i == 1)
			{
				cout << "\n빨간 튤립의 꽃잎이 모두 떨어졌다.  \n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "책상7")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n현도윤 주임님 자리다.\n";
			}
			if (i == 1)
			{
				cout << "\n라벤더가 있던 흔적만 남아있다.  \n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "책상8")
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n유예별 사원님 자리다.\n";
			}
			if (i == 1)
			{
				cout << "\n주황 카네이션이 예쁘게 피어 있다.\n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "책상9")
	{
		for (int i = 0; i < 3; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n윤은현 인턴 자리다.\n";
			}
			if (i == 1)
			{
				cout << "\n물망초가 화사하게 피어 있다. \n";
			}
			if (i == 2)
			{
				cout << "[서랍]\n자물쇠가 걸려있다\n밑에는 메모가 적혀있다.\n꽃을 돌보지 못한 사람을 주시하라.\nEX) :  1278, 3478, 24678";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n!철컥!\n";
			}
			if (i == 1)
			{
				cout << "\n자물쇠를 열었다.\n";
			}
			if (i == 2)
			{
				cout << "회의 자료를 얻었다.";
				meetingDocx = true;
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "회의실문" && meetingDocx && unLockNoteBook)
	{
		isEnd = true;
		system("cls");
		cout << "회의 자료도 챙겼으니 얼른 회의실로 가야겠다!"; _getch();
		exit(0);
	}
	else if (input == "회의실문" && !meetingDocx && unLockNoteBook)
	{
		isEnd = true;
		system("cls");
		cout << "아 회의 자료가 안 보이네.. 우선 회의실로 먼저 가야겠다.."; _getch();
		exit(0);
	}
	else if (input == "회의실문" && !meetingDocx && !unLockNoteBook)
	{
		for (int i = 0; i < 2; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n회의실이 어디지?\n";
			}
			if (i == 1)
			{
				cout << "\n멍하니 있을 시간이 없다. 몸을 움직여! 지고쿠! 지고쿠!\n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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
	else if (input == "서랍1" || input == "서랍2" || input == "서랍3" || input == "서랍4" || input == "서랍5" || input == "서랍6" || input == "서랍7" || input == "서랍8")
	{
		for (int i = 0; i < 1; i++)
		{
			system("cls");
			OfficeRoom();
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
			}
			cout << "\n\n";
			if (i == 0)
			{
				cout << "\n타인의 서랍을 여는건 부도덕적인 행위야\n";
			}

			cout << "\n\n";
			for (int j = 0; j < 70; j++)
			{
				cout << "■";
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