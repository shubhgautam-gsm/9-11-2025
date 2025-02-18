#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // User input and car list
    // string user = "ODI";
    string user;
    cout << "Enter car name: ";
    cin >> user;

    transform(user.begin(), user.end(), user.begin(), ::tolower); 
    vector<string> cars = {"ferari", "sizuki", "bmw", "odi","mercidize"};

    // Search for user car in the list
    for (size_t i = 0; i < cars.size(); i++) {
        cout << "Comparing: " << cars[i] << "\n";
        if (cars[i] == user) {
            cout << "Match found: " << cars[i] << "\n";
            cout << "Match at location: " << i+1 << "\n";
            break;
        }  
    }

    // // Sort cars in ascending order
    // sort(cars.begin(), cars.end());
    // cout << "\nCars in ascending order:\n";
    // for (const auto& car : cars) {
    //     cout << car << "\n";
    // }

    // // Sort cars in descending order
    // sort(cars.begin(), cars.end(), greater<string>());
    // cout << "\nCars in descending order:\n";
    // for (const auto& car : cars) {
    //     cout << car << "\n";
    // }

    return 0;
}


// __DATE__

// 23 apna
// 24 harry
// 25 wscube



//  c++    3 apna
//         2 harry
//         1 wscube

//         view high (100m  && 10year) || (100k &&  1sec & watch) ranking 

//         2 hour 7 rank avg 30min
//         2 hour 2k update  watch time


// cars={
//     color:'red',
//     size:'3feet',
// }

// cars['color']




// ['c','b','d','a']

// for()
//asc
// ['b','c','a','d'] 1
// ['b','a','c','d'] 2
// ['a','b','c','d'] 3



// UP  

// TIMING=1YEAR
// 10MIN   9MIN AVG

// (1M C++ SHRADHA && TIMING && WATCH_TIME)



// TIMING=10SEC
// 1HOUR 2MIN
// RANKING 10/6
// (10K HARRY  TIMING && WATCH_TIME)
