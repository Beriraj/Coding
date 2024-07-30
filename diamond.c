#include<stdio.h>

int main()
{
	int rows;
	printf("Enter No.of Rows: ");
	scanf("%d",&rows);
	int i,j,k,l,a,b,c,d,e,f;
	for(e=1;e<=2*rows+1;e++)
	{
		printf("*");
	}
	printf("\n");
	for(i=1;i<=rows;i++){
		for(j=0;j<=rows-i;j++)
		{
			printf("*");
		}
		for(k=0;k<2*i-1;k++)
		{
			printf(" ");
		}
		for(l=0;l<=rows-i;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(d=1;d<rows;d++)
	{
		for(a=1;a<=d+1;a++)
		{
			printf("*");
		}
		for(b=0;b<2*(rows-d)-1;b++)
		{
			printf(" ");
		}
		for(c=1;c<=d+1;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(f=1;f<=2*rows+1;f++)
	{
		printf("*");
	}
}
