#include <iostream>
using namespace std;
int main()
{

    int i = 0;
    int number;
    for (i;i<4;i--)
    {
        cout << "enter name";
        cin >> number;
        cout << number;
        // infinite loop take values infinite due to remain i=0 so
        // condition is true always
    }
}
