#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n",(a+b)%c);
	printf("%d\n", ((a % c)+(b%c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", ((a % c)*(b%c))% c);
}