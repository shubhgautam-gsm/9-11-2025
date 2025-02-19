#include <iostream>
#include <string>
using namespace std;

int main() {
    // accept multiple data types i.e int,string 
  struct {
    int myNum;
    float percentage;
    string myString;
  } st;

  st.myNum = 1;
  st.myString = "Hello World!";
  st.percentage = 99.99;

  cout << st.myNum << "\n";
  cout << st.myString << "\n";
  cout << st.percentage << "\n";
  return 0;
}
