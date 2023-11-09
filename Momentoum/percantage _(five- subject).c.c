#include<stdio.h>
main()
{
	int math,che,phy,eng,com;
	float sum,pr;
	
	printf("enter your mathematics : ");
	scanf("%d",&math);
	printf("enter your chemistry : ");
	scanf("%d",&che);
	printf("enter your physics :");
	scanf("%d",&phy);
	printf("Enter your english :");
	scanf("%d",&eng);
	printf("Enter your computer :");
	scanf("%d",&com);
	
	sum=math+che+phy+eng+com;
	printf("total mark :%f\n",sum);
	pr=(sum/500)*100;
	printf("perancatage :%f\n",pr);
	
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
	else
	{
		printf("you failed");
	}
}

