#include<stdio.h>
main()
{   
   // Cricale area formula=pie*radius*radius
	const float pie=3.14;
	int radius;
	int area;
	printf( " Enter the radius :");
	scanf("%d",radius);
	area=pie*radius*radius;
	printf("Cricale Area :%d",area);
}
