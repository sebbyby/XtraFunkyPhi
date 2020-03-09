#include "User.h"

User::User() /// User Constructor
{
    UserName = "Username";
}

User::~User() /// User Destructor
{
    cout << "A user has been Destroyed" << endl;
}

User::User(string name) /// Overloaded Constructor
{
    User::UserName = name;
}

void User::SetUserName(string val) { UserName = val; }  /// Setter function for UserName

string User::GetUserName() { return UserName; } /// Getter function for UserName

void User::spacer() /// Function creating spacing between functions
{
    int x = 100;    /// Length of the characters printed
    char index = '-';   /// Selected character to print
    cout << endl;   /// End line
    for (int i = 0; i < x; i++){cout << index;} /// For loop to print out the selected character for a selected length
    cout << endl << endl;   /// End line twice
}

void User::displayUser()    /// Display function
{
    spacer();   /// Calling the spacer function
    cout << "Username => " << GetUserName() << endl;    /// Getting & printing out the Username
    spacer();   /// Calling the spacer function
}

void User::playSong(Song* s) /// Play song function
{
    cout<< User::UserName << " is ";
    s->Play(); /// play the song passed through by reference
}

void User::rateSong(Song* s,float r) ///
{
    if (s->Rate(r)) /// rate the song r value and check if succeeded
    {
        cout << User::UserName << " rated " << s->Getname() << " " << r << "/5" << endl;
    }
}
