#include<stdio.h>

//�������ϲ�,a��ʮλ�͸�λ����c��ʮλ��ǧλ,b��ʮλ�͸�λ����c�и�λ�Ͱ�λ 
void conbine_word(int a,int b,long *c)
{
	int ge,shi,bai,qian;
	
	ge=b/10;
	shi=a/10;
	bai=b%10;
	qian=a%10;
	
//	return ge+shi*10+bai*100+qian*1000;

	*c=ge+shi*10+bai*100+qian*1000;
}

void main()
{
	int x=45,y=12,z;
	
	conbine_word(x,y,&z);
	
	printf("final word=%d",z);
}
