#include<stdio.h>
int main()
{
	int rows,cols,i,j;
	printf("enter no. of rows:");
	scanf("%d",&rows);
	printf("enter no. of cols:");
	scanf("%d",&cols);
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<=cols;j++)
	{
		printf("%d",j);
	}
	for(j=i;j>1;j--)
	{
		printf("%d",cols);
	}
	printf("\n");
}	
}
