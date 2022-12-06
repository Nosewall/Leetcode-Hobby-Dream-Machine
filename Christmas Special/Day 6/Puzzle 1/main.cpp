#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <tuple>
using std::string;
using std::tuple;
using std::ifstream;
using std::cout;
using std::cin;
using std::endl;
using std::get;
using std::stoi;
using std::getline;
using std::vector;



int main(){
    ifstream input("buffer.txt");
    string line;
    vector<char> buffer;
    while(getline(input, line)){
        for(int i = 0; i < line.length(); i++){
            char one = line[i];
            char two = line[i + 1];
            char three = line[i + 2];
            char four = line[i + 3];
            if(one != two && one != three && one != four && two != three && two != four && three != four){
                cout << i << endl;
                cout << (i + 3) << endl;
                break;
            }
        }
    }
    return 0;
}