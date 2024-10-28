#include<string>
#include<iostream>

int main(){

    std::string sentence= "I have a dream so big and high";
    for(int i=0; i< sentence.size();i++){
        if(sentence[i]==' '){
            continue;
        }
        std::cout << sentence[i]<<std::endl;
    }
}