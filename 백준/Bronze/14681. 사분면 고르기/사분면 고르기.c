#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > 0)
    {
        if (b > 0)
        {
            printf("1");
        }
        else
        {
            printf("4");
        }
    }
    else
    {
        if (b > 0)
        {
            printf("2");
        }
        else
        {
            printf("3");
        }
    }
    return 0;
}