#include <iostream>
using namespace std;

int main() {
  int user,ending;
  cout << "Enter a number: ";
  cin >> user;
  // cout << "Enter the ending number: ";
  // cin >> ending;

  for (int i = 0; i <= user*10; i += user) {
  // for (int i = 0; i <= user*10; i += user) {
  // i=0   user=5  i=i+user i=0+5 --> i= 5+5  i= 10+5
    cout << i << "\n";
  }

  return 0;
}

