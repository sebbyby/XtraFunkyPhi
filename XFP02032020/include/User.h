#ifndef USER_H
#define USER_H
#include <string>
#include <iostream>
#include "Song.h"


using namespace std;

class User
{
    public:
        void displayUser(); /// Display Function for the User
        void spacer();  /// Display spacer function

        User();     /// Constructor
        User(string UserName);  /// Overloaded Constructor

        virtual ~User();    /// Virtual Destructor
        string GetUserName();   /// UserName Getter function
        void SetUserName(string val);   /// UserName Setter function
        void playSong(Song* s);
        void rateSong(Song* s,float r);
    protected:
        string UserName;    /// User name
    private:
};

#endif // USER_H
