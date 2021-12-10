#include<stdio.h>

//求字符串中的子串个数 

void main()
{
	char supstr[30],substr[10];
	
	int i,j,k,time=0;
	
	gets(supstr);
	
	printf("substr=");
	
	gets(substr);
	
	for(i=0;supstr[i]!='\0';i++)
	{
		j=0;//因为每一次遍历都要从头开始判断字串 
		if(supstr[i]==substr[j])
		{
			k=i;//i用来遍历总字符串,要用k来代替,以免改变i的值		
			while(supstr[k]==substr[j]&&substr[j]!='\0')
			{
				k++;
				j++;
			}
		}
		
		if(substr[j]=='\0')
		{
			time++;
		}
	}
	
	printf("time=%d",time);
}
