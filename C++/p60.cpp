#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
 string &meal =food;

// same address so space takes only one
  cout << &meal<<endl; //0x7ffe82294670 
  cout << &food;  //0x7ffe82294670
// if meal=food instead of &meal=food then diff address 
// 0x7ffc4b9c4580
// 0x7ffc4b9c4560
  return 0;
}
