#include<stdio.h>
#include<string.h>
main()
{
	 char x[100];
	 printf("Enter the name : ");
	 gets(x);
	 puts(x);
	 int i,j,length;
	 length=strlen(x);
	 for(i=0;i<length;i++)
	 {
	 	if(x[i]==' ')
	 	{
	 		x[i]=x[i+1];
	 		i++;
	 		
		 }
		 printf("%c",x[i]);
	 }
}
