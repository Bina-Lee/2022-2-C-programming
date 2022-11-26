#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 1
#pragma pack(n)
//n=1,2,4,8 //1,2,4,8바이트 단위로
#endif

#if 1
//(*p).i==p->i
#endif

#if 1
//구조체 자기 참조
struct list {
	struct list* next; //주소이기떄문에 선언 가능
//더블 링크드 리스트 검색해볼것
};
#endif

#if 1
//비트필드구조체
struct structname {
	data_beat_val1: 1;//beat size
	data_beat_val2: 3;//최댓값이 7이기때문에 오버플로우 되서 오버시 저장
};
//비트필드랑 그냥 구조체랑 섞어 쓸수 있음
//이름 할당 안한 비트필드는 할당 불가 그냥 패딩역할
struct structhmm {
	unsigned 1beat: 1;
	unsigned char asdf: 3;

};
//비트사이즈를 0을 주면 새로운 사이즈에서 시작함
#endif
