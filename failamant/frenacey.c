#include<stdio.h>
#include<string.h>
int main()
{
	 char name[20];
	 int f=1;
	 int i,j;
	 
	 printf("Enter string : ");
	 gets(name);
	 
	 int length=strlen(name);
	 
	 for(i=0;i<length;i++)
	 {
	 	for(j=i+1;j<length;i++)
	 	{
	 		if(name[i]==name[j])
            {
	            f++;
	            name[j]=0;
		    }			
	     }
	     if(name[i]!=0)
	     {
	     	printf("%c -> %d\n",name[i],f);
		 }
		 f=1;
	 }
	 return 0;
}
