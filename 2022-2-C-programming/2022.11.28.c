#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 1
int main() {

}
#endif

#if 1
//공용체
//최대사이즈를 가져감
//낮은번지부터 채움
#endif

#if 1
//union안에 struct로 비트필드를 만들면 비트단위로 쉽게 엑세스 가능
#endif

#if 1
//함수포인터
//선언 : 형식 (*함수포인터이름)(매개변수...)
//포인터이름 = 함수이름; 하면 적용됨
#endif

#if 1
//함수 포인터의 배열
//int (*func[5])(int,int);
#endif

//그러면 포인터접근으로 어떤 함수를 사용할건지 가능한가?

//void 포인터
//사용할때마다 캐스팅을 해줘야됨
//*(*int)voidpointer = value;

#if 1
int main(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++)printf("%d %s", i, argv[i]);
}
#endif


//이진탐색
//생년월일을 받아서 만 몇살인지 출력
//char* 변수 한개(배열첫자) 이외에 변수 하나만 정의하여 strlen구현