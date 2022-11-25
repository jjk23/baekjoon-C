#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	double a, b;
	scanf("%d %d", &a, &b);
	printf("%.9lf", a/b);
	return 0;
}