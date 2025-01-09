#include <iostream>
using namespace std;

int main() {
  // Outer loop
  for (int i = 1; i <= 12; ++i) {
    cout << "Outer: " << i << "\n";  // Executes 2 times
    
    // Inner loop
    for (int j = 1; j <= 30; ++j) {
      cout << " Inner: " << j ;  // Executes 6 times (2 * 3)
    }
  }
  return 0;
}
