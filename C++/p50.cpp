#include <iostream>
using namespace std;
int main()
{

    int i = 0;
    int number;
    while (i < 4)
    {
        cout << "enter number";
        cin >> number;
        cout << number;
        // finite loop i++;
        // condition is false at some point
        i++;
    }
}
