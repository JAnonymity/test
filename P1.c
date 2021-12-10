#include<stdio.h>

//删除字符串中的所有空格 

void fun(char str[80])
{
	int i=0;
	
	char *p=str;//指向第一个数组元素首地址
	
	while(*p) 
	{
		if(*p!=' ')
		{
			str[i++]=*p;
		}
		p++;
	}
	
	str[i]='\0';
}
void main()
{
	char str[80];
	
	gets(str);
	
	fun(str);
	
	puts(str);
}
