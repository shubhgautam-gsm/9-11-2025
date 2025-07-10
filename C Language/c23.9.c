#include <stdio.h>
//gcc main.c -o main && main.exe
 //1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2 
//1


//...


void main()
{
    int i,j;
    for (i=7;i>=1;i--){
        // printf("%d",i);
        for (j=1;j<i;j++){
            printf("*"); // 1 2 3 4
        }
          // increase
        for (j=i;j<7;j++){
            printf("0"); // 1 2 3 4
        }
        
        for (j=i;j<7;j++){
            printf("0"); 
        } 

         for (j=1;j<i;j++){
            printf("*"); // 1 2 3 4
        }
        //decrease
      
        printf("\n");
        
    } 
    for (i=7;i>=1;i--){
        // printf("%d",i);
        for (j=7;j>i;j--){
            printf("*"); 
        } 
          // increase
        for (j=1;j<i;j++){
            printf("0"); // 1 2 3 4
        }
        for (j=1;j<i;j++){
            printf("0"); // 1 2 3 4
        }
        
      for (j=7;j>i;j--){
            printf("*"); 
        } 
        //decrease
      
        printf("\n");
        
    } 

    
  
}
