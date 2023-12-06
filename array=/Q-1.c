#include<stdio.h>
main()
{  
     int n1,n2,i;

     printf("enter limt for frist Array :");
     scanf("%d",&n1);
     printf("enter limt for  second Array:");
     scanf("%d",&n2);
      
      int a[n1],b[n2],c[n1+n2];
      
      for(i=0;i<n1;i++)
      {
      	printf("enter the value of a[%d]:",i);
        scanf("%d",&a[i]);
	  }
	  
	  printf("\n");
       
        for(i=0;i<n2;i++)
      {
      	printf("enter the value of b[%d]:",i);
        scanf("%d",&b[i]);
	  }
       
   
     for(i=0;i<n1;i++)
      {
         c[i]=a[i];
	  }
	  for(i=0;i<n2;i++)
	  {
	  	c[n1+i]=b[i];
	  }
	  printf("\n enter the array is :\n");
	  printf("c[%d] :",n1+n2);
	  
	  for(i=0;i<n1+n2;i++)
	  {
	    printf(" %d",c[i]);
	  }
	  
    
    
	
		
}
