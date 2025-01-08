#include <iostream>
using namespace std;

int main() {
  int user;
  cout << "Enter a number: ";
  cin >> user;
  int last_number;
  cout << "table until which number: ";
  cin >> last_number;

  for (int i = 1; i <= last_number; i++) {
    int a=i*user;
    cout << user <<" x " << i << " = " << a << "\n";
  }
  return 0;
}


// ++i
// i++