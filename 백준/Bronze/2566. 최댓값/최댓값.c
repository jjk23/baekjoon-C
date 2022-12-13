#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int max = 0;
    int a=0, b=0;
    int arr[9][9] = { 0, };
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                a = i;
                b = j;
            }
        }
    }
    printf("%d\n%d %d", max, a+1, b+1);
    return 0;
}