#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0
int main() {
	char a, b;
	int i, j;
	char x[5];
	int k = 0;

}
#endif

#if 0
int main() {
	char a[12] = "I am a boy";

	printf("%d\n", &a[10]);
	printf("%d\n", a);

	printf("%d\n", a);
	printf("%d\n", &a[2]);
}
#endif

#if 1
main() {
	unsigned char *a = "I am a boy";
	unsigned char *b = "I am a boy";
	unsigned char *c = "I am a boy";



	//printf("(%s), (%s), (%s)", a, b, c);
	printf("%d %d %d", a, b, c);
	//printf("%d", b - c);
	//printf("%d", *);
}
#endif



#if 0
#include <stdio.h>

#include <string.h>

#include <assert.h>



char* MyReverse(char*);

int main() {



	unsigned char c, array[20];



	assert(!strcmp(MyReverse(strcpy(array, "I am a boy")), "yob a ma I"));

	assert(!strcmp(MyReverse(strcpy(array, "I am a girl")), "lrig a ma I"));

	assert(!strcmp(MyReverse(strcpy(array, "ABCdefgHIJ")), "JIHgfedCBA"));



	gets(array); // scanf("%s", array);

	printf("Before : %s\n", array);

	printf("After : %s\n", MyReverse(array));

}





char* MyReverse(char* p) {

	// �Ʒ� �ڵ�� �Է¹��� ���ڿ��� �����°�. ������ �־��� 4�� �̿ܿ� �߰� ��� ����

	// p�� p[20] �迭�� �Ȱ��� ����ϸ� ��. p[2], p[5] �� ���� ��밡��.



	int ta, tb;

	unsigned char c;


	for (tb = 0; tb < 20; tb++) {
		if (p[tb] == 0) {
			ta = tb;
			break;
		}
	}
	//ta = strlen(p);
	for (tb = 0; tb < ta/2; tb++) {
		c = p[tb];
		p[tb] = p[ta - tb - 1];
		p[ta - tb - 1] = c;
	}
	

	// Todo , ���� ������ �ϴ� �κ�, �Լ���� �ȵ�



	return p;



}
#endif

#if 0
int main() {
	unsigned int i;
	scanf("%d", &i);
	printf("(1)\n");
	printf("2������ ����մϴ�\n");
	for (int a = 31; a >= 0; a--) {
		if (i >> a & 0x01)printf("1");
		else printf("0");
		if (a % 4 == 0)printf(" ");
	}
	printf("\n");
	printf("16������ ����մϴ�\n");
	printf("%08x\n\n", i);

	printf("(2)\n");
	i = i << 4;
	printf("4�� shift�� ���� 16������ ����մϴ�\n");
	printf("%08x\n\n", i);

	printf("(3)\n");
	unsigned int i3 = i >> 16;
	i3 = ~i3;
	i3 = i3 << 16;
	unsigned int i4 = i << 16;
	i4 = i4 >> 24;
	i = i3 + i4;
	for (int a = 31; a >= 0; a--) {
		if (i >> a & 0x01)printf("1");
		else printf("0");
		if (a % 4 == 0)printf(" ");
	}
}
//1,2������ ���((1)2����, (1)16���� / (2)���)
//i==7 : 1 0001,11 / 110
//i==257 : 1 0000 0001, 101 / 1010
//i==65537 : 1 0000 0000 0000 0001, 10001 / 100010
#endif
