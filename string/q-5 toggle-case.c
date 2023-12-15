#include<stdio.h>
main()
{
    	char a[100];
  	 int i;
     printf("\n Please Enter any String: ");
  	  gets(a);
  	

  	for (i = 0; a[i]!='\0'; i++)
  	{
  	  
  	    if(a[i] >= 'A' && a[i] <= 'Z') 
        {
              a[i] = a[i] + 32; 
        }
              
              
        else if(a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
  		
  	}

  	printf("\n Toglled string: %s", a);
  	
}
