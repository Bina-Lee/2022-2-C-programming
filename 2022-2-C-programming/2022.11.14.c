#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

}

//오늘하는게 헷갈린다고요??
#if 0
int i = 100;
int* p = &i;
int** q = &p;
#endif

#if 1
//함수 내에서 static 선언시
//변수 유지 및 외부 함수에서는 엑세스 불가
#endif

#if 1
void func(char* q) {
	static char* str1 = "string";
	q = str1;
	//을 하면 main함수에서 string을 출력하면 좋겠으나
	//주소의 복사본을 넘겨주기 때문에 값이 바뀌지않음
	//결론적으로 string을 출력하지 않음
}
int main() {
	char* s;
	func(s);
	printf("%s", s);
}
//str1의 주소가 넘어와야됨
//할려면 s 자체의 주소를 넘겨줘야됨
#endif

#if 1
void func(char** q) {
	static char* str1 = "string";
	*q = str1;
}
int main() {
	char* s;
	func(&s);
	printf("%s", s);
}
//예...대충 이따구로 이중포인터를 넘겨주면 되는 듯 함...
//그렇취
#endif

#if 1
// void 포인터라는 *같이 생긴게 있는데
// 주소는 주소가 맞는데 그 포인터 변수의 형식이 정해지지 않았을 때
// void* a 와 같이 사용함
// 아직 해당 주소의 자료형이 정해지지 않았을 때 사용함
// 오우 이게 뭐고
// free를 알아서 잘 해주면
// 되게 유용하게 사용할 수 있을 듯 함
#endif

#if 1
//포인터 배열
int* pa[5] = { &a, &b, &c, &d, &e };
//이따구로 쓸 수 있음
//요소로 주소를 넣어주면 됨

//malloc과 달리 내부 값의 옆자리에 접근가능
//하지만 엑세스 위반이므로 지양할 것
#endif

#if 1
//문자열 배열
char* fruits[] = {
	"apple",
	"banana",
	"asdf"
};
//이런 식으로 저장이 가능하다
//이 경우 주소만 가짐
//안의 데이터는 상관없..
//데이터는 텍스트영역으로 가며

//string은 입력 불가능
//다면 fruits[][]으로 데이터영역까지 가면
//수정가능
//수정이 안된다고요?
//추후 확인 필요
#endif

