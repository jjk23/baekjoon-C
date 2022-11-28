#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n[10];
	int d[10];
	int cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
		d[i] = n[i] % 42;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i!=j&&d[i]==d[j]&&d[j]>=0)
			{
				d[j] = -1;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (d[i] >= 0)
		{
			cnt += 1;
		}
	}
	printf("%d", cnt);
    return 0;
}