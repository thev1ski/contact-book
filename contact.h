#ifndef CONTACT_H
#define CONTACT_H




#include <string>

class Contact
{

public:
    Contact(std::string Contact_name, std::string phone_number)
    {
        name = Contact_name;
        number = phone_number;
    }

    std::string getName() const {return name;}
    std::string getNumber() const {return number;}
private:
    std::string name;
    std::string number;
};


#endif // CONTACT_H