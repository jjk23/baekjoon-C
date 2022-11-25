#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	int a, b;
	while (scanf("%d %d", &a, &b)!=EOF)
	{		
		printf("%d\n", a + b);
	}
    return 0;
}