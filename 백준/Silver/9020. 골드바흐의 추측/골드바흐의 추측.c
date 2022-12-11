#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int arr[1000001] = { 0, };
int main() {
    int t;    
    int n;
    int cnt = 0;
    int a, b;
    arr[0] = 1;
    arr[1] = 1;
    scanf("%d", &t);
    for (int i = 2; i <= 1000000; i++) //에라토스테네스의 채
    {
        if (arr[i] == 0)
        {
            for (int j = 2; j * i < 1000000; j++)
            {
                arr[i * j] = 1;//1이면 소수 아님
            }
        }       
    }
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        a = n / 2;
        b = n / 2;
        while (1)
        {
            while (1)
            {
                if (arr[a] == 0)
                {
                    break;
                }
                else
                {
                    a -= 1;
                }
            }
            while (1)
            {
                if (arr[b] == 0)
                {
                    break;
                }
                else
                {
                    b += 1;
                }
            }
            if (a + b == n)
            {
                printf("%d %d\n", a, b);
                break;
            }
            else if(a+b<n)
            {
                b += 1;
            }
            else
            {
                a -= 1;
            }
        }
    }
    return 0;
}