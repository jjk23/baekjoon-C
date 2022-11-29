#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char arr[1000000];
	int n = 0;
	scanf("%[^\n]s", arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == ' ')
		{
			n += 1;
		}
	}
	if (arr[0] == ' ' && arr[strlen(arr) - 1] == ' ')
	{
		printf("%d", n-1);
	}
	else if (arr[0] == ' '||arr[strlen(arr)-1]==' ')
	{
		printf("%d", n);
	}
	else
	{
		printf("%d", n+1);
	}
	return 0;
}