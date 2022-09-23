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

	// 아래 코드는 입력받은 문자열을 뒤집는것. 변수는 주어진 4개 이외에 추가 사용 못함

	// p는 p[20] 배열과 똑같이 사용하면 됨. p[2], p[5] 와 같이 사용가능.



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
	

	// Todo , 직접 만들어야 하는 부분, 함수사용 안됨



	return p;



}
#endif

#if 0
int main() {
	unsigned int i;
	scanf("%d", &i);
	printf("(1)\n");
	printf("2진수로 출력합니다\n");
	for (int a = 31; a >= 0; a--) {
		if (i >> a & 0x01)printf("1");
		else printf("0");
		if (a % 4 == 0)printf(" ");
	}
	printf("\n");
	printf("16진수로 출력합니다\n");
	printf("%08x\n\n", i);

	printf("(2)\n");
	i = i << 4;
	printf("4번 shift한 값을 16진수로 출력합니다\n");
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
//1,2번문제 답안((1)2진수, (1)16진수 / (2)답안)
//i==7 : 1 0001,11 / 110
//i==257 : 1 0000 0001, 101 / 1010
//i==65537 : 1 0000 0000 0000 0001, 10001 / 100010
#endif
