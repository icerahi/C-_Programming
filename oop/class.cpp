#include<iostream>

class User{
    std::string status="GOLD";
    
    public:
        std::string first_name;
        std::string last_name;
        std::string get_name(){
            return status;
        }
 };

int main(){
    User me;
    me.first_name="Imran";
    me.last_name="Hasan";
    
    std::cout << me.get_name()<<std::endl;

    return 0;
}