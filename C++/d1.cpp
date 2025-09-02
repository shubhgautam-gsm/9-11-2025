#include <iostream>
using namespace std;


class test
{
    int a;

public:
test()
    {
        a = 0; // global
    };
    void operator++()
    {
        ++a; // local
    };
    void show()
    {
        cout<< "The value is :"<<a<<endl;
    };
};
int main()
{

    test t1,t2;
    ++t1;
    t1.show();
    ++t2;
    ++t2;
    ++t2;
    t2.show();

    return 0;
};