#include <stdio.h>

// global variable

void main()
{
    char rich[]="ambanisir"; // one declare   " " size 1
    //update //overide // overwrite
              
    // local variable
    {
        printf("enter rich name:");
        scanf("%12c",&rich);
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
