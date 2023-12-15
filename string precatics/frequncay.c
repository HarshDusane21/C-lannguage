#include<stdio.h>
#include<string.h>
main()
{ 
   char name[100];
   printf("Enter string  :  ");
   gets(name);
   int len=strlen(name);
   int i,j,f=1;
   for(i=0;i<len;i++)
    { 
       for(j=i+1;j<len;j++)
       {
       	  if(name[i]==name[j])
       	  {
       	  	f++;
       	  	name[j]=0 ;
			 }
		
	   }
	   	 if(name[i]!=0)
			 {
			 	printf("%C -> %d \n ",name[i],f);
			 }
			 f=1;
   
   }
 
  
	
}
