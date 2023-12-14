#include<stdio.h>
#include<string.h>
int main()
{
        

    char a[100]; 
    int i,alph=0,digit=0,spc=0;
 
    printf("Enter  the string : ");
    gets(a);
     
    for(i=0;a[i];i++)  
    {
        if((a[i]>=65 && a[i]<=90)|| (a[i]>=97 && a[i]<=122) )
        {
		
          alph++;
         }
        else if(a[i]>=48 && a[i]<=57)
        {
        	    digit++;
		}
     
        else
        {
		
         spc++;
     }
 
 	}
 	
     
    printf("Alphabets = %d\n",alph);
    printf("Digits = %d\n",digit);
    printf("Special characters = %d", spc);
    
 

		
	     
	 
}
