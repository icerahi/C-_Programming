#include<iostream>

// std::string input(){
//     std::string value;
//     getline(std::cin,value);
//     return value;
// }
// int main(){
//     std::string name;
//     std::cout << "WHat is your name? : ";
//     name=input();
//     std::cout << "Your name is : "<<name.length()<<std::endl;
//     std::cout << "Your name is : "<<name.size()<<std::endl;
// }

int main(){
    std::string greeting="hello";
    greeting.append(" There!");
    greeting+=" IMran";
    greeting.insert(greeting.length()," Hasan");
    // greeting.erase(greeting.length()-5,5);
    greeting.erase(greeting.length()-6);

    greeting.pop_back();

    greeting.replace(greeting.find('a'),5,"Hasan");

    std::string text="What is up?";

    std::cout << text.substr(5,2) << std::endl; // get part of a text!
     
    std::cout << greeting.find_first_of("z")<<std::endl;
    unsigned long x=-1;
    std::cout << x << std::endl;

    if(greeting.find_first_of("z")== x) std::cout << "NOT FOUND" << std::endl;

    if (text=="What is up?") std::cout << "Equal"<<std::endl;
    if (text.compare("What is up?")==0) std::cout << "Equal"<<std::endl;

    std::cout << greeting << std::endl;
}