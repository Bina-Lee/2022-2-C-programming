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
	//���� ���� �����ͷ� �����ϸ鼭 ���� �����־ ���ó��
	//���� ������ �� ���� ������ ���� ���� �� ����
	//����

	//char�迭 ���� �� ������ ���� ���� ���� ���������
	//�����ų���� �����Ϸ� �������
	//������ ���ٰ� �ȵȴٰ� �ص� ������

	char arr[];//ntd : not to determinant
	//->warning
	
	char c18[5] = "abcdef";//����غ� ��



}
#endif

#if 0
//�������� �ʱ�ȭ
int main() {
	char* cp3 = { 'a','b','c','d','e' };//�Ұ�
	char* cp4 = "";//NULL 0���� �ʱ�ȭ
	char* cp5 = '';//������
	//���� ���⼭���� �� ��Ʈ ���������� ���Ҵ�..
	//strlen ���� ������ �� �������� ���� ��..;
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

//���� ������� strcpy�� �����غ� ��

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
