#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	int n;
	scanf("%d", &n);
	int a[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int b,cnt=0;
	scanf("%d", &b);
	for (int i=0;i<n;i++)
	{
		if (b == a[i])
		{
			cnt += 1;
		}
	}
	printf("%d", cnt);
    return 0;
}