#include<stdio.h>
main()
{
	int math,chemistry,physics,english,computer;
	float pr;
	float avg;
	 int total;
	 
	 printf("enter your mathematics mark :");
	 scanf("%d",&math); 
	printf("enter your chemistry mark :");
	 scanf("%d",&chemistry); 
	printf("enter your physics mark :");
	 scanf("%d",&physics); 
	printf("enter your english mark :");
	 scanf("%d",&english); 
	printf("enter your computer mark :");
	 scanf("%d",&computer); 
	
	total=math+chemistry+physics+english+computer;

	pr=(total/500)*100;
	printf(" percantage : %2f ",pr);
	
	if(pr>=90&&pr<100)
	{
		printf("your grade is : A");
	}
	else if(pr>=80&&pr<90)
	{
		printf("your grade is : B");
	}
	else if(pr>=70&&pr<80)
	{
		printf("your grade is : c");
	}
	else if(pr>=60&&pr<70)
	{
		printf("your grade is : D");
	}
	else if(pr>=50&&pr<60)
	{
		printf("your grade is : E");
	}
	else if(pr>=40 )
	{
		printf("your grade is : F");
	}
}
