#include<stdio.h>

void cals()
{
	
	char x;
	int n1,n2;
	printf("enter value n1 :");
	scanf("%d",&n1);
	printf("enter (+,-,*,/):");
	scanf(" %c",&x);
	printf("enter value n2 :");
	scanf("%d",&n2 );
	switch(x)
	{
		case'+':	printf(" %d + %d :%d ",n1,n2,n1+n2);
		break;
		case'-': printf("%d - %d :%d ",n1,n2,n1-n2);
		break;
		case'*':	printf("%d * %d :%d ",n1,n2,n1*n2);
				break;
		case'/':	printf("%d / %d :%d ",n1,n2,n1/n2);
		break;
		
	}
	printf("\n");
	cals();
	
}

int main()
{
	cals();
	return 0;
}
