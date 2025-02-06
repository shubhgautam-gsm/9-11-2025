#include <iostream>
using namespace std;

int main() {
  // Create an array of integers
  string passcrk_poss[] = {"abc","bca","cba","bac","cab","acb"};
  string user_pass="bac";
  int i=0;
  // Loop through integers
  for (string hacktry : passcrk_poss) {
    i++;
        cout << "try no " <<  i << ' ' << hacktry << "\n";
    if(hacktry==user_pass){
        cout << "finally pass crack at try no " <<  i << ' ' << hacktry << "\n";
        
    }

  }
  return 0;
}
