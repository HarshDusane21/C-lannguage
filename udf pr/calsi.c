#include<stdio.h>
void add(int n1 ,int n2)
{
	printf("%d +%d =%d",n1,n2,n1+n2);

}
void sub(int n1 ,int n2)
{
	printf("%d - %d =%d",n1,n2,n1-n2);

}
void multi(int n1 ,int n2)
{
	printf("%d * %d =%d",n1,n2,n1*n2);

}
void div(int n1 ,int n2)
{
	printf("%d /%d =%d",n1,n2,n1 / n2);

}
void mod(int n1,int n2)
{
	printf("%d %% %d =%d",n1,n2,n1%n2);
}
void cals()
{
	char x;
	int n1,n2;
	st:
	if(x!='0')
	{
	 	while(1)
	 	{
			printf("enter (1-->+,2-->-,3-->*,4-->/):\n");
			scanf(" %c",&x);
			if(x=='0')
			{
				goto st;
			}
			printf("enter value n1 :");
			scanf("%d",&n1);
			printf("enter value n2 :");
			scanf("%d",&n2 );
		
			switch(x)
			{
				case'1':add(n1,n2);
				break;
				case'2': sub(n1,n2);
				break;
				case'3':multi(n1,n2);
				break;
				case'4':div(n1,n2);
				break;
				case'5':mod(n1,n2);
				break;
				case'0':;
				default:printf("Enter 0 to 5: ");
		
			}
		printf("\n");
		}
	}

}
 int main()
 {
	 while(1)
		 {
 		cals();
		 }
 	return 0;
 }

