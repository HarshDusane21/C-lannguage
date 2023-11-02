#include<stdio.h>
main()
{
	int a,b,c,d;
    printf("Enter the values of (a,b,c,d)= \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    printf(" A is minimum :%d\n",a<b&&a<c&&a<d);
     printf("B is minimum :%d\n",b<c&&b<d&&b<a);
      printf("C is minimum :%d\n",c<d&&c<a&&c<b);
       printf("D is minimum :%d\n",d<a&&d<b&&d<c);
       printf("Here '1'means minimum value !:");
}
