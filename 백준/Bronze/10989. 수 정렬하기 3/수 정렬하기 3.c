#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	int n;
	int num[10001] = { 0, };
	int k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		num[k - 1] += 1;
	}
	for (int i = 0; i < 10000; i++)
	{
		while (num[i] != 0)
		{
			printf("%d\n", i + 1);
			num[i] -= 1;
		}
	}
	return 0;
}