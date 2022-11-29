#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char n1[3], n2[3];
	char a;
	int b=0, c=0;
	scanf("%s %s", &n1[0], &n2[0]);
	a = n1[0];
	n1[0] = n1[2];
	n1[2] = a;

	a = n2[0];
	n2[0] = n2[2];
	n2[2] = a;


	b += (n1[0] - 48) * 100;
	b += (n1[1] - 48) * 10;
	b += n1[2]-48;

	c += (n2[0] - 48) * 100;
	c += (n2[1] - 48) * 10;
	c += n2[2] - 48;

	if (b > c)
	{
		printf("%d", b);
	}
	else
	{
		printf("%d", c);
	}
	return 0;
}