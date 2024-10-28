#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::string filename;
    std::cout<< "What is the file name: ";
    std::cin >>filename;
https://www.youtube.com/watch?v=TsZAn2sUPuY
    std::ofstream file(filename,std::ios::app);

    if(file.is_open()){
        std::cout <<"Success"<< std::endl;
    }

    std::vector<std::string> names;
    names.push_back("imran");
    names.push_back("Hasan");
    names.push_back("Rahi");

    for(std::string name:names){
        file << name <<std::endl;
    }
}