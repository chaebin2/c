#include <stdio.h>
#include <stdlib.h> // rand() 함수가 포함된 라이브러리
#include <time.h> 
int main(void) {
	int answer, guess, chances, difficulty, range;
	srand(time(NULL));

	printf("난이도를 설정하세요.\n");
	printf("1. 하(1~100)\n");
	printf("2. 중(1~1000)\n");
	printf("3. 상(1~10000)\n");
	
	printf("난이도를 입력하세요.(1/2/3): ");
	scanf_s("%d", &difficulty);

	switch (difficulty)
	{
	case 1:
		chances = 8;
		range = 100;
		break;
	case 2:
		chances = 10;
		range = 1000;
		break;
	case 3:
		chances = 12;
		range = 10000;
		break;
	}

	answer = rand() % range + 1;
	printf("1부터 %d까지 숫자를 맞춰보세요(총 기회: %d번): ", range, chances);

	while (chances > 0) {
		printf("숫자를 입력하세요: ");
		scanf_s("%d", &guess);
		chances--;
		if (answer == guess) {
			printf("정답입니다!\n 게임을 종료합니다.");
			break;
		}
		else if (answer < guess) {
			printf("정답은 입력하신 값보다 작습니다.(남은 기회: %d번)\n", chances);
		}
		else {
			printf("정답은 입력하신 값보다 큽니다.(남은 기회: %d번)\n", chances);
		}
		if (chances == 0) {
			printf("기회를 모두 사용했습니다. 실패입니다. 정답은 %d였습니다.\n", answer);
		}
	}
	printf("게임을 종료합니다.");
	return 0;
}

