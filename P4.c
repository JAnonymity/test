#include<stdio.h>
#define M 3
#define N 4

//将二维数组的数据放入一维数组 

//void fun(int (*s)[10],int *b,int *n,int mm,int nn)
//{
//	int i,j,k=0;
//	
//	for(i=0;i<mm;i++)
//	{
//		for(j=0;j<nn;j++)
//		{
//			b[k++]=s[i][j];
//		}
//	}
//	
//	*n=k;
//}

void main()
{
	int a[M][N]={33,33,33,33,44,44,44,44,55,55,55,55}; 
	int b[M*N],i,j,len,k=0;
//	fun(a,b,len,M,N);
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			b[k++]=a[i][j];
		}
	}
	
	for(i=0;i<12;i++)
	{
		printf("%d",b[i]);
	}
}
