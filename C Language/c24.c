#include<stdio.h>

/**
    draw following pattern with use of nested
    for loop

         *
        * *
       *   *
      *     *
     * * * * *
*/

void main(){
    int i,j,s;

    for(i=1; i<=5; i++){
      // for(j=5;j>=i;j--)
        for(j=i;j<5;j++){
            printf("-");
        }
          for(j=1;j<2;j++){
            printf("*");
        }
          for(j=1;j<i;j++){
            printf(" ");
        }
          for(j=1;j<i;j++){
            printf(" ");
        }
          for(j=1;j<2;j++){
            printf("*");
        }
        
        
        printf("\n");
        
    }
    for(j=1;j<12;j++){
            printf("*");
    }
    
}
