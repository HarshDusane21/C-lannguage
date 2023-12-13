#include<stdio.h>
#include<string.h>
main()
{ 
  char name[30]="dUSAne harsh ANIlbhai";
  int length=strlen(name);
  if(name[0]>=97 && name[0]<=122)
  {
  	name[0]=name[0]-32;
  	
  }
  int i;
  for(i=1;i<length;i++)
  {
  	 if(name[i-1]==' ')
  	 {
  	 	 if(name[i]>='a' && name[i]<='z')
  	 	{
  	 		name[i]=name[i]-32;
		   }
	   }
	   	 else if(name[i]>=65 && name[i]<=90)
  	 	{
  	 		name[i]=name[i]+32;
		   }
		   
		   else if (name[i]==' ')
		   { 
		        if(name[0]>=97&&name[0]<=122)
		        {
		        		name[i+1]=name[i+1]+32;
				}
		   	
		   }
  }
  puts(name);
	
}
