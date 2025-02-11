#include <iostream>
#include <string>
using namespace std;

int main() {
  // Create an array of strings

  string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    // added before so no need to give size i.e cars[5]
  // Loop through strings
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
