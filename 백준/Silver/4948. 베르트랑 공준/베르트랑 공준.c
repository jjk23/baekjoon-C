#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int arr[1000001] = { 0, };
int main() {
    int n;    
    int cnt = 0;
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 2; j * i < 1000000; j++)
            {
                arr[i * j] = 1;
            }
        }       
    }
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        else
        {
            cnt = 0;
            for (int i = n + 1; i <= 2 * n; i++)
            {
                if (arr[i] == 0)
                {
                    cnt += 1;
                }
            }
            printf("%d\n", cnt);
        }
    }  
    return 0;
}