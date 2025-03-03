#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int a = 0;  // 초기화 필수

    system("color a");  // 색상 설정은 한 번만

    while (1) {
        gotoxy(0, 0);
        printf("%d", a);

        gotoxy(a, 0);
        printf("simon's rock");

        Sleep(1000);
        a += 1;

        if (a > 30) a = 0;  // 오른쪽 벽을 넘지 않도록 조정

        system("cls");
    }
}
