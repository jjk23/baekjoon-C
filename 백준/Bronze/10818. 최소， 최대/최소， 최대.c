#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	int min = 1000001;
	int max = -1000001;
	scanf("%d", &a);
	int n[1000000];
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &n[i]);
		if (min > n[i])
		{
			min = n[i];
		}
		if (max < n[i])
		{
			max = n[i];
		}
	}
	printf("%d %d", min, max);
    return 0;
}