#include<iostream>

int main(){
    int fact;
    std::cout<< "Which number you want to know the factorial? :";
    std::cin>>fact;
    int factorial=fact;

    for(int i=factorial-1;i>1;i--){
        factorial*=i;
    }
    std::cout<<"factorial of "<<fact<<": "<<factorial<<std::endl;
}
// 5*4*3*2*1=120