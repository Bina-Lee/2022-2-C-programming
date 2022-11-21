#define _CRT_SECURE_NNO_WARNINGS
#include<stdio.h>

#if 0
int main() {
	char p2[101], * p3, * p4[5], i = 0; j = 0;

	scanf_s("%s",p2, 100);
	printf("%s\n", p2);

	p3 = p2;
	p4[j++] = p3;

	while (*p3) {
		if (*p3=='x') {
			*p3 = 0;
			p4[j++] = p3 + 1;
		}
		p3++;
	}
	for (i = 0; i < j; i++) {
		printf("%s\n", p4[i]);
	}
}
#endif

//scanf_s

#if 1
//배열의 포인터
//int arr[2][4] == int (*parr)[4]
//int의 포인터 인데 [4]를 가짐 <-이라는 뜻이라고 함
//arr[] == (*arr)
//매개변수로 사용할 때(ex)함수선언)시에만 사용가능
//[][4]==(*pnt)[4]
//변수 선언할 때는 안됨

//포인터의 sizeof는 무엇을 묻는 것인가

#endif
