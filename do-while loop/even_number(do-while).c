#include<stdio.h>
main()
{ 
     int x=2;
	 int n;
	 printf("enter the number :");
	 scanf("%d",&n);
	 do
	 {
	 	printf(" %d",n);
	 	n-=2;
	 	
	 }while(n>=x);
}
