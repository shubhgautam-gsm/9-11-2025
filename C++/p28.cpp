#include <iostream>
using namespace std;

int main() {
  int user,ending;
  cout << "Enter a number: ";
  cin >> user;
  // cout << "Enter the ending number: ";
  // cin >> ending;

  for (int i = 0; i <= user*10; i += user) {
    cout << i << "\n";
  }

  return 0;
}

