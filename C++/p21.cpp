#include <iostream>
using namespace std;
// while loop again and again if only one time
int main() {
  int b=2;
  for(int i = 1;i < 5;i--) {
    int user=2;
    cout << "enter value" << endl;
    cin >>user;

    int mult=b*user;  // variable to store input value
    
    cout<<"multiplication is " << mult << " \n";
  }
 
  return 0;
}
// g++ main.cpp -o main && main.exe