#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	b = c - b;
	if (b <= 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d", ((a / b) + 1));
	}
	return 0;
}