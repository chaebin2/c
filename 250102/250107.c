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
	printf("���̴�: %d", strlen(str1));

	strcpy(str3, str1); // str 3�� str1�� ������ ����
	strncpy(str3, str1, n); // n���� ���ڸ�ŭ ī��
	strcat(str1, str2); //concatenation�� ����. ���ڿ��� ������ �� ���
	strncat(str1, str2, n); //������ ������ ���ڸ�ŭ�� ����

	strcmp(str1, str2); //comparation�� ����. �� ���ڿ��� ���ؼ� ������ 1, �ƴϸ� 0
	*/

	// �޸� ����
	// 1. code ����
	// 2. data ����
	// 3. stack ����
	// 4. heap ����(�޸�)

	// code �޸�
	// �����ڰ� �ۼ��� �ڵ带 �����ϴ� ����

	// data �޸�
	// ��������, static ����...

	// stack �޸�
	// ������ ���ؼ� �Ҵ�Ǵ� ����
	// int age = 24; ���� �������� ������ �� ����Ѵ�.

	// heap �޸�
	// ���α׷��� ����Ǵ� �߿�
	// �����ڰ� �޸� ������ �Ҵ��ϰ�, �Ҹ��ϰ�...
	// �̷� �������� ������ �� ����մϴ�.

	/*int age = 24; // stack �޸𸮿� age��� ������ ����
	age++; // stack �޸� ��, age ���� ���� 1 ����
	printf("%d", age);// stack�� �ϳ� �߰�, age�� ���
	age++; // stack �޸� �� age���� ���� 1 ����*/

	// ���� ���� ������
	/*int age = 23;
	int isAdult = (age > 20)? 1 : 0;
	printf("%d", isAdult);*/

	// ����
	// ����(����) ���� ex) int main{} �ȿ� ����� ���� age (������ ����)
	// ���� ���� ex) length(���� �÷����� ����) (������ ��ü)

	// ������ ���
	/*for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			int k = i * j;
			printf("%d x %d = %d\n", i, j, k);
		}
		printf("\n");
	}

	// ���� ó�� ���α׷�

	int grades[5][5];
	int students;
	int subjects;
	int sum = 0;
	int max = 0;
	printf("�л� ���� �Է��ϼ���(1~5): ");
	scanf("%d", &students);
	printf("���� ���� �Է��ϼ���(1~5): ");
	scanf("%d", &subjects);
	for (int i = 0; i < students; i++) {
		int k = i + 1;
		printf("�л� %d: ", k);
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
		printf("/ ��� ����: %.2f", avg);
		printf("/ �ְ� ����: %d", max);
		printf("/ ���� ����: %d", min);
		printf("\n");
	}*/

	// ���ڿ� ������(hello world -> dlrow olleh)

	char inputs[50];
	int length = 0;
	printf("���ڿ��� �Է��ϼ���: ");
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


