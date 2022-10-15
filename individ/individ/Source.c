#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int x, y;
	printf("введите координаты:");
	scanf("%d%d",&x,&y);
	if (((x >= -1) && (x <= 2) && (y >= -5) && (y <= 5)) || ((x >= 2) && (x <= 6) && (y >= 2) && (y <= 5)) || ((x >= -5) && (x <= -1) && (y >= -5) && (y <= -2)))
		printf("Точка принадлежит");
	else printf("Точка не принадлежит");
}