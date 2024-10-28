#include<string>
#include<iostream>

int main()
{

    enum class Season{summer,spring,fall,winter};
    Season now=Season::winter;

    switch(now){
        case Season::summer:
            break;
        case Season::spring:
            break;
        case Season::fall:
            break;
        case Season::winter:
            std::cout << "Stay warm \n";
             break;
        default:
            break;
    }

    // enum season{summer,spring,fall,winter};
    // season now=winter;

    // switch(now){
    //     case summer:
    //         break;
    //     case spring:
    //         break;
    //     case fall:
    //         break;
    //     case winter:
    //         std::cout << "Stay warm \n";
    //          break;
    //     default:
    //         break;
    // }
    // int age;
    // std::cout << "What is your age?";
    // std::cin >> age;

    // switch(age){
    //     case 12:
    //     case 13:
    //         std::cout << "You age is 13 or 12. wow \n";
    //         break;
    //         // return 0;
    //     case 14:
    //         std::cout << "You are 14 \n";
    //         break;
    //         // return 0;
    //     default:
    //         std::cout << "Catch all \n";
    //         break;
    //         // return 0;
    // }
    return 0;
}