#include <iostream>
#include <fstream>
#include <algorithm>
#include <cctype>
#include <locale>
#include <vector>


int main() {
    int currentTotal = 0;
    std::vector<int> allTotals;
    std::ifstream inputFile("input.txt");
    std::string line;
    while(std::getline(inputFile, line)){
        if ( line == ""){
            allTotals.push_back(currentTotal);
            currentTotal = 0;
        } else {
            int snak;
            snak = std::stoi(line);
            currentTotal += snak;
        }
    }
    sort(allTotals.begin(), allTotals.end());
    int highestTotal = allTotals.back();
    allTotals.pop_back();
    int secondHighestTotal = allTotals.back();
    allTotals.pop_back();
    int thirdHighestTotal = allTotals.back();

    std::cout << "Top 3 calories : " << highestTotal + secondHighestTotal + thirdHighestTotal << std::endl;
    inputFile.close();
    return 0;
}
