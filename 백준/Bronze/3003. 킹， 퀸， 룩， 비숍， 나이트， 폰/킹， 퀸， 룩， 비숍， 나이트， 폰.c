#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	int a[6];
	int b[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i <= 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i <= 5; i++)
	{
		printf("%d ", b[i] - a[i]);
	}
}