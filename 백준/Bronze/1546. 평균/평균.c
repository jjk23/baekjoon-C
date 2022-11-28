#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float n;
	scanf("%f", &n);
	float arr[1000];
	float max = 0;
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%f", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = ((arr[i] / max) * 100);
		sum += arr[i];
	}
	printf("%f", sum / n);
    return 0;
}