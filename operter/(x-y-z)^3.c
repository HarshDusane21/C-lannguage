#include<stdio.h>
main()
{
	//(x-y-z)^3=x 3 - y 3 - z 3 - 3 x 2 y + 3 xy 2 - 3 y 2 z - 3 yz 2 + 3 xz 2 - 3 x 2 z + 6 xyz
	//(x-y-z)^3=x*3-y*3-z*3-(3*x*2*y)+3*x*y*2-(3*y*2*z)-(3*y*z*2)+3*x*z*2-(3*x*2*z-(3*x*2*z)+6*x*y*z
	int x,y,z;
	int sum;
	printf("Enter the value of X :");
	scanf("%d",&x);
	printf("Enter the value of Y :");
	scanf("%d",&y);
	printf("Enter the value of Z :");
	scanf("%d",&z);


   sum=x*3-y*3-z*3-(3*x*2*y)+3*x*y*2-(3*y*2*z)-(3*y*z*2)+3*x*z*2-(3*x*2*z)-(3*x*2*z)+6*x*y*z;
   printf("ANSWER=%d",sum);
}
