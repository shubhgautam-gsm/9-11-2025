#include <iostream>
using namespace std;

int main() {
  // Create an array of integers
  int myProducts[5] = {10, 20, 30, 40, 50};
  
  // Loop through integers
  for (int product : myProducts) {
    cout << product << "\n";
  }
  return 0;
}
