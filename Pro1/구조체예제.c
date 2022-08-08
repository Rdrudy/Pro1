//#include <stdio.h>
//
//struct Student {
//	char name[10]; // 이름
//	int kor;
//	int eng;
//	int math;
//	int avg;
//};
//
//int main() {
//
//	struct Student stu[5];
//
//	scanf_s("%s", stu[0].name, 10);
//	scanf_s("%d %d %d", &stu[0].kor, &stu[0].eng, &stu[0].math);
//
//	//구조체는 앞에서부터 순서대로 값이 들어감!!
//	struct Student stu1 = { "john"};
//	struct Student stu2 = { "kelly" };
//	struct Student stu3 = { "jerry" };
//	struct Student stu4 = { "tom" };
//	struct Student stu5 = { "sam" };// 문자열은 큰따옴표!!!!
//
//	printf("john의 국영수 점수 차례대로 입력해주세요\n");
//	scanf_s("%d", &stu1.kor);
//	scanf_s("%d", &stu1.eng);
//	scanf_s("%d", &stu1.math);
//	stu1.avg = (stu1.kor + stu1.eng + stu1.math) / 3;
//
//	printf("kelly의 국영수 점수 차례대로 입력해주세요\n");
//	scanf_s("%d", &stu2.kor);
//	scanf_s("%d", &stu2.eng);
//	scanf_s("%d", &stu2.math);
//	stu2.avg = (stu2.kor + stu2.eng + stu2.math) / 3;
//
//	printf("jerry의 국영수 점수 차례대로 입력해주세요\n");
//	scanf_s("%d", &stu3.kor);
//	scanf_s("%d", &stu3.eng);
//	scanf_s("%d", &stu3.math);
//	stu3.avg = (stu3.kor + stu3.eng + stu3.math) / 3;
//
//	printf("tom의 국영수 점수 차례대로 입력해주세요\n");
//	scanf_s("%d", &stu4.kor);
//	scanf_s("%d", &stu4.eng);
//	scanf_s("%d", &stu4.math);
//	stu4.avg = (stu4.kor + stu4.eng + stu4.math) / 3;
//
//	printf("sam의 국영수 점수 차례대로 입력해주세요\n");
//	scanf_s("%d", &stu5.kor);
//	scanf_s("%d", &stu5.eng);
//	scanf_s("%d", &stu5.math);
//	stu5.avg = (stu5.kor + stu5.eng + stu5.math) / 3;
//
//	int check[] = { stu1.avg, stu2.avg, stu3.avg, stu4.avg, stu5.avg };
//	int max = check[0];
//
//	for (int i = 1; i < 5; i++) {
//				if (max < check[i]) {
//					max = check[i];
//				}
//			}
//
//	if (max == stu1.avg) { printf("%s의 평균점수가 %d로 제일 높습니다", stu1.name, stu1.avg); }
//	if (max == stu2.avg) { printf("%s의 평균점수가 %d로 제일 높습니다", stu2.name, stu2.avg); }
//	if (max == stu3.avg) { printf("%s의 평균점수가 %d로 제일 높습니다", stu3.name, stu3.avg); }
//	if (max == stu4.avg) { printf("%s의 평균점수가 %d로 제일 높습니다", stu4.name, stu4.avg); }
//	if (max == stu5.avg) { printf("%s의 평균점수가 %d로 제일 높습니다", stu5.name, stu5.avg); }
//
//	return 0;
//}