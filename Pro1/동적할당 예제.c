//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	int n;
//	scanf_s("%d", &n);
//
//	// int arr[n]; �ȵ�
//	// int n = 7; �߾ �ȵ�
//		
//	int* arr = malloc(n * sizeof(int));
//              // �ּҸ� ��ȯ�ϴ� �Լ�	
//	// = int arr[n];
//
//	/*
//		arr[0]	arr[1]	arr[2]	...	arr[n-1]
//		 100	 200	 300		n * 100	
//	*/
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = 100 * (i+1);
//		printf("arr[%d]���� %d�� �ֽ��ϴ�\n", i, arr[i]);
//	}
//
//	free(arr);
//	// printf("%d", arr[0]);
//	// �̻��� ���� ���´�
//	return 0;
//}