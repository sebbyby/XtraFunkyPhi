#include "User.h"

User::User()
{
    UserName = "Username";
}

User::~User()
{
    //dtor
}

User::User(string name)
{
    User::UserName = name;
}

void User::SetUserName(string val) { UserName = val; }

string User::GetUserName() { return UserName; }

void User::spacer()
{
    int x = 100;
    char index = '-';
    cout << endl;
    for (int i = 0; i < x; i++){cout << index;}
    cout << endl << endl;
}

void User::displayUser()
{
    spacer();
    cout << "Username => " << GetUserName() << endl;
    spacer();
}
