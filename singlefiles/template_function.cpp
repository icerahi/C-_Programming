#include <iostream>
#include <string>

template <typename imran>
void swap(imran &a, imran &b)
{
    imran temp = a;
    a = b;
    b = temp;

    // std::cout << "a: " << a << "\t b: " << b << std::endl;
}

// void swap(int x, int y){}

/* void swap(std::string &a, std::string &b){
    std::string temp=a;
    a=b;
    b=temp;
} */

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "a: " << a << "\t b:" << b << std::endl;

    std::string first_name = "Imran";
    std::string last_name = "Hasan";

    swap(first_name, last_name);
    std::cout << "firstname:" << first_name << "\t last name: " << last_name << std::endl;
}