//#include <stdio.h>
//#include <string.h>
//
//// 회문 == 글자가 데칼코마니
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
//		printf("회문입니다");
//	}
//	else {
//		printf("회문이 아닙니다");
//	}
//	
//
//	return 0;
//}