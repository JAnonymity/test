#include<stdio.h>

void fun(char *ss)
{
	int i=0;
	
	while(ss[i])
	{
		if(ss[i]>='a'&&ss[i]<='z')
		{
			if(i%2==1)
			{
				ss[i]=ss[i]-32;
			}
		}
		i++;
	}
	
	ss[i]='\0';
}

void main()
{
	char s[20]="abc4Efg";
	
	fun(s);
	
	puts(s);
}
