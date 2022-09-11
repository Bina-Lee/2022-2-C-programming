#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0
int main() {
	unsigned char i, count = 0;
	for (i = 32; i < 127; i++) {
		printf("%c(%3d) ", i, i);
		count++;
		if (count == 6) {
			count = 0;
			printf("\n");
		}
	}
}
#endif

#if 0
int main() {
	unsigned char i, count = 0;
	for (i = 128; i < 255; i++) {
		printf("%c(%3d) ", i, i);
		count++;
		if (count == 6) {
			count = 0;
			printf("\n");
		}
	}
}
#endif

#if 0
int main() {
	unsigned char i, count = 0;
	
	system("chcp 437");

	for (i = 128; i < 255; i++) {
		printf("%c(%3d) ", i, i);
		count++;
		if (count == 6) {
			count = 0;
			printf("\n");
		}
	}
}
#endif

#if 0
int main() {
	char hangul[3] = "가";
	unsigned char code;
	code = hangul[0];
	printf("%x %d\n", code, code);
	code = hangul[1];
	printf("%x %d\n", code, code);
}
#endif

#if 0
int main() {
	unsigned char b1 = 0xb0;
	unsigned char b2 = 0xa1;
	printf("%c%c\n", b1, b2);
}
#endif

#if 0
int main() {
	unsigned char check[3];
	gets(check);
	if (check[0] > 128) {
		printf("한글");
	}
	else printf("영어");
	
}
#endif

//문장을 입력받아서 영어와 한글의 글자수를 카운트 하는 코드
#if 0
int main() {
	unsigned char check[100];
	gets(check);
	unsigned int count_k = 0, count_e = 0;
	for (int i = 0; i < 100; i++) {
		if (check[i] > 128) {
			//printf("한글");
			count_k++;
		}
		else if ((check[i] > 'a' && check[i] < 'z') || (check[i]>'A' && check[i] < 'Z')) {
			//printf("영어");
			count_e++;
		}
		else if (check[i] == 0)break;
	}
	printf("한글은 %d자, 영어는 %d자", count_k/2, count_e);
}
#endif

//1234567을 입력 받아서 ABCDEFG를 출력하는 프로그램
#if 0
int main() {
	int a;
	scanf("%d", &a);
	printf("%c", a - 1 + 'A');
}
#endif

//왜인지는 모르겠는데 이렇게 출력되는걸 만들라고 하심 엄...
#if 1
int main() {
	unsigned char a1 = 0xA1, a2 = 0xE1;
	for (int i = 0; i < 5; i++) printf("%c%c ", a1, a2);
	printf("\n");
	for (int i = 0; i < 2; i++) {
		printf("%c%c ", a1, a2);
		for (int j = 0; j < 3; j++)printf("   ");
		printf("%c%c ", a1, a2);
		printf("\n");
	}
	for (int i = 0; i < 5; i++) printf("%c%c ", a1, a2);
}
#endif
