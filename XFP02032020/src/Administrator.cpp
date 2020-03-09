#include "Administrator.h"

Administrator::Administrator()
{
    //ctor
}

Administrator::~Administrator()
{
    //dtor
}

void Administrator::displayUser()    /// Administrator Display function
{
    spacer();   /// Calling the spacer function
    cout << "Administrator Username => " << GetUserName() << endl; /// Getting the User Name of the Administrator
    spacer();   /// Calling the spacer function
}

void Administrator::deleteUser(User *u)
{
    u->~User();
}
