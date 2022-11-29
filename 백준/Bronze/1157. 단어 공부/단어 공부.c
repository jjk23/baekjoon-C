#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char arr[1000000];
	int alp[26] = { 0 };
	int max = 0;
	int a = 0;
	scanf("%s", &arr);
	for (int i = 0; i < 1000000; i++)
	{
		if (arr[i] < 65 || arr[i]>122)
		{
			break;
		}
		else
		{
			if (arr[i] < 91)
			{
				alp[arr[i] - 65] += 1;
			}
			else
			{
				alp[arr[i] - 97] += 1;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (alp[i] > max)
		{
			max = alp[i];
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (alp[i] == max)
		{
			a += 1;
		}
	}
	if (a > 1)
	{
		printf("?");
	}
	else
	{
		for (int i = 0; i < 26; i++)
		{
			if (alp[i] == max)
			{
				printf("%c", i + 65);
			}
		}
	}
	return 0;
}