#include<stdio.h>
int main()
{
	double base;
	double height;
	double area;
	int level;
	printf("Enter integer : ");
	scanf_s("%d", &level);
	for (int row = 0; row <= level; row++)
	{
		for (int star = 0; star <= row; star++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int row = 0; row < level; row++)
	{
		for (int star = level - row; star > 0; star--)
		{
			printf("* ");
		}
		printf("\n");
	}
	base = 2 * level + 1;
	height = level;
	area = 1.0 / 2 * base * height;
	printf("base : %0.2lf \nheight : %0.2lf \narea : %0.2lf",base,height,area);
	return 0;
}