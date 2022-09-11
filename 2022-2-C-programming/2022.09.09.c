#include<stdio.h>

#if 0
int main() {
	for (int i = 1; i < 9; i++) {
		for (int j = 2; j < 7; j++) {
			printf("%2d * %2d = %2d\t", j, i, i * j);
		}
		printf("\n");
	}
}
#endif

//for(1 ; 2 ; 3 ; 4) // 4번은 루프 한번 돌때마다 실행 할 것

//F10 실행 후 '조사식1'탭에서 '감시할 항목' 추가, 'i,j'등등 추가하고 주소값의 관계 확인

//여러개의 변수와 배열변수의 차이

#if 0
int main() {
	char a, b, c, d;
	int i, j, k;
	char e, f, g;
	int l;
	char h;
	int m;
	char x[7];

	m = 0;
}
#endif

//vs는 모든 변수를 12바이트씩 떼어놓고 만듦
//배열로 만들면 sizeof만큼만 떨어져 있음

#if 0

int i, j;
char a, b;
char array1[7];

int main() {
	char c, d;
	int x, y;
	char array2[7];
	int m;
	m = 0;
}
#endif

//전역 변수와 지역변수의 주소 공간은 완전히 구분
//주소 할당하는 방법이 다름


//주소를 더해줄 떄는 자료형의 용량만큼을 더해주게 됨
//ex) int값의 주소에서 1을 더하면 4만큼의 뒤의 주소를 짚어준다

#if 0

int i;
char a;
char arr1[3];

int main() {
	char c = 5;
	int x = 258;
	char arr2[3];


	x = c;
	//&i, &i+1, &a, &a+1, &a-1, &x, &x+1, &x-1 확인
}
#endif

#if 0
int main() {
	int a = 258;
	char b;
	b = a;
	printf("%d", b);
}
//오버플로우로 2가 출력됨
#endif

