#include <iostream>
#include <fstream>
#include <vector>

int main()
{

    std::ifstream file("tacos.txt");
    // std::string input;

    // std::vector<std::string> names;

    // while(file >> input){
    //     names.push_back(input);
    // }
    // for(std::string name:names){
    //     std::cout << name <<std::endl;
    // }

    std::string line;
    std::vector<std::string> lines;

    while (getline(file,line))
    {
        lines.push_back(line);
    }

    std::cout << line << std::endl;

    for(std::string name:lines){
        std::cout<<name<<std::endl;
    }

    return 0;
}