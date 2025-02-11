#include <iostream>
using namespace std;

int main() {
  int myNumbers[] = {10, 20, 30, 40};
  int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
  cout << getArrayLength;
  return 0;
}
// MYNUMBERS= 4   MYNUMBERS[ANYINDEX]=1
//5/1 = 4
 