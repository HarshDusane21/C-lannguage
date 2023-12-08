#include<stdio.h>
main()
{
	int i,n,first,second;
    int a[n];


    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
    	printf("[%d]:",i);
        scanf("%d", &a[i]);
    }
    
    first=a[0];
    second=a[1];
    for(i=0;i<n;i++)
    {
    	if(a[i]>first)
    	{
    		second=first;
    		first=a[i];
		}
		else if (a[i]>second&&a[i]!=first)
		{
			second=a[i];
		}
	}
	printf("Largest number :%d,Second largest number :%d",first,second);
}
