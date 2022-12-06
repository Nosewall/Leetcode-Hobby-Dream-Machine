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

char getOverlapFromThreeStrings(std::string s1, std::string s2, std::string s3){
    for (char i : s1){
        for(char j : s2){
            for(char k : s3){
                if(i == j && i == k){
                    return i;
                }
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
    std::ifstream strategyGuide("RayInputDay3.txt");

    std::vector<std::string> AllRucksacks;
    std::vector<std::string> leftPouches;
    std::vector<std::string> rightPouches;

    std::string line;
    while(std::getline(strategyGuide, line)){

        AllRucksacks.push_back(line);
    }
    for (int i = 0; i < AllRucksacks.size(); i += 3){
        char badge = getOverlapFromThreeStrings(AllRucksacks[i], AllRucksacks[i + 1],
                                                AllRucksacks[i + 2]);
        int priority = getPriorityFromChar(badge);
        totalPriority += priority;
    }
    printf("The total priority of all of the badges is : %d", totalPriority);
    return 0;
}