#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	int h, w, n;	
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a = 0, b = 1;
		scanf("%d %d %d", &h, &w, &n);
		for (int j = 0; j < n; j++)
		{
			if (a == h)
			{
				a = 1;
				b += 1;
			}
			else
			{
				a += 1;
			}
		}
		if (b < 10)
		{
			printf("%d0%d\n", a, b);
		}
		else
		{
			printf("%d%d\n", a, b);
		}
	}
	
	return 0;
}