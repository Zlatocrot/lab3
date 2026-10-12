#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


void task1()
{
	int num, num2;
	puts("Введите число:");
	scanf_s("%d", &num);
	printf("Введено число %d\n", num);
	puts("Введите второе число");
	scanf_s("%d", &num2);
	printf("Введено число %d\n", num2);
	printf("Сумма: %d\n", num2 + num);
	printf("Разность (второе - первое): %d\n", num2 - num);
	printf("Произведение: %d\n", num2 * num);
	printf("Частное (второе / первое): %d\n", num2 / num);
	printf("Остаток от деления (второе % первое): %d\n", num2 % num);
}


void task2()
{
	#define     D      2.54
	#define     I     2.32
	#define     S     3.90
	int dym;
	float result;
	puts("Введите значение:");
	scanf_s("%d", &dym);
	result = D * dym;
	printf(" % d дюймов – это %.2f см\n ", dym, result);
	printf(" % d испанских дюймов – это %.2f см\n", dym, I * dym);
	printf(" % d старолитовских дюймов – это %.2f см\n ", dym, S * dym);
}


void task3()
{
	float a, b;
	puts("Введите числа a и b:");
	scanf_s("%f %f", &a, &b);
	puts("_____________________");
	printf("| a * b | a+b | a-b |\n");
	puts("---------------------");
	printf("| %.5f * %.5f | %.5f+%.5f |%.5f- %.5f |\n", a, b, a, b, a, b);
	puts("---------------------");
	printf("| %-5.5f| %-4.5f| %-5.5f|\n", a * b, a + b, a - b);
}


void taskdz_15()
{
	#define LY_TO_AU 63241.077084
	double light_years;
	double astronomical_units;
	printf("\n Вариант 15 \n");
	printf("Пересчет световых лет в астрономические единицы\n\n");
	printf("Введите количество световых лет: ");
	if (scanf("%lf", &light_years) != 1 || light_years < 0)
	{ 
		printf("Ошибка: введено некорректное или отрицательное число!\n");
		return;
	}
	astronomical_units = light_years * LY_TO_AU;
	printf("\n Результат: \n");
	printf("%.4f св. лет = %.2f а.е. (астрономических единиц)\n", light_years, astronomical_units);
}


int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    task1();
    task2();
    task3();
    taskdz_15();

    system("pause");

    return 0;
}