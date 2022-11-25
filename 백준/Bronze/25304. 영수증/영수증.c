#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
    int a,b=0;
    scanf("%d %d", &a, &b);
    int c, d;
    int n=0;
    for (b; b > 0; b--)
    {
        scanf("%d %d", &c, &d);
        n += (c * d);
    }
    if (a == n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}