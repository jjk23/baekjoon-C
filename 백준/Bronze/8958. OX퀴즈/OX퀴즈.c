#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char arr[100] = { 0 };//O,X를 입력하는 문자열
	int a[100] = { 0 };//각 문자열에 해당하는 점수
	int c = 1;//연속하면 증가하고 아니면 1로 초기화되는 점수에 더하는 값
	int n;//반복횟수
	scanf("%d", &n);
	for (int i = 0; i < n; i++)//n번 반복
	{
		scanf("%s", &arr[0]);//문자열에 ox를 입력받음
		for (int j = 0; j < 99; j++)//문자열 읽는 작업
		{
			if (arr[j] == 'O')
			{
				a[i] += c;
				c += 1;
				arr[j] = 0;
			}
			else if (arr[j] == 'X')
			{
				c = 1;
				arr[j] = 0;
			}
			else
			{
				c = 1;
				arr[j] = 0;
			}
		}
		c = 1;
	}
	for (int i = 0; i < n; i++)//점수 출력
	{
		printf("%d\n", a[i]);
	}
	return 0;
}