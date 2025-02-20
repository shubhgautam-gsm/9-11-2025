#include <iostream>
using namespace std;
 
enum Level {
  LOW,
  MEDIUM,
  HIGH
}; 

int main() {
  enum Level gamelevel = HIGH;
  cout << gamelevel;
  return 0;
}
