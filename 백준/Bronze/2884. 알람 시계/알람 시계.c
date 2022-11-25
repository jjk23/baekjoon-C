#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b < 45)
    {
        if (a == 0)
        {
            a = 23;
        }
        else
        {
            a -= 1;
        }
        b += 60;
        b -= 45;
    }
    else
    {
        b -= 45;
    }
    printf("%d %d", a, b);
    return 0;
}