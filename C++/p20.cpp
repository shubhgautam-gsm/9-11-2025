#include <iostream>
using namespace std;
// while loop again and again if only one time
int main() {
  int i = 2;
  while(i < 5) {
    cout << "enter value" << endl;
    cin >> i;
    cout << i+1 << " this next value \n";
  }
 
  return 0;
}
// g++ main.cpp -o main && main.exe