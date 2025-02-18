#include <iostream>
using namespace std;

int main() {
  string letters[2][2][2] = {
    {
      { "A", "B" },// [0][0][0] [0][0][1]
      { "C", "D" } // [0][1][0]  [0][1][1]
    },
    {
      { "E", "F" }, // [1][0][0] [1][0][0]
      { "G", "H" }  // [1][1][0] [1][1][1]
    }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 24; k++) {
        cout << letters[i][j][k] << "\n";
      }
    }
  }
  return 0;
}
// 1 yy = 12 mm  1  m=30 dd  = 24 hh