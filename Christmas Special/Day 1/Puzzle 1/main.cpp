#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("input.txt");
    std::string line;
    while(std::getline(inputFile, line)){
        std::cout << line << std::endl;
    }
    inputFile.close();
    return 0;
}
