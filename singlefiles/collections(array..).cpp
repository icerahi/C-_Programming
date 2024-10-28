#include <iostream>
#include <string>
#include <limits>
using namespace std;


void print_array(int array[],int size){
        // cout << array<<endl;
        for (int i=0;i<size;i++){
            cout << array[i]<<"\t";
        }

}

int main()
{
    const int SIZE=100;
    int guess_list[SIZE];
    int count =0;

    for(int i=0; i<SIZE;i++){

    if(cin >> guess_list[i]) // return cin -> true of input worked
    {
        //INPUT WORKED  
        count++;
    }
    else{
        break;
    }

    }

    print_array(guess_list,count);
    cin.clear();
    // cin.ignore(1000,'\n');
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

    
}