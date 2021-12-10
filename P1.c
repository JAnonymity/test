#include<stdio.h>

//删除字符串中的所有空格 

void fun(char a[80])
{
	int i=0;
	
	char *p=a;//指向第一个数组元素首地址
	
	while(*p) 
	{
		if(*p!=' ')
		{
			a[i++]=*p;
		}
		p++;
	}
	
	a[i]='\0';
}
void main()
{
	char a[80];
	
	gets(a);
	
	fun(a);
	
	puts(a);
}
