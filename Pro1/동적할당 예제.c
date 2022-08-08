//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	int n;
//	scanf_s("%d", &n);
//
//	// int arr[n]; 안됨
//	// int n = 7; 했어도 안됨
//		
//	int* arr = malloc(n * sizeof(int));
//              // 주소를 반환하는 함수	
//	// = int arr[n];
//
//	/*
//		arr[0]	arr[1]	arr[2]	...	arr[n-1]
//		 100	 200	 300		n * 100	
//	*/
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = 100 * (i+1);
//		printf("arr[%d]에는 %d가 있습니다\n", i, arr[i]);
//	}
//
//	free(arr);
//	// printf("%d", arr[0]);
//	// 이상한 값이 나온다
//	return 0;
//}