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

tuple<string, string> getBothPairs(string inputLine, char delimiter){
    //std::tuple<std::string> pairs = ("sds", "ndshkaf");
    for(int i = 0; i < inputLine.length(); i++){
        if(inputLine[i] == delimiter){
            tuple<string, string> pairs = std::make_tuple(
                    inputLine.substr(0,i),
                    inputLine.substr(i + 1)
                    );
            return pairs;
        }
    }
}

bool doesPairContainTotalOverlap(int elf1Start, int elf1End, int elf2Start, int elf2End){
    if (elf1Start >= elf2Start && elf1End <= elf2End || elf2Start >= elf1Start && elf2End <= elf1End){
        return true;
    }
    return false;
}



int main(){
    int allTotalOverlap = 0;
    ifstream allPairs("clean.txt");
    string line;
    while(std::getline(allPairs, line)){
        tuple<string, string> pairs = getBothPairs(line, ',');
        tuple<string, string> elf1 = getBothPairs(get<0>(pairs), '-');
        tuple<string, string> elf2 = getBothPairs(get<1>(pairs), '-');
        int elf1Start = stoi(get<0>(elf1));
        int elf1End = stoi(get<1>(elf1));
        int elf2Start = stoi(get<0>(elf2));
        int elf2End = stoi(get<1>(elf2));
        if (doesPairContainTotalOverlap(elf1Start, elf1End, elf2Start, elf2End)){
            allTotalOverlap++;
        }
    }
    cout << "Total pairs that completely overlap : " << allTotalOverlap << endl;

    return 0;
}