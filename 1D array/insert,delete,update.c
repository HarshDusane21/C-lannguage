#include<stdio.h>
main()
{
	int a[10]={1,2,3,4};
		a[3]=10;
	a[4]=5;
	a[8]=96;

	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
    }
    
    printf("\n ");
        
    int  n, index;
    int de[n];


    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
    	printf("[%d]:",i);
        scanf("%d", &de[i]);
    }

  
    printf("Enter the element position to delete : ");
    scanf("%d", &index);


  
    if(index < 0 || index > n)
    {
        printf("Invalid index! Please enter index  between 1 to %d", n);
    }
    else
    {
        for(i=index-1; i<n-1; i++)
        {
            de[i] = de[i + 1];
        }

        
        n--;

   
        printf("\nElements of array after delete are : ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", de[i]);
        }
    }

}
