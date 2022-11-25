#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numQueries;
    cin >> numQueries;
    int totalPrice = 0;

    for(int i = 0; i < numQueries; ++i){
        string aptType; cin >> aptType;
        int numBed, numBath;
        cin >> numBed >> numBath;
        int price = 0;
        price += (numBed * 50) + (numBath * 100);
        if ( aptType == "apartment"){
            price += 100;
        }
        totalPrice += price;
    }
    cout << totalPrice << endl;
    return 0;
}