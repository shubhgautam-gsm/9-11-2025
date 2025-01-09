#include <iostream>
using namespace std;
// while loop again and again if only one time
int main() {
  int i = 3;
  
  while( i< 5) {
    int user=2;
    cout << "enter value" << endl;
    cin >>user;

    int mult=i*user;  // variable to store input value
    
    cout<<"multiplication is " << mult << " \n";
  }
 
  return 0;
}
// g++ main.cpp -o main && main.exe