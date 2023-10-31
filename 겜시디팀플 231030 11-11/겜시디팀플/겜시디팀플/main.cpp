#include "DxLib.h"
#include <windows.h>
#include <process.h>
#include <stdlib.h>
#include <time.h>
//**필독
//프로젝트 빌드 방법
//1. 프로젝트 속성에 들어가서 C/C++ > 일반 > 추가 포함 디렉터리를 
//   프로젝트 폴더 내 include경로 넣어주기. ex)C:\Users\윤예나\겜시디팀플\include
//2. 프로젝트 속성에서 링커 > 일반 > 추가 라이브러리 디렉터리를 1번과 같은 경로를 넣어주기
//3. 2번까지 했을 때 안될 경우 프로젝트명 바꿔보기. 현재 본인도 한 번 와우로 고침ㅋㅋ
//4. 3번까지 했을 때 안될 경우 솔루션 플랫폼을 x86으로 바꾸고 프로젝트 속성에서 플랫폼을 Win32로 바꾸기.
//5. 4번까지 했을 때 프로젝트 속성에서 구성 속성 > 고급 > 문자 집합을 멀티바이트 문자 집합 사용을 바꾸기.
//

// 전체적인 자료
// https://m.blog.naver.com/noksek0615
// https://dixq.net/g/

// 메뉴 구성 자료
// https://dixq.net/forum/viewtopic.php?t=15533

// 함수 관련 자료
// https://dxlib.xsrv.jp/dxfunc.html

typedef enum { // 유니티로 치면 일종의 scene
    START, //시작
    MAIN, // 메인 메뉴
    GAME, // 게임 화면
    EXIT, // 게임 종료
    CLEAR
};

int change = START;

#define startimage LoadGraph("image/boot01.png") // 이미지 선언

void GameStart() { //시작화면

    ClearDrawScreen();

    int bgm1 = LoadSoundMem("sound/MP_숲 속 드라이브.mp3");

    DrawGraph(0, 0, startimage, 1);

    PlaySoundMem(bgm1, DX_PLAYTYPE_LOOP);

    while (1) {
        if (CheckHitKeyAll()) {
            StopSoundMem(bgm1);
            DxLib_End(); //반복문 탈출 시 게임 종료
            break;
        }
    }
}
void GameMain() { //시작화면

}
// 프로그램은 WinMain에서 시작
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    ChangeWindowMode(true); //전체화면 설정
    if (DxLib_Init() == -1) return -1; //첫 시작할 때 검사
    SetGraphMode(1920, 1080, 32); //32비트로 1920 X 1080

    while (1) {

        switch (change) {
        case START: // 만약 START라면 (첫 실행 포함)
            GameStart(); // 담당 함수 실행
            break;
        case MAIN: // 만약 MAIN이라면
            GameMain(); // 담당 함수 실행
            break;
        }

        if (change == EXIT) break; //만약 EXIT 상태를 받으면 반복문 탈출 그렇지 않다면 반복
    }

    return 0;
}