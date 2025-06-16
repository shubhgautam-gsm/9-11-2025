#include <stdio.h>

// Function to add two numbers


int main() {
    int first, second, result;

    printf("Enter first value: ");
    scanf("%d", &first);
    printf("Enter second value: ");
    scanf("%d", &second);
    
    
    int jay = add(first, second);  
    printf("Sum: %d\n", jay);

    printf("Enter first value: ");
    scanf("%d", &first);
    printf("Enter second value: ");
    scanf("%d", &second);
    int heet = add(first, second); 
    printf("Sum: %d\n", jay); 


    printf("Enter first value: ");
    scanf("%d", &first);
    printf("Enter second value: ");
    scanf("%d", &second);
    int meet = add(first, second); 
    printf("Sum: %d\n", meet); 

    return 0;
}
