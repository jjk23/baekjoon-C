#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	int t = 1;
	v -= a;
	if (v <= 0)
	{
		printf("%d", t);
	}
	else
	{
		if (v % (a - b) == 0)
		{
			t += v / (a - b);
		}
		else
		{
			t += v / (a - b);
			t += 1;
		}
		printf("%d", t);
	}
	
	return 0;
}