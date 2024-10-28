#include <iostream>
#include <vector>


// we can't assign static variable data inside the class, have to assign outside
class User
{
    static int user_count;
    std::string status = "GOLD";

public:
    static int get_user_count(){
        return user_count;
    }

    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
        return status;
    }

    void set_status(std::string status)
    {
        if (status == "single" || status == "married")
        {
            this->status = status;
        }
        else{
            this->status="No status";
        }
    }

    User()
    {   
        user_count++;
        std::cout << "Contructor \n";
    }

    User(std::string first_name, std::string last_name, std::string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        user_count++;
    }

    ~User()
    {
        std::cout << "Destructor \n";
        user_count--;
    }
};

int User::user_count=0;

int add_user_if_not_exists(std::vector<User> &users, User user)
{

    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == user.first_name && users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    // User me;
    User user,user1,user2,user3,user4;
 
    std::cout << User::get_user_count()<< std::endl;
    user.~User(); //deleting user - calling destructor
    std::cout <<User::get_user_count()<<std::endl;
    return 0;
} 