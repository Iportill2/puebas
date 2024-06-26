#include "Warlock.hpp"
Warlock::Warlock(const Warlock & obj)
{
    *this = obj;
}
    Warlock & Warlock::operator=(const Warlock & obj)
    {
        this->Name = obj.Name;
        this->Title = obj.Title;
        return(*this);
    }

    Warlock::Warlock(const std::string & name,const std::string & title) : Name(name), Title(title)
    {std::cout << Name << ": This looks like another boring day." << std::endl;} 
    Warlock::~Warlock()
    {std::cout << Name << ": My job here is done!" << std::endl;} 

    std::string const & Warlock::getName() const 
    {return(Name);}
    std::string const & Warlock::getTitle() const 
    {return(Title);}
    void Warlock::setTitle(const std::string & t) 
    {Title = t;}
    void Warlock::introduce() const
    {std::cout << Name << ": I am "<< Name << ", " << Title <<"!" << std::endl;}