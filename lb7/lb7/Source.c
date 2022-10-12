#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	char  c, t;
	float x, y;
	int i;
	printf("Введите букву или цифру: ");
	scanf("%c", &t);
	switch ((t >= 'a' && t <= 'z'))
	{
	case 1:
		printf("Введена буква.\n");
	}
	switch (t >= '1' && t <= '9')
	{
	case 1:
		printf("Введена цифра.\n");
	}

	printf("Ваш пример: ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("Результат: %g", x+y);
		break;
	case '-':
		printf("Результат: %g", x-y);
		break;
	case '/':
		printf("Результат: %g", x/y);
		break;
	case '*':
		printf("Результат: %g", x*y);
		break;
	case '^':
		printf("Результат: %g", pow(x,y));
		break;
	}
	
	puts("\nВведите цифру от 1 до 12");
	printf("Ваша цифра:");
	scanf("%d", &i);
	switch (i) 
	{
	case 1:
		printf("В римском виде: I");
		break;
	case 2:
		printf("В римском виде: II");
		break;
	case 3:
		printf("В римском виде: III");
		break;
	case 4:
		printf("В римском виде: IV");
		break;
	case 5:
		printf("В римском виде: V");
		break;
	case 6:
		printf("В римском виде: VI");
		break;
	case 7:
		printf("В римском виде: VII");
		break;
	case 8:
		printf("В римском виде: VIII");
		break;
	case 9:
		printf("В римском виде: IX");
		break;
	case 10:
		printf("В римском виде: X");
		break;
	case 11:
		printf("В римском виде: XI");
		break;
	case 12:
		printf("В римском виде: XII");
		break;
	default: printf("Сказано ввести от 1 до 12!");
	}
}