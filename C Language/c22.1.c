#include <stdio.h>

// global variable

void main()
{
    char rich[12]="ambanisir"; // one declare
    //update //overide // overwrite
              
    // local variable
    {
        char rich[4] = "met";
        printf("enter value:");
        
        scanf("%4c",&rich);
        printf(" rich is %s \n", rich);
    }
    // local variable
    {
        char rich[12]= "aesaben";
        printf(" rich is %s\n", rich);
    }

    {
        printf(" rich is %s\n", rich);
    }

    printf("\n rich is %s", rich);
}
