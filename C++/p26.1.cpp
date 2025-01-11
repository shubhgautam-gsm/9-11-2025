#include <iostream>
using namespace std;

int main() {
  // Create an array of integers
  string myProducts[5] = {"lenovo","dell","hp"};
  
  // Loop through integers
  for (string product : myProducts) {
     cout << product << "\n";
    if(product == "dell") {
        cout <<"found "<< product << "\n";
        break; // exit the loop once the product is found
    }
    
  }
  return 0;
}
