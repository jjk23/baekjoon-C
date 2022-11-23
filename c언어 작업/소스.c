#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
    int a,b=0;
    scanf("%d", &a);
    for (a; a > 0; a--)
    {
        b += a;
    }
    printf("%d", b);
    return 0;
}