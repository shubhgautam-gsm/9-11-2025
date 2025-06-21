#include <stdio.h>

// global variable

void main()
{

    char rich[12] ="ambanisir";     //update //overide // overwrite
              
    // local variable
    {
        char rich[12] = "metanshsir";  
        printf(" rich is %s \n", rich);
    }
    // local variable
    {
        char rich[12]= "aesaben";
        printf(" rich is %s\n", rich);
    }

    {

        printf("default rich is %s\n", rich);
    }

    printf("\n rich is %s", rich);
}
