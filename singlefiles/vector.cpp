#include<iostream>
#include<vector>

// use & to pass by reference
void print_vector(std::vector<int> &data){
    data.push_back(12);
    for ( int i=0; i<data.size();i++){
        std::cout << data[i] << '\t';
    }
    std::cout<< '\n';
}

int main(){

    std::vector<int> data={1,2,3};
    print_vector(data);
    print_vector(data);
    // data.push_back(10);
    // std:: cout << data[data.size()-1] << std::endl;
    // data.pop_back();
    // std::cout<< data.size()<<std::endl;
   
    
}