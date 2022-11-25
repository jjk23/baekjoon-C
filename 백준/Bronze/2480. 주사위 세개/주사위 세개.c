#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
    int a, b, c, d=0;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b & b == c)
    {
        d += 10000;
        d += a * 1000;
    }
    else if(a==b||a==c)
    {
        d += 1000;
        d += a * 100;
    }
    else if (b == c)
    {
        d += 1000;
        d += b * 100;
    }
    else
    {
        if (a > b && a > c)
        {
            d = a * 100;
        }
        else if(b>a&&b>c)
        {
            d = b * 100;
        }
        else
        {
            d = c * 100;
        }
    }
    printf("%d", d);
    return 0;
}