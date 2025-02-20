#include <iostream>
using namespace std;
 
enum Level {
  LOW=11,
  MEDIUM=12,
  HIGH=13,
}; 

int main() {
  enum Level gamelevel = HIGH;
  cout << gamelevel;
  return 0;
}
