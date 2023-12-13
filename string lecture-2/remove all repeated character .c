#include<stdio.h>
#include<string.h>
main()
{
	char x[100],y[100];
	printf("Enter string x : ");
	gets(x);
	int i,j,length;
    
    length=strlen(x);
	for(i=0;i<length;i++)
  {
  	y[i]=x[i];
  }
  
  	for(i=0;i<length;i++)
  {
    for(j=i+1;j<length;j++)
		  {
		  	
		  	if(x[i]==x[j])
		  	{
		  		x[j]='\0';
		  		x[i]='\0';
		  		break;
			  }
		  }
		  printf("%c",x[i]);
  }
  

}
