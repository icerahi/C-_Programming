#include<iostream>
#include<array>

using namespace std;

void print_stl_array(array<int,20> &data,int size){
    for(int i=0;i<size;i++){
        cout << data[i]<<'\t';
    }
}

int main(){
    array<int, 20> data={1,2,3};
    print_stl_array(data,3);
}