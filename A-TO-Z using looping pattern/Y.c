#include<stdio.h>

main()
{
     int i, j;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=5; j++)
        {
            if((i==3 && j==3)||(i==2 && j==3)||(i==1 && j==3))
            {
                printf("  ");
            }
            else if(j==3||(i==2 && j==1)||(i==2 && j==5)||(i==1 && j==1)||(i==1 && j==5)||(i==3 && j==2)||(i==3 && j==4))
            {
                printf("* ");
            }
            else
            {
                printf("  ");        
            }
        }
            printf("\n");
    }

}
