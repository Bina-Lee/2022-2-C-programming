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
//�迭�� ������
//int arr[2][4] == int (*parr)[4]
//int�� ������ �ε� [4]�� ���� <-�̶�� ���̶�� ��
//arr[] == (*arr)
//�Ű������� ����� ��(ex)�Լ�����)�ÿ��� ��밡��
//[][4]==(*pnt)[4]
//���� ������ ���� �ȵ�

//�������� sizeof�� ������ ���� ���ΰ�

#endif
