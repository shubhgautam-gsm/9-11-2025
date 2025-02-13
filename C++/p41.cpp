#include <iostream>
using namespace std;

int main() {
  int myNumbers[] = {10, 20, 30, 40,50};
  int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
  cout << getArrayLength;
  return 0;
}
//  int size is 4 bytes of each index then 4x5 bytes 20 bytes 
// so need to divide each index by total size
// long stores 8 to 12 bytes
// so conculsion divide total size of each data type to same

// x
// MYNUMBERS= 4   MYNUMBERS[ANYINDEX]=1
//5/1 = 4
 