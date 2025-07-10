#include <stdio.h>
//gcc main.c -o main && main.exe

// 1  
// 1 2 
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5 ...


void main()
{
    int i,j;
    for (i=1;i<=8;i++){
        // printf("%d",i);
        
        for (j=1;j<i;j++){
            printf("%d",j); // 1 2 3 4
        } 
        printf("\n");
        
    } 

    
  
}
