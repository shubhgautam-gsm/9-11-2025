#include <iostream>
#include <vector> // Including the vector library
using namespace std;

int main() {
  // A vector with 3 elements dyanamic(vector)
  vector<string> cars = {"Volvo", "BMW", "Ford"};
  
  // Adding another element to the vector
  cars.push_back("Tesla");
  cars.push_back("Mercedez");

  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
