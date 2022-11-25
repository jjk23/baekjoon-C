#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int stu[31] = { 0 };
	stu[0] = 1;
	int n1=0, n2=0;
	int a;
	for (int i = 1; i < 29; i++)
	{
		scanf("%d", &a);
		stu[a] = 1;
	}
	for (int i = 1; i < 31; i++)
	{
		if (stu[i] == 0)
		{
			if (n1 == 0)
			{
				n1 = i;
			}
			else
			{
				n2 = i;
			}
		}
	}
	printf("%d\n%d", n1, n2);
    return 0;
}