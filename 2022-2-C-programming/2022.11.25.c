#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 1
#pragma pack(n)
//n=1,2,4,8 //1,2,4,8����Ʈ ������
#endif

#if 1
//(*p).i==p->i
#endif

#if 1
//����ü �ڱ� ����
struct list {
	struct list* next; //�ּ��̱⋚���� ���� ����
//���� ��ũ�� ����Ʈ �˻��غ���
};
#endif

#if 1
//��Ʈ�ʵ屸��ü
struct structname {
	data_beat_val1: 1;//beat size
	data_beat_val2: 3;//�ִ��� 7�̱⶧���� �����÷ο� �Ǽ� ������ ����
};
//��Ʈ�ʵ�� �׳� ����ü�� ���� ���� ����
//�̸� �Ҵ� ���� ��Ʈ�ʵ�� �Ҵ� �Ұ� �׳� �е�����
struct structhmm {
	unsigned 1beat: 1;
	unsigned char asdf: 3;

};
//��Ʈ����� 0�� �ָ� ���ο� ������� ������
#endif
