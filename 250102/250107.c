#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
// int length;

int main(void) {
	srand(time(NULL));

	/*char str1[50] = "apple is delicious";
	char str2[50] = "grape is delicious";
	char str3[50];
	printf("길이는: %d", strlen(str1));

	strcpy(str3, str1); // str 3에 str1의 내용을 복붙
	strncpy(str3, str1, n); // n개의 글자만큼 카피
	strcat(str1, str2); //concatenation의 약자. 문자열을 연결할 때 사용
	strncat(str1, str2, n); //지정한 갯수의 글자만큼만 연결

	strcmp(str1, str2); //comparation의 약자. 두 문자열을 비교해서 같으면 1, 아니면 0
	*/

	// 메모리 구조
	// 1. code 영역
	// 2. data 영역
	// 3. stack 영역
	// 4. heap 영역(메모리)

	// code 메모리
	// 개발자가 작성한 코드를 저장하는 공간

	// data 메모리
	// 전역변수, static 변수...

	// stack 메모리
	// 변수를 위해서 할당되는 공간
	// int age = 24; 같은 변수들을 저장할 때 사용한다.

	// heap 메모리
	// 프로그램이 실행되는 중에
	// 개발자가 메모리 공간을 할당하고, 소멸하고...
	// 이런 변수들을 저장할 때 사용합니다.

	/*int age = 24; // stack 메모리에 age라는 변수가 저장
	age++; // stack 메모리 안, age 변수 값을 1 증가
	printf("%d", age);// stack이 하나 추가, age값 출력
	age++; // stack 메모리 안 age변수 값을 1 증가*/

	// 삼항 조건 연산자
	/*int age = 23;
	int isAdult = (age > 20)? 1 : 0;
	printf("%d", isAdult);*/

	// 변수
	// 지역(로컬) 변수 ex) int main{} 안에 선언된 변수 age (범위가 한정)
	// 전역 변수 ex) length(위에 올려보면 있음) (범위가 전체)

	// 구구단 출력
	/*for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			int k = i * j;
			printf("%d x %d = %d\n", i, j, k);
		}
		printf("\n");
	}

	// 성적 처리 프로그램

	int grades[5][5];
	int students;
	int subjects;
	int sum = 0;
	int max = 0;
	printf("학생 수를 입력하세요(1~5): ");
	scanf("%d", &students);
	printf("과목 수를 입력하세요(1~5): ");
	scanf("%d", &subjects);
	for (int i = 0; i < students; i++) {
		int k = i + 1;
		printf("학생 %d: ", k);
		sum = 0;
		max = grades[i][0];
		int min = 100;
		for (int j = 0; j < subjects; j++) {
			grades[i][j] = rand() % 100 + 1;
			sum += grades[i][j];
			if (max < grades[i][j]) {
				max = grades[i][j];
			}
			if (min > grades[i][j]) {
				min = grades[i][j];
			}
			printf("%d ", grades[i][j]);
		}
		double avg = (double)sum / subjects;
		printf("/ 평균 점수: %.2f", avg);
		printf("/ 최고 점수: %d", max);
		printf("/ 최저 점수: %d", min);
		printf("\n");
	}*/

	// 문자열 뒤집기(hello world -> dlrow olleh)

	char inputs[50];
	int length = 0;
	printf("문자열을 입력하세요: ");
	gets(inputs);
	while (inputs[length] != '\0') {
		// inputs[0], inputs[1], ..., \O
		length++;
	}

	for (int i = 0; i < length / 2; i++) {
		char temp;
		temp = inputs[i];
		inputs[i] = inputs[length - 1 - i];
		inputs[length - 1 - i] = temp;

	}
	printf("%s", inputs);


