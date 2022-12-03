#include <iostream>
#include <fstream>
#include <algorithm>
#include <cctype>
#include <locale>
#include <vector>

int getScoreBasedOnPair(char opponent, char you){
    if (opponent == 'A'){
        if (you == 'X'){
            return 4;
        } else if (you == 'Y'){
            return 8;
        } else if (you == 'Z'){
            return 3;
        }
    }
    else if (opponent == 'B'){
        if (you == 'X'){
            return 1;
        } else if (you == 'Y'){
            return 5;
        } else if (you == 'Z'){
            return 9;
        }
    }
    else if (opponent == 'C'){
        if (you == 'X'){
            return 7;
        } else if (you == 'Y'){
            return 2;
        } else if (you == 'Z'){
            return 6;
        }
    }
}

int main(){
    int totalScore = 0;
    std::vector<char> opponentMoves;
    std::vector<char> yourMoves;
    std::ifstream strategyGuide("RPS.txt");
    std::string line;
    while(std::getline(strategyGuide, line)){
        opponentMoves.push_back(line[0]);
        yourMoves.push_back(line[2]);
        totalScore += getScoreBasedOnPair(line[0], line[2]);
    }
    printf("Your final score following the strategy is : %d", totalScore);
    return 0;
}