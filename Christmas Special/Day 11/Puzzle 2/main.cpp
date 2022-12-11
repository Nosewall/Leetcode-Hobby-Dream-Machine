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


int main() {
    ifstream input_file( "day7.txt" );
    auto filesystem = getFileSystem( input_file );
    cout << "Directory size to delete : " << part2(filesystem) << endl;
    return 0;
}