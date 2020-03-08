#ifndef USER_H
#define USER_H
#include <string>
#include <iostream>

using namespace std;

class User
{
    public:
        void displayUser();
        void spacer();

        User();
        User(string UserName);

        virtual ~User();
        string GetUserName();
        void SetUserName(string val);
    protected:
        string UserName;
    private:
};

#endif // USER_H
