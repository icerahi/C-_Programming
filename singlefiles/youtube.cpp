// #include <iostream>
// // #include <cmath>
// using std::cin;
// using std::cout;
// using std::endl;

// // double power(double,int); // function declaration

// double power(double base, int exponent) // function defination
// {
//     double result = 1;
//     for (int i = 0; i < exponent; i++)
//     {
//         result = result * base;
//     }
//     return result;
// }

// void printPow(double base, int exponent){
//     double result=power(base,exponent);
//     cout << base << " raise to the " << exponent << " power is " << result <<endl;
// }

// int main()
// {
//     double base;
//     int exponent;
//     cout << "What is the base?: ";
//     cin >>base;
//     cout << "What is the exponent?: ";
//     cin >> exponent;
//     printPow(base,exponent);

// }

// integral data time

#include<iostream>
#include<climits>
using std::cout ;

// int main()
// {
//     short a;
//     int b;
//     long c;
//     long long d;

//     //short <=int <=long <=long long

//     unsigned short aa;
//     unsigned int bb;
//     unsigned long cc;
//     unsigned long long dd;

//     cout << UINT16_MAX << std::endl;

//     int x=999999999;

// }
// int main()
// {
//    unsigned char x=130;
//    cout << (int)x<< std::endl;

//    cout << "Imran\\vHasan\" hasan\"\0Rahi"<<std::endl;

//    bool pizza_is_good= 0;
//    cout << std::boolalpha<<pizza_is_good<<std::endl;

//    if(pizza_is_good) cout << "Pizza is good"<<std::endl; else cout<<"pizza is bad"<<std::endl;
// }

// #include<float.h>
// int main()
// {
//     long double a=10.0/3;
//     a=a*1000000000000;
//     double b;
//     long double c;

//     //7.7*1000=77000
//     cout << std::fixed<< a<<std::endl;
//     cout << LDBL_DIG <<std::endl;

// }

// constant
// #define X 10
// int main(){
//     const int x=5;
    
//     enum { y=100 };
//     cout << X;
 
// }


// #include<iostream>

// #include<cmath>

// int main(){
//     std::cout << remainder(10,3.25)<< std::endl;
//     std::cout << fmod(10,3.25)<< std::endl;
//     std::cout << fmax(10,3.25)<< std::endl;
//     std::cout << fmin(10,3.25)<< std::endl;
//     std::cout << ceil(fmin(10,3.25))<< std::endl;
//     std::cout << round(fmin(10,3.25))<< std::endl;
//     std::cout << floor(fmin(10,3.25))<< std::endl;
//     std::cout << trunc(fmin(10,3.25))<< std::endl;
//     std::cout << trunc(-1.25)<< std::endl;
//     std::cout << floor(-1.25)<< std::endl;
// }

#include<iostream>
#include<string>

using std::string;
using std::cout;

int main(){
    string greeting="Hello ";
    string complete_greeting=greeting+ "there";
    complete_greeting+="!";
    cout << complete_greeting << std::endl;
    cout << complete_greeting.length()<<std::endl;
    //method == member function == function attached to objects;

    string first_name;
    string last_name;
    cout<< "What is your firstname ? : ";
    std::cin>>first_name;
    cout<<"What is your last name? : ";
    std::cin>>last_name;
    string fullname=first_name+last_name;
    fullname+="!";
    cout <<"Your name is "<< fullname+" biday!!"<<std::endl;
}