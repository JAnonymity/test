#include<stdio.h>

//ɾ���ַ����е����пո� 

void fun(char a[80])
{
	int i=0;
	
	char *p=a;//ָ���һ������Ԫ���׵�ַ
	
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
