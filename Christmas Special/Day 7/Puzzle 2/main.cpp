#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <tuple>
#include <set>
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
using std::set;



int main(){
    ifstream input("buffer.txt");
    string line;
    while(getline(input, line)){
        for(int i = 0; i < line.length(); i++){
            set<char> message;
            for(int j = 0; j < 14; j++){
                message.insert(line[i + j]);
            }
            if (message.size() == 14){
                cout << "14 unique characters ends at " << i + 14 << endl;
                break;
            }
        }

        }
    }