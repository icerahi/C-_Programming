#include<iostream>
#include<vector>

int main()
{
    std::vector<std::vector<int>>vector_grades={
        {1,2,3},
        {4,5,6},
        {7,8,9}};

    int grades[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}};


    for(int r=0;r<3;r++){

        for(int c=0;c<3;c++){
            std::cout << vector_grades[r][c]<<"\t";
        }
        std::cout <<"\n";
    }

    return 0;
}