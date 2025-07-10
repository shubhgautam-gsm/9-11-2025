#include <stdio.h>
//gcc main.c -o main && main.exe

//1 2 3 4 5 6 7
//2 3 4 5 6 7
//3 4 5 6 7
//4 5 6 7
//5 6 7
//6 7
//7



void main()
{
    int i,j;
    for (i=1;i<=8;i++){
        // printf("%d",i);
        
        for (j=i;j<8;j++){
            printf("%d",j); // 1 2 3 4
        } 
        printf("\n");
        
    } 

    
  
}
