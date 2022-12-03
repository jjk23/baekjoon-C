#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	//0층의 1호는 1명 2호는 2명...14호는 14명
	//1층의 1호는 1명 2호는 3명 3호는 1+2+3=6명 4호는 1+2+3+4=10명..
	//2층의 1호는 1명 2호는 1+3=4명 3호는 1+3+6=10명..
	int arr[15][14] = {0,};
	for (int i = 0; i < 14; i++)
	{
		arr[0][i] = i + 1;
	}
	for (int i = 1; i < 15; i++)//층수
	{
		for (int j = 0; j < 14; j++)//호수-1
		{
			for (int l = 0; l <= j; l++)
			{
				arr[i][j] += arr[i-1][l];
			}
		}
	}
	int t;
	scanf("%d", &t);
	int k, n;
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", arr[k][n - 1]);
	}
	return 0;
}