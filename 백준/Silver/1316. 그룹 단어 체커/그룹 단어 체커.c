#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);	
	int a = 0;	
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		int alp[26] = { 0, };
		char arr[100];
		scanf("%s", &arr);
		a += 1;
		for (int j = 0; j < strlen(arr); j++)
		{
			if (alp[arr[j] - 97] == 0)
			{
				alp[arr[j] - 97] = 1;
				t = j;
				for (int k = j+1; k >= 0; k++)
				{					
					if (arr[t] != arr[k])
					{						
						break;
					}
					j += 1;
				}
			}
			else
			{
				a -= 1;
				break;
			}			
		}
	}
	printf("%d", a);
	return 0;
}