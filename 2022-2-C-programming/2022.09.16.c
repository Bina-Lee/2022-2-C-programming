#define _CRT_SECURE_NO_WARNINGS
#if 0
#include <stdio.h>

void printModifiedData(unsigned int _a, int _N) {

    // 이 부분을 작성하라 ==========================


    for (int i = 0; i < _N * 2; i++) {
        _a = _a / 16;
    }
    for (int i = 0; i < _N * 2; i++) {
        _a = _a * 16;
    }
    printf("%8X", _a);


    // =============================================
}

int main()
{
    unsigned int a = 0X12345678; //예시
    int N = 0;

    scanf("%X", &a); // 16진수 형태의 숫자 입력
    scanf("%d", &N); // 1~4의 숫자

    printModifiedData(a, N);

    return 0;
}
#endif

#if 1
#include <stdio.h>

void printMBTI(unsigned char _data) {
    for (int i = 0; i < 4; i++) {
        int integ = 2 ^ (3 - i);
        unsigned char compare = (unsigned char) integ;
        if (_data & compare) {
            switch (i) {
            case 0:printf("I"); break;
            case 1:printf("N"); break;
            case 2:printf("F"); break;
            case 3:printf("P"); break;
            }
        }
        else {
            switch (i) {
            case 0:printf("E"); break;
            case 1:printf("S"); break;
            case 2:printf("T"); break;
            case 3:printf("J"); break;
            }
        }
    }
}

int main()
{

    int input;
    unsigned char data;

    scanf("%d", &input);
    data = (unsigned char)input;

    printMBTI(data);

    return 0;

}
#endif
