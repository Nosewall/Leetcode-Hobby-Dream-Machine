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


enum FileType{
    DIR,
    ENTRY
};


//DATA Structure to hold all files
class File {
public:
    File (FileType type, size_t size, const string &name): _type(type), _size(size), _name(std::move(name)){}
    void setParent(shared_ptr<File> parent){
        _parent = parent;
    }
    void addChild(shared_ptr<File> file, shared_ptr<File> parent){
        _children[file->getName()] = file;
        _children[file->getName()]->setParent(parent);
    }
    size_t getTotalSize() const {
        size_t size = 0;
        for( auto &child : _children){
            size += child.second->getTotalSize();
        }
        size += _size;
        return size;
    }
    FileType getType() const {
        return _type;
    }
    const std::string &getName() const {
        return _name;
    }
    shared_ptr<File> getParent() const{
        return _parent;
    }
    shared_ptr<File> getChild(const std::string &name) const {
        if(_children.find(name) != _children.end()){
            return _children.find(name)->second;
        }
        return nullptr;
    }
    const std::unordered_map<string, shared_ptr<File>> &getChildren() const {
        return _children;
    }
private:
    FileType _type;
    size_t _size;
    string _name;
    std::unordered_map<std::string, shared_ptr<File>> _children;
    shared_ptr<File> _parent = nullptr;
};



//ALGORITHM to create tree
shared_ptr<File> getFileSystem(ifstream &file){
    shared_ptr<File> root = std::make_shared<File>(DIR, 0, "/");
    string  str;
    getline(file, str);
    shared_ptr<File> parent = root;
    while(std::getline(file, str)) {
        if (str[0] != '$') {
            std::stringstream ss(str);

            FileType type = DIR;
            size_t size = 0;
            std::string name = "";
            if (str[0] == 'd') {
                ss >> name;
                ss >> name;
            } else {
                type = ENTRY;
                ss >> size;
                ss >> name;
            }
            parent->addChild(std::make_shared<File>(type, size, name), parent);
        } else if (str[2] == 'c') {
            std::string target = str.substr(5);
            if (target[0] == '.') {
                parent = parent->getParent();
            } else {
                parent = parent->getChild(target);
            }
        }
    }
    return root;
}

size_t part1(shared_ptr<File> filesystem) {
    vector<shared_ptr<File>> directories = {filesystem};
    size_t result = 0;
    for(size_t i = 0; i < directories.size(); i++) {
        auto total_size = directories[i]->getTotalSize();
        if(total_size <= 100000) {
            result += total_size;
        }
        for(const auto &child : directories[i]->getChildren()) {
            if(child.second->getType() == DIR) {
                directories.push_back(child.second);
            }
        }
    }
    return result;
}

size_t part2(shared_ptr<File> filesystem){
    size_t smallest_deletion = 30000000 - (70000000 - filesystem->getTotalSize());
    vector<shared_ptr<File>> directories = {filesystem};
    size_t min_valid = filesystem->getTotalSize();
    for(size_t i = 0; i < directories.size(); i++){
        auto total_size = directories[i]->getTotalSize();
        if(total_size >= smallest_deletion && total_size < min_valid){
            min_valid = total_size;
        }
        for(const auto &child : directories[i]->getChildren()){
            if(child.second->getType() == DIR){
                directories.push_back(child.second);
            }
        }
    }
    return min_valid;
}

int main() {
    ifstream input_file( "day7.txt" );
    auto filesystem = getFileSystem( input_file );
    cout << "Directory size to delete : " << part2(filesystem) << endl;
    return 0;
}