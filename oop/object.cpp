#include<iostream>
#include<vector>

class User{
    std::string status="GOLD";
    
    public:
        std::string first_name;
        std::string last_name;
        std::string get_name(){
            return status;
        }
 };


int add_user_if_not_exists(std::vector<User> &users,User user){

    for(int i=0;i<users.size();i++){
        if(users[i].first_name == user.first_name && users[i].last_name == user.last_name){
            return i;
        }  
    }
    users.push_back(user);
    return users.size()-1;
}

int main(){

    std::vector<User> users;
    // users.push_back(user);
 
    User user1,user2,user3;
    user1.first_name="Imran";
    user1.last_name="hasan";
    user2.first_name="Rahi";
    user2.last_name="Khan";

    user3.first_name="Emon";
    user3.last_name="Khan";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.first_name="Emo";
    user.last_name="Khan";

    std::cout <<add_user_if_not_exists(users,user)<<std::endl;

    std::cout << users.size()<<std::endl;

    return 0;
}