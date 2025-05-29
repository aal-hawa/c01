#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>
class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
        Zombie* zombieHorde( int N, std::string name );
    private:
        std::string _name;
};


#endif