#include<stdio.h>
main()
{
 int a,b,c,d;
 printf("Enter the values (a,b,c,d):");
 scanf("%d%d%d%d",&a,&b,&c,&d);
     //a,b,c,d
     if(a<b)
     {
     	if(a<c)
     	{
     		if(a<d)
     		{
     			printf("A is minimum");
			 }
			 else
			 {
			 	printf("D is minimum");
			 }
		 }
		 else
		 {
		 	if(c<d)
		 	{
		 		printf("C is minimum ");
		 		
			 }
			 else
			 {
			 	printf("D is minimum ");
			 }
		 	
		 }
	 }
	 //b,c,d
	 else
	 {
	 	if(b<c)
	 	{
	 		if(b<d)
	 		{
	 			printf("B is minimum ");
			 }
			 else
			 {
			 	printf("d is minimum ");
			 }
		 }
		 else
		 {
		 	if(c<d)
		 	{
		 		printf("C is minimum ");
		 		
			 }
			 else
			 {
			 	printf("D is minimum ");
			 }
		 	
		 }
	 	
	 }
}