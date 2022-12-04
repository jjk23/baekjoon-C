#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int c = 0;
    scanf("%d", &n);
    while (1)
    {
        if (n % 5 == 0)
        {
            c += n / 5;
            break;
        }
        else if(n>=3)
        {
            n -= 3;
            c += 1;
        }
        else
        {
            c = -1;
            break;
        }
    }
    printf("%d", c);
    return 0;
}