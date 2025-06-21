#include <stdio.h>
// string(char)  int(1,2,3)  float(1,2,2,3,4,4.4)
#define p printf
#define s scanf // printf declare as a 'p'

void main()
{
    char user[4]; // []  []  [] []  []  []
    p("1 Enter your name: ");
    s("%s", &user);
    p("Using (s) Welcome to  %s", user);
}
// int
// char
// float