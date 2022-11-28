#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//printf("%d", d(100));
	int arr[10000] = {0,};
	for (int i = 0; i < 10000; i++)
	{
		if (d(i + 1) > 9999)
		{
			break;
		}	
		arr[d(i+1)] = 1;
	}
	for (int i = 1; i < 9994; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d\n", i);
		}
	}
    return 0;
}
int d(int n)
{
	int a = n;//임시저장
	int s = n;
	s += a / 1000;
	a = a % 1000;
	s += a / 100;
	a = a % 100;
	s += a / 10;
	a = a % 10;
	s += a;
	return s;
}