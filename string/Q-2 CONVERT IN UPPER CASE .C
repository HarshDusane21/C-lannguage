#include<stdio.h>
main()
{
	char a[15];
	printf("Enter the name :");
	scanf("%s",&a);
	int i;
	for(i=0;i<15;i++)
	{
		if(a[i]>=97 && a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
    
    
  
}
