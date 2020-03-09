#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "User.h"


class Administrator : public User   /// Inheritance Relationship
{
    public:
        Administrator();    /// Administrator Constructor
        virtual ~Administrator();   /// Administrator Destructor

        Administrator(string n);   /// Overloaded Constructor

        void displayUser();    /// Administrator Display function
        void deleteUser(User *u);

    protected:

    private:


};

#endif // ADMINISTRATOR_H
