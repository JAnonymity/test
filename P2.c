#include<stdio.h>

//���ַ����е��Ӵ����� 

void main()
{
	char supstr[30],substr[10];
	
	int i,j,k,time=0;
	
	gets(supstr);
	
	printf("substr=");
	
	gets(substr);
	
	for(i=0;supstr[i]!='\0';i++)
	{
		j=0;//��Ϊÿһ�α�����Ҫ��ͷ��ʼ�ж��ִ� 
		if(supstr[i]==substr[j])
		{
			k=i;//i�����������ַ���,Ҫ��k������,����ı�i��ֵ		
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
