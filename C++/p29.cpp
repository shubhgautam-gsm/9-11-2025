#include <iostream>
using namespace std;

int main() {
  int user,ending,i=0;
  cout << "Enter a number: ";
  cin >> user;
  cout << "Enter a multi until: ";
  cin >> ending;
  for (int a = 1; a <= ending; a++) {
    i=i+user;
    cout << i << "\n";
  }

  return 0;
}
