#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Representing a JSON-like object
    map<string, vector<string>> jsonLike = {
        {"lenovo", {"rz1", "rz2", "rz3"}},
        {"dell", {"d1", "d2", "d3"}},
        {"hp", {"h1", "h2"}}
    };

    // Accessing the JSON-like structure
    for (const auto& pair : jsonLike) {
        cout << pair.first << ": ";
        for (const string& model : pair.second) {
            cout << model << " ";
        }
        cout << endl;
    }

    return 0;
}


Laptop.hp[1]