#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H


#include <vector>
#include "contact.h"
#include <cstddef>

class contactbook
{
public:
    void addContact(const Contact& person) {
        contacts.push_back(person);
    }

    bool removeContact(int index) {
        if (index < 0 || static_cast<std::size_t>(index) >= contacts.size())
        {
            return false;
        }
        contacts.erase(contacts.begin() + index);
        return true;
    }

    std::size_t contact_size_cout() const {
        return contacts.size();
    }

    const std::vector<Contact>& getContacts() const
    {
        return contacts;
    }

    std::vector<Contact> findContacts(const std::string& query) const
    {
        std::vector<Contact> results;

        for (const Contact& person : contacts)
        {
            bool foundByName = person.getName().find(query) != std::string::npos;
            bool foundByNumber = person.getNumber().find(query) != std::string::npos;

            if (foundByName || foundByNumber)
            {
                results.push_back(person);
            }
        }

        return results;
    }


private:
    std::vector<Contact> contacts;

};

#endif // CONTACTBOOK_H
