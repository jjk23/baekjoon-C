#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int cnt = 0;
    int a[100] = { 0, };
    int k = 2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        k = 2;
        while (1)
        {
            if (a[i] % k == 0&&a[i]!=k)
            {
                break;
            }
            else if (a[i] == k)
            {
                cnt += 1;
                break;
            }
            else if(a[i]==1)
            {
                break;
            }
            else
            {
                k += 1;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}