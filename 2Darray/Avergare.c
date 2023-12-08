#include<stdio.h>
 
main()
{
	int row,colum;
	float av,sum=0;
	printf("Enter the row number : ");
	scanf("%d",&row);
printf("Enter the colum number : ");
	scanf("%d",&colum);
	
	int a[row][colum];
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
		printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
			printf("%d ",a[i][j]);
			sum=sum+a[i][j];
		}
	printf("\n");
	}
	av=sum/(row*colum);
	printf("Sum is : %.0f\n",sum);
	printf("Avreage :%.2f",av);
}
