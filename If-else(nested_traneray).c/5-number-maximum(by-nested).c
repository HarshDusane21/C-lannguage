#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	printf("Enter the value of C:");
	scanf("%d",&c);
	printf("Enter the value of D:");
	scanf("%d",&d);
	printf("Enter the value of E :");
	scanf("%d",&e);
	//a b c d e
	if(a>b)
	{ if(a>c)
      { 
        if(a>d)
        {
        	if(a>e)
        	{
        		printf("A is maximum");
			}
			else
			{
				printf("E is maximum");
			}
		}
		else
		{
			if(d>e)
			{
				printf("D is maximum ");
			}
			else
			{
				printf("E is maximum");
			}
		}
      
	  }
	  else
	  {
	  	if(c>d)
	  	{
	  		printf("C is maximum ");
		  }
		  else
		  {
		  	printf("D is maximum");
		  }
	  }
		
	}
	//b c d e
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("B is maximum");
				}
				else
				{
					printf("E is amximum");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is maximu");
				}
				else
				{
					printf("E is maximum");
				}
			}
			
		}
		//c d e 
		else
		{
			if(c>d)
			{
				if(c>e)
				{
				 printf(" C is maximum");	
				}
				else
				{
				 printf("E is maximum");	
				}
				
			}
			else
			{
				if(d>e)
				{
					printf("D is maximu");
				}
				else
				{
					printf("E is maximum");
				}	
			}
			
		}
		
	}
}
