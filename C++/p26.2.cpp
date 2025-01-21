#include <iostream>
using namespace std;

int main() {
  // Create an array of integers
  string myProducts[5] = {"lenovo","dell","hp"};
  
  // Loop through integers
  for (string product : myProducts) {
    
    if(product == "dell") {
        continue; // exit the loop once the product is found
    }
     cout << product << "\n";
  }
  return 0;
}
