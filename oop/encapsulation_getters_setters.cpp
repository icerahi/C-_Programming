#include <iostream>
#include <vector>

class User
{
    std::string status = "GOLD";

public:
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
        std::cout << "Contructor \n";
    }

    User(std::string first_name, std::string last_name, std::string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
    }

    ~User()
    {
        std::cout << "Destructor \n";
    }
};

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
    User user("imran","hasan","married");
    user.set_status("single");
    std::cout << user.get_status() << std::endl;
    return 0;
}