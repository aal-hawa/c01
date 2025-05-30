#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
class Weapon
{
    public:
        Weapon(std::string name);
        ~Weapon();
        std::string getType();
        void setType(std::string name);
    private:
        std::string _name;
};


#endif