#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int first, second, result;

    printf("Enter first value: ");
    scanf("%d", &first);
    printf("Enter second value: ");
    scanf("%d", &second);
    
    int jay = add(first, second);  // Call the function and store result
    
    printf("Enter first value: ");
    scanf("%d", &first);
    printf("Enter second value: ");
    scanf("%d", &second);
    
    int heet = add(first, second);  // Call the function and store result
    
    printf("Enter first value: ");
    scanf("%d", &first);
    printf("Enter second value: ");
    scanf("%d", &second);
    
    int meet = add(first, second);  // Call the function and store result
    
    printf("Sum: %d\n", jay);  // Print the result
    printf("Sum: %d\n", heet);  // Print the result
    printf("Sum: %d\n", meet);  // Print the result

    return 0;
}
