//#include <stdio.h>
//
///*
//	포인터의 주역 : &, * 
//
//	*의 역할
//	1) 포인터 변수를 선언하는 자료형을 뜻함
//	2) 포인터가 가리키는 = 주소를 찾아가서 
//	변수 안에 있는 값에 접근
//	
//	
//*/
//int main() {
//
//	int num = 5; // 정수를 담을 수 있는 변수 num
//	printf("%d\n", num);
//	printf("%p\n", &num); // %p : 포인터 출력 자리
//	// &num : num 변수의 주소
//
//	int* a = &num; // 주소를 담을 수 있는 변수	
//	printf("%p\n", a);
//	printf("%d\n", *a);
//
//	double n = 6.0; // 실수를 담을 수 있는 변수 n
//	printf("%f\n", n);
//
//
//	return 0;
//}