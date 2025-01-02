#include <stdio.h>
#include <stdlib.h> // rand() �Լ��� ���Ե� ���̺귯��
#include <time.h> 
int main(void) {
	int answer, guess, chances, difficulty, range;
	srand(time(NULL));

	printf("���̵��� �����ϼ���.\n");
	printf("1. ��(1~100)\n");
	printf("2. ��(1~1000)\n");
	printf("3. ��(1~10000)\n");
	
	printf("���̵��� �Է��ϼ���.(1/2/3): ");
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
	printf("1���� %d���� ���ڸ� ���纸����(�� ��ȸ: %d��): ", range, chances);

	while (chances > 0) {
		printf("���ڸ� �Է��ϼ���: ");
		scanf_s("%d", &guess);
		chances--;
		if (answer == guess) {
			printf("�����Դϴ�!\n ������ �����մϴ�.");
			break;
		}
		else if (answer < guess) {
			printf("������ �Է��Ͻ� ������ �۽��ϴ�.(���� ��ȸ: %d��)\n", chances);
		}
		else {
			printf("������ �Է��Ͻ� ������ Ů�ϴ�.(���� ��ȸ: %d��)\n", chances);
		}
		if (chances == 0) {
			printf("��ȸ�� ��� ����߽��ϴ�. �����Դϴ�. ������ %d�����ϴ�.\n", answer);
		}
	}
	printf("������ �����մϴ�.");
	return 0;
}

