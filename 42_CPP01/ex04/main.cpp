#include <iostream>
#include <fstream>

void stringReplace(std::string &line, std::string toSearch, std::string toReplace)
{
    size_t pos = line.find(toSearch);
    while (pos != std::string::npos) {
        line.erase(pos, toSearch.size());
        line.insert(pos, toReplace);
        pos = line.find(toSearch, pos + toReplace.size());
    }
}
int main(int argc, char **argv) {
    if (argc < 4) {
        std::cout << "Error: Invalid number of argument\'s" << std::endl;
        return (1);
    }
    std::ifstream file(argv[1]);
    if (file.is_open()) {
        std::string content;
        std::string line;
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        while (std::getline(file, line)) {
            content += line + "\n";
        }
        stringReplace(content, s1, s2);
        std::string fileName = std::string(argv[1]) + ".replace";
        std::ofstream toExport(fileName.c_str());
        if (toExport.is_open()) {
            toExport << content;
            toExport.close();
        } else {
            std::cout << "Error: can't create " << argv[1] << " !" << std::endl;    
        }
        file.close();
    } else {
        std::cout << "Error: can't open file !" << std::endl;
        return (1);
    }
    return (0);
}