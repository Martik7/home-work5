#include <stdio.h>
#include <iostream>
#include <locale.h>

void task1()
{
	int S1, S2;

	printf("Введите результаты первого пятиборца: ");
	scanf_s("%d", &S1);
	printf("Введите результаты второго пятиборца: ");
	scanf_s("%d", &S2);

	for (size_t i = 1; i <= 5; i++)
	{
		S1 = S1 + i;
		S2 = S2 + i;
	}
	printf("Сумма первого пятиборца: %d\n", S1);
	printf("Сумма первого пятиборца: %d\n", S2);

}

int main()
{
	setlocale(LC_ALL, "");

	int task = 0;
	int restart = 0;
	do
	{
		printf("Введите номер задания: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		default:
			break;
		}

		printf("\n----------------------\n");
		printf("Вы хотите продолжить?1/0\n");
		scanf_s("%d", &restart);

	} while (restart == 1);

	system("pause");
}