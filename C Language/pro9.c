/// swap two values with use of third variable
#include<stdio.h>

void main(){
    int ip1, ip2, tmp;

    ip1 = 10;
    ip2 = 20;

    printf("before swap ip1 is %d and ip2 is %d", ip1, ip2);
    tmp = ip1;
    ip1 = ip2;//ip1 orginal value(10) shuffle by ip2 value(20)   
    ip2 = tmp;
    printf("\n After swap ip1 is %d and ip2 is %d", ip1, ip2);
}
// candy crush   (shuffle,switch,swap)
// motivate a=b b=a    10 20     20 10