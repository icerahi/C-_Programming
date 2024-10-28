#include<iostream>
#include<vector>

void do_something(const int data[]){

}  

void print_array(const int data[],int size){
    for(int i=0;i<size;i++){ 
        // data[i]++;
        std::cout << data[i]<<"\t";
    }
    do_something(data);
}

int main(){
    int data[]={1,3,4};
    print_array(data,3);
    std::cout <<data[0];
    return 0;
}