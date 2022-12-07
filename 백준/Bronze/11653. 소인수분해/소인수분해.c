#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int i = 2;
    while (1)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            n /= i;
            i = 1;
        }
        if (n == 1)
        {
            break;
        }
        i += 1;
    }
    return 0;
}