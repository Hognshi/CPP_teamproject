#include "DxLib.h"
#include <windows.h>
#include <process.h>
#include <stdlib.h>
#include <time.h>
//**�ʵ�
//������Ʈ ���� ���
//1. ������Ʈ �Ӽ��� ���� C/C++ > �Ϲ� > �߰� ���� ���͸��� 
//   ������Ʈ ���� �� include��� �־��ֱ�. ex)C:\Users\������\�׽õ�����\include
//2. ������Ʈ �Ӽ����� ��Ŀ > �Ϲ� > �߰� ���̺귯�� ���͸��� 1���� ���� ��θ� �־��ֱ�
//3. 2������ ���� �� �ȵ� ��� ������Ʈ�� �ٲ㺸��. ���� ���ε� �� �� �Ϳ�� ��ħ����
//4. 3������ ���� �� �ȵ� ��� �ַ�� �÷����� x86���� �ٲٰ� ������Ʈ �Ӽ����� �÷����� Win32�� �ٲٱ�.
//5. 4������ ���� �� ������Ʈ �Ӽ����� ���� �Ӽ� > ��� > ���� ������ ��Ƽ����Ʈ ���� ���� ����� �ٲٱ�.
//

// ��ü���� �ڷ�
// https://m.blog.naver.com/noksek0615
// https://dixq.net/g/

// �޴� ���� �ڷ�
// https://dixq.net/forum/viewtopic.php?t=15533

// �Լ� ���� �ڷ�
// https://dxlib.xsrv.jp/dxfunc.html

typedef enum { // ����Ƽ�� ġ�� ������ scene
    START, //����
    MAIN, // ���� �޴�
    GAME, // ���� ȭ��
    EXIT, // ���� ����
    CLEAR
};

int change = START;

#define startimage LoadGraph("image/boot01.png") // �̹��� ����

void GameStart() { //����ȭ��

    ClearDrawScreen();

    int bgm1 = LoadSoundMem("sound/MP_�� �� ����̺�.mp3");

    DrawGraph(0, 0, startimage, 1);

    PlaySoundMem(bgm1, DX_PLAYTYPE_LOOP);

    while (1) {
        if (CheckHitKeyAll()) {
            StopSoundMem(bgm1);
            DxLib_End(); //�ݺ��� Ż�� �� ���� ����
            break;
        }
    }
}
void GameMain() { //����ȭ��

}
// ���α׷��� WinMain���� ����
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    ChangeWindowMode(true); //��üȭ�� ����
    if (DxLib_Init() == -1) return -1; //ù ������ �� �˻�
    SetGraphMode(1920, 1080, 32); //32��Ʈ�� 1920 X 1080

    while (1) {

        switch (change) {
        case START: // ���� START��� (ù ���� ����)
            GameStart(); // ��� �Լ� ����
            break;
        case MAIN: // ���� MAIN�̶��
            GameMain(); // ��� �Լ� ����
            break;
        }

        if (change == EXIT) break; //���� EXIT ���¸� ������ �ݺ��� Ż�� �׷��� �ʴٸ� �ݺ�
    }

    return 0;
}