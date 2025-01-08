#include <iostream>
using namespace std;

int main() {
  // Outer loop
  for (int i = 1; i <= 3; i++) {
     // Executes 2 times
    for (int j = 1; j <= i; j++) {
    cout << "*";  // Executes 2 times

  }
    cout<<"\n";
  }
  return 0;
}
