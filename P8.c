#include<stdio.h>

//将低于平均分的人数取出并将分数存入数组 
int divide_numscore(int score[],int m,int below[])
{
	int i,j=0,sum=0,aver;
	
	for(i=0;i<m;i++)
	{
		sum+=score[i];
	}
	
	aver=sum/m;
	
	for(i=0;i<m;i++)
	{
		if(score[i]<aver)
		{
			below[j++]=score[i];
		}
	}
	
	return j;
}

void main()
{
	int score[9]={10,20,30,40,50,60,70,80,90};
	int below[5];
	int len,i;
	
	len=divide_numscore(score,9,below);
	
	for(i=0;i<len;i++)
	{
		printf("%d\t",below[i]); 
	}
}
