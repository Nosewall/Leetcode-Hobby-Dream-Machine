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

    std::cout << "Max Calories : " << highestTotal << std::endl;
    inputFile.close();
    return 0;
}
