#include<stdio.h>
main()
{ 
     int x=1;
	 int n;
	 printf("enter the number :");
	 scanf("%d",&n);
	 do
	 {
	 	printf(" %d",x);
	 	x+=2;
	 	
	 }while(x<=n);
}
