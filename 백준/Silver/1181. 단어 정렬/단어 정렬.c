#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int l;
    char alp[50];
} str; 

int compare(const void* a, const void* b)
{
    str A = *(str*)a; 
    str B = *(str*)b;
    if (A.l > B.l) 
        return 1;
    else if (A.l == B.l) 
    {
        for (int i = 0; i < A.l; i++)
        {
            if (A.alp[i] < B.alp[i])
            {
                return -1;
            }
            else if (A.alp[i] > B.alp[i])
            {
                return 1;
            }
        }
    }
    return -1; 
}
str arr[20000]; 
int main()
{
    int n, i;
    scanf("%d", &n);
    i = 0;  
    while (i < n)
    {
        scanf("%s",&arr[i].alp);
        arr[i].l = strlen(arr[i].alp);
        i++;
    }
    qsort(arr, n, sizeof(str), compare); 
    i = 0;
    while (i < n)
    {
        if (strcmp(arr[i].alp,arr[i+1].alp)==0)
        {
            i++;
        }
        else
        {
            printf("%s\n", arr[i].alp);
            i++;
        }      
    }
}