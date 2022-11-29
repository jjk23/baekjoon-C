#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	//64를빼면 A->1. 1은 2초. 2는 3초...
	char arr[15];
	int t = 0;
	scanf("%s", &arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] < 68)
		{
			t += 3;
		}
		else if(arr[i]<71)
		{
			t += 4;
		}
		else if (arr[i] < 74)
		{
			t += 5;
		}
		else if (arr[i] < 77)
		{
			t += 6;
		}
		else if (arr[i] < 80)
		{
			t += 7;
		}
		else if (arr[i] < 84)
		{
			t += 8;
		}
		else if (arr[i] < 87)
		{
			t += 9;
		}
		else if (arr[i] < 91)
		{
			t += 10;
		}
	}
	printf("%d", t);
	return 0;
}