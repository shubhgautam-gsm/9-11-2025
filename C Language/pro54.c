#include<stdio.h>

/// pre increment operator

void main(){
    int ip1 = 10, ip2;
    printf("\n value of ip1 is %d", ip1);
    ip2 = ++ip1;
    /// ip2 = ip1++;
    printf("\n value of ip1 is %d and ip2 is %d", ip1, ip2);
}
