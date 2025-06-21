#include <stdio.h>

// global variable

void main()
{
    int x = 10; // one declare
    x = 20;     //update //overide // overwrite
    x = 30;             
    // local variable
    {
        int x = 15;
        printf("local value of x is %d \n", x);
    }
    // local variable
    {
        int x = 25;
        printf("local value of x is %d\n", x);
    }

    {
        printf("local value of x is %d\n", x);
    }

    printf("\n global value of x is %d", x);
}
