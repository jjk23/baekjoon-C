#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int arr[1000001] = { 0, };
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    if (m == 1)
    {
        m = 2;
    }
    
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 2; j * i < 1000000; j++)
            {
                arr[i * j] = 1;
            }
        }       
    }
    for (int i = m; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}