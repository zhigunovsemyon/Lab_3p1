//Задание 3.*1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a; //Добавляем переменную
	printf("a = "); scanf("%d", &a); //Вводим значение а

	//Решение
	a = a * a;
	a = a * a;

	printf("a в степени 4 равно %d", a); //Вывод полученного значение
	
	return 0;
}
