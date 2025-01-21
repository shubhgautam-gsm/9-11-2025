#include <iostream>
using namespace std;

int main() {
    int user;
    cout << "Enter a number: ";
    cin >> user;
    int mult;
    cout << "Enter the multiplier: ";
    cin >> mult;
  // for (int i = 1; i <= user; i *= mult) {
  for (int i = 1; i <= user; i = i * mult) {
    cout << i << "\n";
  }

  return 0;
}
