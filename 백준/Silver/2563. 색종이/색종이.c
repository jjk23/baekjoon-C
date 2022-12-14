#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int n,a,b;
    int cnt = 0;
    scanf("%d", &n);
    int paper[100][100] = { 0, };
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        for (int j = a - 1; j < a + 9; j++)
        {
            for (int k = b - 1; k < b + 9; k++)
            {
                if (paper[j][k] != 1)
                {
                    paper[j][k] = 1;
                    cnt += 1;
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}