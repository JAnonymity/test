#include<stdio.h>
#include<string.h>

//判断字符串是否为回文数 

int fun(char *str)
{
	int i,j,sign=1,len=strlen(str);
	i=0;
	j=len-1;
	
	while(i!=j)
	{
		if(str[i]!=str[j])
		{
			sign=0;
			break;
		}
		i++;
		j--;
	}
	
	if(sign==0)
	{
		return 0;
	}
	else if(sign==1)
	{
		return 1;
	}
}

void main()
{
	char s[10];
	
	gets(s);
	
	if(fun(s)==1)
	{
		printf("Yes");
	}
	else if(fun(s)==0)
	{
		printf("No");
	}
}
