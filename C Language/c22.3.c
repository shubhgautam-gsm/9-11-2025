#include <stdio.h>

int main() {
    char rich[12] = "ambanisir"; // initial value

    {
        printf("Enter name (max 11 chars): ");
        scanf("%11c", rich);  // %11s reads up to 11 non-whitespace characters, adds null terminator
        printf("Rich is: %s\n", rich);
    }

    {
        printf("Enter name (max 11 chars): ");
        scanf("%11c", rich);
        printf("Rich is: %s\n", rich);
    }

    {
        printf("Rich is: %s\n", rich); // shows last entered name
    }

    printf("\nFinal value of rich: %s\n", rich);

    return 0;
}
