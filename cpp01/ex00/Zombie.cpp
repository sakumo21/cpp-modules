#include <iostream>

class Zombie{
    public:
        void announce( void );
        std::string *get_name( void ) { return (&name);}
        Zombie(std::string name);
        ~Zombie();
    private:
        std::string name;
};

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie(" << name << ") has been killed" << "\n";
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << "\n"; 
}

Zombie* newZombie( std::string name )
{
    Zombie *newzombie = new Zombie(name);
    return (newzombie);
}

void randomChump( std::string name )
{
    Zombie *newzombie = newZombie(name);
    newzombie->announce();
}

int main()
{
    randomChump("ZIAD");
}