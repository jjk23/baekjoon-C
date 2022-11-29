#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	//1~7. 8~19. 20~37. 38~61 ...처음은 12,18,24... 8미만/20미만/38미만/62미만
	int n;
	int a = 8;
	int p = 12;
	int c = 1;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("%d", c);
	}
	else
	{
		while (1)
		{
			c += 1;
			if (n < a)
			{
				printf("%d", c);
				break;
			}
			else
			{
				a += p;
				p += 6;
			}
		}
	}	
	return 0;
}