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



void RemoveWordFromLine(string &line, const string &word)
{
    auto n = line.find(word);
    if (n != string::npos)
    {
        line.erase(n, word.length());
    }
}


int main(){
    ifstream input("crane.txt");
    string line;
    vector<vector<char>> bins;
    vector<vector<int>> instructions;
    bins.resize(9);
    cout << "Hello" << endl;
    while(getline(input, line)){
        //If this is the bins to parse
        if(line[0] == '['){
            int bin = -1;
            for (int i = 0; i < line.length(); i+=4){
                bin += 1;
                if(line[i] != ' '){
                    bins[bin].push_back(line[i + 1]);
                }
            }

        } //else we're looking for instructions
        else{
            if(line[0] == 'm'){
                //New instruction found
                vector<int> newInstructions;
                RemoveWordFromLine(line, "move");
                RemoveWordFromLine(line, "from");
                RemoveWordFromLine(line, "to");

                //Now tokenize into integers base on delimeter
                size_t pos = 0;
                string token;
                cout << line << endl;
                for(int i = 1; i < line.length(); i++){
                    if(line[i+1] != ' '){
                        int first = stoi(line.substr(i, i+2));
                        newInstructions.push_back(first);
                        i = i + 4;
                    } else {
                        int first = stoi(line.substr(i, i+1));
                        newInstructions.push_back(first);
                        i = i + 3;
                    }
                    if(line[i+1] != ' '){
                        int first = stoi(line.substr(i, i+2));
                        newInstructions.push_back(first);
                        i = i + 4;
                    } else {
                        int first = stoi(line.substr(i, i+1));
                        newInstructions.push_back(first);
                        i = i + 3;
                    }
                    if(line[i+1] != ' '){
                        int first = stoi(line.substr(i, i+2));
                        newInstructions.push_back(first);
                        i = i + 4;
                    } else {
                        int first = stoi(line.substr(i, i+1));
                        newInstructions.push_back(first);
                        i = i + 3;
                    }
                    instructions.push_back(newInstructions);
                }
                cout << "Gosh" << endl;
            }
        }
    }
    cout << "bin test" << endl;
    //Reverse all the bins please
    for(int i = 0; i < bins.size(); i++){
        std::reverse(bins[i].begin(), bins[i].end());
        cout << "Test" << endl;
    }

    cout << "bin test" << endl;
    cout << instructions.capacity() << endl;
    cout << instructions.size() << endl;

    //Now I have all the stacks stored, and all the instructions stored in a way that I can read them. Phew!
    for(int i = 0; i < instructions.size(); i++){
        vector<int> currentInstructions = instructions[i];
        vector<char> cratesBeingMoved;
        for(int numberOfBoxesToMove = 0; numberOfBoxesToMove < currentInstructions[0]; numberOfBoxesToMove++){
            cratesBeingMoved.push_back(bins[currentInstructions[1] - 1].back());
            bins[currentInstructions[1] - 1].pop_back();
        }
        for(int numberOfBoxesToMove = 0; numberOfBoxesToMove < currentInstructions[0]; numberOfBoxesToMove++){
            bins[currentInstructions[2] - 1].push_back(cratesBeingMoved.back());
            cratesBeingMoved.pop_back();
        }
        cout << "test" << endl;
    }
    cout << "FINAL TOPS : " << endl;
    //Print top of each stack after bins rearranged
    for(int i = 0; i < bins.size(); i++){
        cout << bins[i].back();
    }


    return 0;
}