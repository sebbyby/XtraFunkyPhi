#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "User.h"


class Administrator : public User
{
    public:
        Administrator();
        virtual ~Administrator();

        void deleteUsers();

    protected:

    private:
};

#endif // ADMINISTRATOR_H
