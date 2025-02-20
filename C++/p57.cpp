#include <iostream>
using namespace std;
 
enum Level {
  LOW='x',
  MEDIUM='y',
  HIGH='z',
}; 

int main() {
  enum Level gamelevel = HIGH;
  cout << gamelevel;
  return 0;
}
