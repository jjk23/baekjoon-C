#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n[9];
	int max=1;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &n[i]);
		if (n[i] > max)
		{
			max = n[i];
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (max == n[i])
		{
			printf("%d\n%d", max, i+1);
		}
	}
    return 0;
}