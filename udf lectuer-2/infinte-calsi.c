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

void cals()
{
	char x;
	int n1,n2;
	printf("enter value n1 :");
	scanf("%d",&n1);
	printf("enter value n2 :");
	scanf("%d",&n2 );
	printf("enter (+,-,*,/):\n");
	scanf(" %c",&x);
	
	switch(x)
	{
		case'+':add(n1,n2);
		break;
		case'-': sub(n1,n2);
		break;
			case'*':multi(n1,n2);
				break;
			case'/':div(n1,n2);
		break;
		
	}
	printf("\n");

}
 int main()
 {
 	while(1)
 	{
 		cals();
	 }
 	return 0;
 }
