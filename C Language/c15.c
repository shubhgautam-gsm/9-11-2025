/// convert entered kilometers to meters

#include<stdio.h>

void main(){
    int meter, kilometers;

    printf("\n Enter meters \t");
    scanf("%d", &meter);

    kilometers = meter / 1000;
    printf("to convert meter into km kilometers = meter / 1000");
    printf("\n %d kilometers in meters is %d", kilometers, meter);
}
