#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	char  c, t;
	float x, y;
	int i;
	printf("������� ����� ��� �����: ");
	scanf("%c", &t);
	switch ((t >= 'a' && t <= 'z'))
	{
	case 1:
		printf("������� �����.\n");
	}
	switch (t >= '1' && t <= '9')
	{
	case 1:
		printf("������� �����.\n");
	}

	printf("��� ������: ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("���������: %g", x+y);
		break;
	case '-':
		printf("���������: %g", x-y);
		break;
	case '/':
		printf("���������: %g", x/y);
		break;
	case '*':
		printf("���������: %g", x*y);
		break;
	case '^':
		printf("���������: %g", pow(x,y));
		break;
	}
	
	puts("\n������� ����� �� 1 �� 12");
	printf("���� �����:");
	scanf("%d", &i);
	switch (i) 
	{
	case 1:
		printf("� ������� ����: I");
		break;
	case 2:
		printf("� ������� ����: II");
		break;
	case 3:
		printf("� ������� ����: III");
		break;
	case 4:
		printf("� ������� ����: IV");
		break;
	case 5:
		printf("� ������� ����: V");
		break;
	case 6:
		printf("� ������� ����: VI");
		break;
	case 7:
		printf("� ������� ����: VII");
		break;
	case 8:
		printf("� ������� ����: VIII");
		break;
	case 9:
		printf("� ������� ����: IX");
		break;
	case 10:
		printf("� ������� ����: X");
		break;
	case 11:
		printf("� ������� ����: XI");
		break;
	case 12:
		printf("� ������� ����: XII");
		break;
	default: printf("������� ������ �� 1 �� 12!");
	}
}