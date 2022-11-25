#include<stdio.h>
main()
{
	int a,b,i;
	int j=0; 
	int score[1000];
	float p; 
	int hap;
	float o;
	scanf("%d",&a);//a입력 
	for(i=0;i<a;i++)//a번 반복 
	{
		o=0;
		scanf("%d",&b);//b입력 
		hap = 0;
		for(j=0;j<b;j++)//b번 반복 
		{
			scanf("%d",&score[j]);//점수 입력 
			hap=hap+score[j];//점수 덧셈 
		}
		p=hap/b;
		for(j=0;j<b;j++)
		{
			if(score[j]>p)
			{
				o+=1;
			}
		}
		printf("%0.3f%%\n",o/b*100);
	}
	
	
	
	
}