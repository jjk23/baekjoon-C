#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	int a;
	int n1,n2,N1,N2,n=1;
	scanf("%d", &a);
	n1 = a / 10;
	n2 = a % 10;//불변값
	a = n1 + n2;
	N1 = n2;
	N2 = a % 10;
	while (1)
	{
		if (n1 == N1 && n2 == N2)
		{
			break;
		}
		a = N1 + N2;
		N1 = N2;
		N2 = a % 10;
		n++;
	}
	printf("%d", n);
    return 0;
}