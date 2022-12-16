#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int arr[5];
    int sum = 0;
    int temp;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d\n%d", sum / 5, arr[2]);
    return 0;
}