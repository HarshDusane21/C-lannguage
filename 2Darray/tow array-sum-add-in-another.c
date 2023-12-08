#include<stdio.h>
 
main()
{
	int row,colum;

	printf("Enter the row number : ");
	scanf("%d",&row);
    printf("Enter the colum number : ");
	scanf("%d",&colum);
	
	int a[row][colum];
	int b[row][colum];
	int c[row][colum];
	int i,j;
	printf("Elements of A :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
		printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	
	}
	
		printf("\n");
		printf("Elements of B : \n ");
		for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
		printf("b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	
	}
		for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
			 c[i][j]=a[i][j]+b[i][j];
		printf(" %d  ", c[i][j]);
		
		}
		printf("\n");
	
	}
	

}
