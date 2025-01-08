#include <iostream>
using namespace std;

int main() {
  int user;
  cout << "Enter a number: ";
  cin >> user;
  for (int i = 1; i <= 10; i++) {
    int a=i*user;
    cout << user <<" x " << i << " = " << a << "\n";
  }
  return 0;
}


// ++i
// i++