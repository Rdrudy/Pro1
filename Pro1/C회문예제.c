//#include <stdio.h>
//#include <string.h>
//
//// ȸ�� == ���ڰ� ��Į�ڸ���
//// aba
//// abba
//// aabbaa
//// abcba
//
//int main() {
//
//	char arr[7];
//
//	scanf_s("%s", arr, 7);
//
//	int count = 0;
//	int k = strlen(arr);
//
//	for (int i = 0; i < k/2; i++) {
//		if (arr[i] == arr[k - 1 - i]) {
//			count++;
//		}
//	}
//
//	if (count == k / 2) {
//		printf("ȸ���Դϴ�");
//	}
//	else {
//		printf("ȸ���� �ƴմϴ�");
//	}
//	
//
//	return 0;
//}