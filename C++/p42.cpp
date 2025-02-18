#include <iostream>
using namespace std;

int main() {
  // An array storing different ages
  int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
  float avg, sum = 0;
  int i;
  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);
  // Loop through the elements of the array
  for (int age : ages) {
    sum += age;
  }
  // Calculate the average by dividing the sum by the length
  avg = sum / length;

  // Print the average
  cout << "The average age is: " << avg << "\n";

  return 0;
}
//first way
// Pradipsinh = 50000
// Pradipsinh =50000 +5000
// Pradipsinh = 55000+5000
// print(Pradipsinh)

//second way
// Pradipsinh = 50000
// Pradipsinh = Pradipsinh + 5000
// Pradipsinh = Pradipsinh + 5000
// print(Pradipsinh)

// third way
// Pradipsinh = 50000
// Pradipsinh += 5000
// Pradipsinh += 5000
// print(Pradipsinh)

// if this way
// Pradipsinh = 50000
// Pradipsinh = 5000
// Pradipsinh = 6000
// print(Pradipsinh) 6000 print

// user=...  1 how are you 2 where are you
// a='jay'
// a='jay'+user
// a='jay'+user

// print(a) // jay how are you jay where are you

// laptop  40000 red
// mobile 40000 green



// 12000 40000 2000

// 18000 18000 18000