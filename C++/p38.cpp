#include <iostream>
#include <string>
using namespace std;

int main() {
  // cars={}
  string cars[9];
    //  add after need cars[size] becuase not before
  cars[0] = "Volvo";
  cars[1] = "BMW";
  cars[2] = "Ford";
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  return 0;
}
