#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d = b + c;
    while (1)
    {
        if (d >= 60)
        {
            if (a == 23)
            {
                a = 0;
            }
            else
            {
                a += 1;
            }
            d -= 60;
        }
        else
        {
            break;
        }
    }
    printf("%d %d", a, d);
    return 0;
}