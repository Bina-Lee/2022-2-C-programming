#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0
int main() {
	char c1;
	char c2 = 'a';
	char c3 = "a";
	char c4 = "abcd";
	//printf("%c\n", c1);
	printf("%c\n", c2);
	printf("%c\n", c3);
	printf("%c\n", c4);
	//////////////////////////
	char c1 = 1, c2 = 'a';
	char c3 = "a", * c4 = "abcd";
	char* c5 = "ABCD", c6 = 1;

	c1 = "a";
	c4[4] = 1;
	c5[1] = 'X';
	//위에 둘은 포인터로 선언하면서 값을 때려넣어서 상수처리
	//값을 수정할 수 없기 때문에 값을 넣을 수 없음
	//에러

	//char배열 선언 및 사이즈 보다 많이 값을 집어넣으면
	//통과시킬지는 컴파일러 마음대로
	//갯수가 많다고 안된다고 해도 맞을듯

	char arr[];//ntd : not to determinant
	//->warning
	
	char c18[5] = "abcdef";//출력해볼 것



}
#endif

#if 0
//포인터의 초기화
int main() {
	char* cp3 = { 'a','b','c','d','e' };//불가
	char* cp4 = "";//NULL 0으로 초기화
	char* cp5 = '';//사용안함
	//으어 여기서부터 이 파트 끝날때까지 졸았다..
	//strlen 설명 시작할 때 정신차림 ㅋㅋ 하..;
}
#endif

#if 0
int strlen(char* arr) {
	int len = 0;
	while (*(arr + len) != 0) len++;
	//while (*arr++ != 0) len++;
	return len;
}
int strlen(char* arr) {
	char* str1 = arr;
	while (*str1 != 0) str1++;
	return (str1 - arr);
}
#endif

//같은 방식으로 strcpy도 구현해볼 것

//strcat strstr
#if 1
void strcpy(char* arr2, char* arr1) {
	while (*arr1 != 0) {
		*arr2 = *arr1;
		arr1++;
		arr2++;
	}
	*arr2 = 0;
}
int main() {
	char str1[100] = "asdf";
	char str2[100] = "dlrpahsh";
	strcpy(str2, str1);
	printf("%s", str2);
}
#endif

#if 1
void strcat(char* arr1, char* arr2) {
	while (*arr1 != 0)arr1++;
	while (*arr2 != 0) {
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	*arr1 = 0;
}

int main() {
	char str1[100] = "asdf";
	char str2[100] = "dlrpahsh";
	strcat(str1, str2);
	printf("%s", str1);
}
#endif

#if 1
char* strstr(char* arr1, char* arr2) {
	while (*arr1++ != 0) {
		while (*arr1 == *arr2) {
			char* checkpnt1 = arr1;
			char* checkpnt2 = arr2;
			int check = 1;
			while (*checkpnt2 != 0) {
				check = 1;
				if (*checkpnt1 != *checkpnt2) {
					check = 0;
					break;
				}
				checkpnt1++;
				checkpnt2++;
			}
			if (check == 1)return arr1;
		}
	}
	return 0;
}
int main() {
	char str1[100] = "sentense what the ****";
	char str2[100] = "what";
	printf("%s", strstr(str1, str2));
}
#endif
