#include <iostream>
#include <fstream>
#include <algorithm>
#include <cctype>
#include <locale>
#include <vector>

char getOverlapFromTwoStrings(std::string s1, std::string s2){
    for (int i = 0; i < s1.length(); i++){
        for(int j = 0; j < s1.length(); j++){
            if(s1[i] == s2[j]){
                return s1[i];
            }
        }
    }
}

int getPriorityFromChar(char check){
    int priority = check;
    if (priority < 91) {
        priority -= 64;
        priority += 26;
    } else {
        priority -= 96;
    }
    return priority;
}


int main(){
    int totalPriority = 0;
    std::ifstream strategyGuide("rucksack.txt");

    std::vector<std::string> AllRucksacks;
    std::vector<std::string> leftPouches;
    std::vector<std::string> rightPouches;

    std::string line;
    while(std::getline(strategyGuide, line)){

        AllRucksacks.push_back(line);
        leftPouches.push_back(line.substr(0, line.length() / 2));
        rightPouches.push_back(line.substr(line.length() / 2));

        char overlap = getOverlapFromTwoStrings(leftPouches.back(), rightPouches.back());
        int priority = getPriorityFromChar(overlap);
        totalPriority += priority;
    }
    printf("The total priority of all of the misplaces items is : %d", totalPriority);
    return 0;
}