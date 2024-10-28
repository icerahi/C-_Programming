#include <iostream>
#include <vector>
#include <array>


void test(int data[]){
    
}

int main()
{
    int data[] = {1, 2, 3, 4, 5, 6};
    std::vector<int>vector={10,20,30,40,50};
    std::array<int,10>stl_array={50,40,30,20,10};
    for(int n : data){ //joss josss
        std:: cout <<n<<"\n";
    }

    for (int n:vector){
        std::cout << n<<"\n";
    }
    for(int n:stl_array){
        std::cout <<n <<'\t';
    }

    // for (int i = 0; i < 6; i++)
    // {
    //     std::cout << data[i] << std::endl;
    // }
}