#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
    int a, b, c,d[1000];
    scanf("%d", &a);
    for (int e=0;e<a;e++)
    {
        scanf("%d %d", &b, &c);
        d[e] = b + c;
    }
    for (int e = 0; e < a; e++)
    {
        printf("%d\n", d[e]);
    }
    return 0;
}