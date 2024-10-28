#include<iostream>
#include<string>

int main(){
    std::string answer="imran";
    int age_answer=24;

    std::string guess;
    std::cout << "Gues my name!: ";
    std::cin>>guess;

    int age_guess;
    std::cout << "Guess my age!";
    std::cin >> age_guess;
    if(guess==answer || age_answer==age_guess){
        std::cout << "You got right answer!\n";
    }
    return 0;
}

// int main(){
//     int age;
//     std::cout << "How old are you? :" << std::endl;
//     std::cin >> age;
//     if(age<14){
//         std::cout << "You are not old enough \n";
//         return -1;
//     }
//     else if(age <19){
//         std::cout << "You are almost 19 \n";
//     }
//     else{
//         std::cout << "False\n";
//     }
//     std::cout << "ALways";
//     return 0;
// }