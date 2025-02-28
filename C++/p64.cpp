#include <iostream>
using namespace std;

// Corrected the function signature to return an int value
int add(int a, int b) {
    return a + b;
}

// Function to subtract
int sub(int a, int b) {
    return  a - b;
}

// Function to divide
int main() {
    // Using the add function correctly
    int jay = add(22, 10);  // 22 + 10 = 32
    int meet = add(12, 25); // 12 + 25 = 37

    cout << "jay: " << jay << endl; // Output jay value
    cout << "meet: " << meet << endl; // Output jay value
    return 0;
}
