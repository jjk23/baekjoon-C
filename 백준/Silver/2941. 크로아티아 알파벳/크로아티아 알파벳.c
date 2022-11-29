#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char arr[100];
	scanf("%s", &arr);
	int n = 0;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == 'c')
		{
			if (arr[i + 1] == '=' || arr[i + 1] == '-')
			{
				i += 1;
			}
		}
		if (arr[i] == 'd')
		{
			if (arr[i + 1] == 'z' && arr[i + 2] == '=' )
			{
				i += 2;
			}
			else if (arr[i + 1] == '-')
			{
				i += 1;
			}
		}
		if (arr[i] == 'l' && arr[i + 1] == 'j')
		{
			i += 1;
		}
		if (arr[i] == 'n' && arr[i + 1] == 'j')
		{
			i += 1;
		}
		if (arr[i] == 's' && arr[i + 1] == '=')
		{
			i += 1;
		}
		if (arr[i] == 'z' && arr[i + 1] == '=')
		{
			i += 1;
		}
		n += 1;
	}
	printf("%d", n);
	return 0;
}