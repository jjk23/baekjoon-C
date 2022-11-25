#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	int a, b;
	int c[3];
	int d[3];
	scanf("%d %d", &a, &b);
	c[0] = b % 10;
	b = (b / 10) * 10;
	c[1] = (b % 100)/10;
	c[2] = b / 100;
	d[0] = a * c[0];
	printf("%d\n", a * c[0]);
	d[1] = a * c[1];
	printf("%d\n", a * c[1]);
	d[2] = a * c[2];
	printf("%d\n", a * c[2]);
	printf("%d\n", d[0]+(d[1]*10)+(d[2]*100));
}