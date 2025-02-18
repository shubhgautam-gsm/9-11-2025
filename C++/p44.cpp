#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },// rows 2 columns 4 
    { "E", "F", "G", "H" }
  };
  
  cout << letters[0][2];
  return 0;
}
