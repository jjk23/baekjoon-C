#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char arr[100];
	int a[26];
	for (int i = 0; i < 26; i++)
	{
		a[i] = -1;
	}
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		for (int j = 97; j < 123; j++)//알파벳 확인
		{
			if (arr[i] == j)
			{
				a[j - 97] = i;
				for (int k = 0; k < strlen(arr); k++)
				{
					if (arr[k] == j)
					{
						arr[k] = 'A';
					}
				}
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}