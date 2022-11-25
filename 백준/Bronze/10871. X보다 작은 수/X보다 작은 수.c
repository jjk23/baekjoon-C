#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int x;
	scanf("%d", &x);
	int n[10000];
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < a; i++)
	{
		if (n[i] < x)
		{
			printf("%d ", n[i]);
		}
	}
    return 0;
}