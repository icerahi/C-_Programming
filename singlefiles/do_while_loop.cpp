#include<iostream>
#include<string>

int main(){

    std::string password="rahi";
    std::string guess;

    do{
        std::cout << "Guess the password: ";
        std::cin >> guess;

    }while(password!=guess);

    std::cout<< "Done \n";
}