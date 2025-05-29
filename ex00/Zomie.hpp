#ifndef zombie_hpp
#define zombie_hpp
#include <iostream>

class Zombie
{
    public:
    Zombie();
    ~Zombie();
    void announce( void );
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );

    private:
        std::string name;
}


#endif