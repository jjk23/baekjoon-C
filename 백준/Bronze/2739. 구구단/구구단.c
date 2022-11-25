#include<stdio.h>
main()
{
	int a;
	int b=1;
	scanf("%d",&a);
	if(a>9)
	{
		printf("정확한 값을 입력해 주세요.");
	}
	if(a<1)
	{
		printf("정확한 값을 입력해 주세요.");
	}
	if(a<10&&a>0)
	{
			while(b<10)
	{
		printf("%d * %d = %d\n",a,b,a*b);
		b++;
		
	}
		
	}
	 

}