#include <stdio.h>    
     
 main()    
{    
         
    int a[] = {1, 2, 3, 4, 5};  
	int i;
	   
       
    int length = sizeof(a)/sizeof(a[0]);    
    
    int n = 3;    
         
    printf("Original array: \n");    
    for (i = 0; i < length; i++) {     
        printf("%d ", a[i]);     
    }      
        
  
    for(i = 0; i < n; i++){    
        int j, first;    
     
        first = a[0];    
        
        for(j = 0; j < length-1; j++){    
              
            a[j] = a[j+1];    
        }    
       
        a[j] = first;    
    }    
        
    printf("\n");    
        
   
    printf("Array after left rotation: \n");    
    for(i = 0; i < length; i++){    
        printf("%d ", a[i]);    
    }    
    
}   
