#include<iostream>

struct User{
    std::string first_name;
    std::string last_name;
    std::string get_status(){
        return status;
    }
    private:
        std::string status="Gold";
};

int main(){
    User me;
    me.first_name="Imran";
    me.last_name="Hasan";
    // me.status="single";

    std::cout<< me.get_status();
    return 0;
}