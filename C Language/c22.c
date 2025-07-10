#include <stdio.h>
//strings in C always end with a null terminator ('\0'), so: [n+1]


int main()
{
    char rich[5] = "jiya";  // note: need 5 bytes for null terminator

    {
        char rich[5] = "siya";  
        printf("rich is %s\n", rich);
    }

    {
        char rich[5] = "hiya";
        printf("rich is %s\n", rich);
    }

    {
        printf("rich is %s\n", rich);  // prints outer 'rich'
    }

    printf("\nrich is %s\n", rich);   // again outer 'rich'

    return 0;
}
