#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char arr[20];
	int t;
	int r[1000] = { 0 };
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %s", &r[i], arr);
		for (int k = 0; k < strlen(arr); k++)
		{
			for (int j = 0; j < r[i]; j++)
			{
				printf("%c", arr[k]);
			}
		}
		printf("\n");
	}
	return 0;
}
