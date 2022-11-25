#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	int a, b;
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a == b && a == 0)
		{
			break;
		}
		else
		{
			printf("%d\n", a + b);
		}
	}
    return 0;
}