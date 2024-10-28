#include<iostream>
#include<fstream>
#include<vector>




int main(){
    std::cout << "What is the file name: ";

    std::string filename;

    std::cin >> filename;

    std::ofstream file(filename,std::ios::app);


    if(file.is_open()){
        std::cout << "Success!";
    }
    
    std::vector<std::string> names;
    names.push_back("amar");
    names.push_back("sonar");
    names.push_back("Bangla");

    for(std::string name:names){
        file << name <<std::endl;
    }
    return 0;


}