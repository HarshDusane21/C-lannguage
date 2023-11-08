#include<stdio.h>
main()
{
	int a,b,c ;
	printf("Enter the value  A: ");
	scanf("%d",&a);
	printf("Enter the value  B: ");
	scanf("%d",&b);
	printf("Enter the value  C: ");
	scanf("%d",&c);
 
     //a b c 
     if(a>b)
     {
     	if(a>c)
     	{
     		printf("A is maximum ");
		 }
		 else
		 {
		 		printf("C is maximum ");
		 }
	 }
	 else
	 {
	 	if(b>c)
	 	{
	 			printf("B is maximum ");
	 			
		 }
		 else
		 {
		 		printf("C is maximum ");
		 }
	 }
}
