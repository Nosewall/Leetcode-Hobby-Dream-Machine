#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <tuple>
#include <memory>
#include <unordered_map>
#include <sstream>

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
using std::shared_ptr;

vector<vector<int>> forest(99);

bool isTreeVisibleNorth(int x, int y){
    if(y == 0) return true;

    int height = forest[y][x];
    for(int i = y-1; y >= 0; y--){
        if (forest[i][x] >= height){
            return false;
        }
    }
    return true;
}

bool isTreeVisibleEast(int x, int y){
    if (x == forest[y].size() - 1) return true;
    int height = forest[y][x];
    for(int i = x + 1; x < forest[y].size(); x++){
        if(forest[y][i] >= height){
            return false;
        }
    }
    return true;
}

bool isTreeVisibleSouth(int x, int y){
    if(y == forest.size() - 1) return true;
    int height = forest[y][x];
    for(int i = y + 1; y <= forest.size() - 1; y++){
        if (forest[i][x] >= height){
            return false;
        }
    }
    return true;
}

bool isTreeVisibleWest(int x, int y){
    if (x == 0) return true;
    int height = forest[y][x];

    for(int i = x - 1; i >= 0; i--){
        if (forest[y][i] >= height){
            return false;
        }
    }

    return true;
}

bool isTreeVisible(int x, int y){
    return isTreeVisibleEast(x, y) || isTreeVisibleNorth(x, y) || isTreeVisibleSouth(x, y) || isTreeVisibleWest(x, y);
}

int main() {
    ifstream input( "day8.txt" );
    std::string line;
    int forestIndex = 0;
    //Create data structure to hold the forest.
    while(getline(input, line)){
        for (int i = 0; i < line.length(); i++){
            forest[forestIndex].push_back(stoi(line.substr(i, 1)));
        }
    }

    //Count number of visible trees in the forest
    int totalVisibleTrees = 0;
    for(int y = 0; y < forest.size(); y++){
        for(int x = 0; x < forest[y].size(); x++){
            if (isTreeVisible(x, y)) totalVisibleTrees++;
        }
    }

    cout << "Total Visible Trees in the forest : " << totalVisibleTrees << endl;

    return 0;
}