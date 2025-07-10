

#include<stdio.h>

void main() {
    int x = 10; /// local for main()
    float y = 10.2; /// local for main()
    printf("\n value of x is %d y is %f ", x,y);
    msg();
}

int msg(){
        int x = 10; /// local for main()
     printf("\n value of x is %d", x); /// error
     return 0;
}
