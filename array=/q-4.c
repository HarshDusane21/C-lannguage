#include<stdio.h>
main()
{
	int a[10]={1,45,63,45,12,1,50,12,3,4};
	 int length=sizeof(a)/4;
	 int i;
	 printf("enter the any valule: ");
	 scanf("%d",&length);

	 int check=0;
	 
	 for(i=0;i<length;i++)
	 {
	 	if(length==a[i]);
	 	{
	 		check=1;
		 }
	 }
	 if(check==1)
	 {
	 	printf("the number is avaliable");
	 }
	  else
	 {
	 	printf("the number is not avaliable");
	 }
}
