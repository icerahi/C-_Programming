#include<string>
#include<iostream>

int main(){

    int answer=11;
    int guess;
    std::cin >> guess;
    // int points=0;
    // guess==answer?points=10:points;
    // std::cout<<"You got: "<<points<<" points";

    guess==answer?std::cout<< "Good job":std::cout << "BAD JOB";
}