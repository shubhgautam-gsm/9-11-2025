#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      cout << letters[i][j] << "\n";
    // i=0 j=0,1,2..
    // cout << letters[0][0] << "\n";
    // cout << letters[0][1] << "\n";
    // cout << letters[0][2] << "\n";
    // cout << letters[0][3] << "\n";

    // i=1 j=0,1,2..
    // cout << letters[1][0] << "\n";
    // cout << letters[1][1] << "\n";
    // cout << letters[1][2] << "\n";
    // cout << letters[1][3] << "\n";
    }

  }
  return 0;
}
