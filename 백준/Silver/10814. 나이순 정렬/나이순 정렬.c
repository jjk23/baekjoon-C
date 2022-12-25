#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int num;
    char alp[1000];
    int c;
} str; 

int compare(const void* a, const void* b)
{
    str A = *(str*)a; 
    str B = *(str*)b;
    if (A.num > B.num) 
        return 1;
    else if (A.num == B.num) 
    {
        if (A.c > B.c)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    return -1; 
}
str arr[100000]; 
int main()
{
    int n, i;
    scanf("%d", &n);
    i = 0;  
    while (i < n)
    {
        scanf("%d %s",&arr[i].num, &arr[i].alp);
        arr[i].c = i;
        i++;
    }
    qsort(arr, n, sizeof(str), compare); 
    for (int j = 0; j < n; j++)
    {
        printf("%d %s\n", arr[j].num, arr[j].alp);
    }  
}