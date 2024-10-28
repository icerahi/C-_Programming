#include<iostream>
#include<string>

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

    std::cout <<"a: "<<a<<"\t b: "<<b<<std::endl;
}

// void swap(int x, int y){}

void swap(std::string &a, std::string &b){
    std::string temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=10;
    int b=20;

    std::string first_name="Imran";
    std::string last_name="Hasan";

    swap(first_name,last_name);
    swap(a,b);

    std::cout <<"firstname:" <<first_name<<"\t last name: "<<last_name<<std::endl;

    std::cout <<"a: "<< a <<"\t b:"<<b<<std::endl;
}