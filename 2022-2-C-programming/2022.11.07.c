//다차원배열
//복합포인터
//구조체포인터
//함수

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {

}

//const 배열 원본의 변경 금지
//본문에서는 호출되는 함수의 입력인자로 const를 사용함

//주소문자열은 텍스트영역에 있기 때문에 값 변경 불가능

//int **ppi

//함수에서 인자 받을 떄
//int **ppi 쓰지말고
//int ppi[][size]로 받아야 컴퓨터가 계산할 수 있음

//char pointer로 선언하고 초기화 완료된 문자열에
//scan값을 넣으면 넣을 공간이 없음
//주소에는 int하나만 어쩌구 저쩌구 이게 뭔 소린지 알다가도 모르겠고
//암튼 수정이 불가능...한...가?
//포인터를 배열인것처럼 해주면 수정이 가능하다는데?
//그걸 어케하냐하면 그게 동적할당이더라
//int *arr_name = (int*) malloc ( sizeof( int ) *size_num )
//쓰고나면 free꼭 해줘야됨 물론 다시 듣는거긴하지만

//2차원 동적할당
//int **pn = (int**) malloc ( sizeof( int ) * raw * col )
//^이거 아님 ㅋㅋ
//대충 내가 아는 그거 쓰면 되는데 배열과 달리 붙어있지는 않기 때문에
//포인터 계산시 주의

//int **pn=(int**)malloc(sizeof(int*)*size)
//for(int i=0;i<size;i++)pn[i]=(int*)malloc(sizeof(int)*size)

//동적할당시 기존 텍스트영역 문자열의 위치는 분실, 못찾음
