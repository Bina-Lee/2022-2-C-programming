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
	char hangul[3] = "��";
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
		printf("�ѱ�");
	}
	else printf("����");
	
}
#endif

//������ �Է¹޾Ƽ� ����� �ѱ��� ���ڼ��� ī��Ʈ �ϴ� �ڵ�
#if 0
int main() {
	unsigned char check[100];
	gets(check);
	unsigned int count_k = 0, count_e = 0;
	for (int i = 0; i < 100; i++) {
		if (check[i] > 128) {
			//printf("�ѱ�");
			count_k++;
		}
		else if ((check[i] > 'a' && check[i] < 'z') || (check[i]>'A' && check[i] < 'Z')) {
			//printf("����");
			count_e++;
		}
		else if (check[i] == 0)break;
	}
	printf("�ѱ��� %d��, ����� %d��", count_k/2, count_e);
}
#endif

//1234567�� �Է� �޾Ƽ� ABCDEFG�� ����ϴ� ���α׷�
#if 0
int main() {
	int a;
	scanf("%d", &a);
	printf("%c", a - 1 + 'A');
}
#endif

//�������� �𸣰ڴµ� �̷��� ��µǴ°� ������ �Ͻ� ��...
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
