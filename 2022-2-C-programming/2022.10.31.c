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

#if 1
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

strcat strstr