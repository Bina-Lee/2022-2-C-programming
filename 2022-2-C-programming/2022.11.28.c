#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0
int main() {

}
#endif

#if 1
//����ü
//�ִ����� ������
//������������ ä��
#endif

#if 1
//union�ȿ� struct�� ��Ʈ�ʵ带 ����� ��Ʈ������ ���� ������ ����
#endif

#if 1
//�Լ�������
//���� : ���� (*�Լ��������̸�)(�Ű�����...)
//�������̸� = �Լ��̸�; �ϸ� �����
#endif

#if 1
//�Լ� �������� �迭
//int (*func[5])(int,int);
#endif

//�׷��� �������������� � �Լ��� ����Ұ��� �����Ѱ�?

//void ������
//����Ҷ����� ĳ������ ����ߵ�
//*(*int)voidpointer = value;

#if 0
int main(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++)printf("%d %s", i, argv[i]);
}
#endif


//����Ž��
#if 1
int main() {
	int data[100];
	for (int i = 0; i < 100; i++)data[i] = i + 100;
	int minindex = 0;
	int maxindex = 99;
	int index = (maxindex + minindex) / 2;
	int finddata = 186;
	while (data[index] != finddata) {
		if (data[index] < finddata)minindex = index;
		else if (data[index] > finddata)maxindex = index;
		index = (minindex + maxindex) / 2;
	}
	printf("%d", index);
}
#endif
//��������� �޾Ƽ� �� ������� ���
#if 0
int main() {
	int birth;
	scanf("%d", &birth);
	int year, month, day;
	year = birth / 10000;
	month = birth / 100;
	month = month % 100;
	day = birth % 100;
	int age = 0;
	if (month < 11) { age = 2022 - year; printf("%d", age); return 0;; }
	else if (month == 12) { age = 2021 - year; printf("%d", age); return 0; }
	else {
		if (day <= 28) { age = 2022 - year; printf("%d", age); return 0; }
		else { age = 2021 - year; printf("%d", age); return 0; }
	}
}
#endif
//char* ���� �Ѱ�(�迭ù��) �̿ܿ� ���� �ϳ��� �����Ͽ� strlen����
#if 0
int main() {
	char str[100];
	scanf("%s", str);
	int i = 0;
	while (str[i] != 0)i++;
	printf("%d", i);
}
#endif
