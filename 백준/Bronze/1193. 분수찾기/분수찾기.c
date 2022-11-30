#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int x;
	scanf("%d", &x);

    int arr[5000] = { 0 };
    int sum = 1;
    for (int i = 0; i < 5000; i++) {
        arr[i] += sum; //arr[0]은 1. arr[1]은 3. arr[2]는 6. arr[3]은 10...
        sum += (i + 2);
    }

    int up, down;

    for (int i = 0; i < 5000; i++) {
        if (x <= arr[i]) {
            if (i % 2 == 0)//짝수일때
            {
                if (i == 0)
                {
                    down = 1;
                    up = 1;
                }
                else
                {
                    down = x - arr[i - 1];
                    up = (i + 2) - down;
                }               
            }
            else //홀수일때
            {
                up = x - arr[i - 1];
                down = (i + 2) - up;              
            }
            break;
        }
    }

    printf("%d/%d \n", up, down);
	return 0;
}