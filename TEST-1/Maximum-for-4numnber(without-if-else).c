#include<stdio.h>
main()
{
	int a,b,c,d;
    printf("Enter the values of (a,b,c,d)= \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    printf(" A is maximum  : %d\n",a>b&&a>c&&a>d);
     printf(" B is maximum :u%d\n",b>c&&b>d&&b>a);
      printf("C is maximum :%d\n",c>d&&c>a&&c>b);
       printf("D is maximum :%d\n",d>a&&d>b&&d>c);
       printf("Here,'1'means maximum number !");
}
