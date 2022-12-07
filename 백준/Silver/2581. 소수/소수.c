#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int min = 10000;
    int sum = 0;
    if (m == 1)
    {
        if (n == 1)
        {

        }
        else
        {
            for (int i = 2; i <= n; i++)
            {
                int cnt = 2;
                while (1)
                {
                    if (i % cnt == 0 && cnt != i)
                    {
                        break;
                    }
                    else if (cnt == i)
                    {
                        if (min > i)
                        {
                            min = i;
                        }
                        sum += i;
                        break;
                    }
                    cnt += 1;
                }
            }
        }
    }
    else
    {
        for (int i = m; i <= n; i++)
        {
            int cnt = 2;
            while (1)
            {
                if (i % cnt == 0 && cnt != i)
                {
                    break;
                }
                else if (cnt == i)
                {
                    if (min > i)
                    {
                        min = i;
                    }
                    sum += i;
                    break;
                }
                cnt += 1;
            }
        }
    }
    
    if (sum == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum, min);
    }
    return 0;
}