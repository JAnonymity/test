#include<stdio.h>

//ɾ���ַ����±�Ϊż��ͬʱASCIIֵΪ�������ַ� 

void fun(char *s,char t[])
{
	int i=0,j=0;
	
	while(s[i]!='\0')
	{
		if(s[i]<='A'&&s[i]<='Z')
		{
			if(i%2!=0&&s[i]%2==0)
			{
				t[j++]=s[i];
			}
		}
		else
		{
			t[j++]=s[i];
		}
		i++;	
	}
	
	t[j]='\0';
}

void main()
{
	char origin[50]="ABCDEFG12345";
	char final[50];
	
	fun(origin,final);
	
	puts(final);
}
