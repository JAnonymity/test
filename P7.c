#include<stdio.h>

//将两数合并,a中十位和个位放在c中十位和千位,b中十位和个位放在c中个位和百位 
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
