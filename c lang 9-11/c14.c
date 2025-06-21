/// convert entered kilometers to meters

#include<stdio.h>

void main(){
    int meter, kilometers;

    printf("\n Enter kilometers \t");
    scanf("%d", &kilometers);

    meter = kilometers * 1000;
    printf("\n %d kilometers in meters is %d", kilometers, meter);
}
