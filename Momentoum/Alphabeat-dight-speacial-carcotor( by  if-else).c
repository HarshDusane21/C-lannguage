#include<stdio.h>
main()

{ 
  int x;
  printf("enter any number : ");
  scanf("%d",&x);
	if(x>=65&&x<=90||x>=97&&x<=122)
	{
		printf("the number you enter is alphabeat ! ");
	}
	else if(x>=48&&x<=57)
	{ 
	   printf("the number you enter is digt ! ");
	}
		else if(x>=32&&x<=47||x>=58&&x<=64 || x>=91&&x<=96 ||x>=123&&x<=127)
	{ 
	   printf("the number you enter special charter  ! ");
	}
	
	
}

