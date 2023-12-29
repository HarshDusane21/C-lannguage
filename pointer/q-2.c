#include<stdio.h>
main()
{   int n;
     printf("Enter the size of Array :");
     scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<5;i++)
	{
		printf("a[%d]:",i);
		
	 scanf("%d",&a[i]);
    }
    
	for(i=0;i<5;i++)
	{
	  printf("%d ",a[i]);
    }
   
	
	printf("\n");
	int *ptr=&a;
	
	
	for(i=0;i<5;i++)
    {
    	printf("%d \n ",ptr);
    	ptr-=1;
	}
}
