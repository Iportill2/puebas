#include "Warlock.hpp"
Warlock::Warlock(const Warlock & o)
{
    *this = o;
}
Warlock & Warlock::operator=(const Warlock & o)
{
    this->Name = o.Name;
    this->Title = o.Title;
    return(*this);
}
Warlock::Warlock(const std::string & name, const std::string & title) : Name(name), Title(title)
{
    std::cout << Name << ": This looks like another boring day." << std::endl;
}
const std::string & Warlock::getName() const
{
        return(Name);
}
    const std::string & Warlock::getTitle() const
{
    
    return(Title);
}
void Warlock::setTitle(const std::string & l)
{
    Title = l;
}
void Warlock::introduce() const
{
    std::cout << Name << ": I am " << Name <<", "<< Title << "!" << std::endl;
}
Warlock::~Warlock()
{
    std::cout << Name << ": My job here is done!" << std::endl;
}
	void Warlock::learnSpell(ASpell *aspell_ptr) 
    {
        if(aspell_ptr)
        {
            arr_spellname.push_back(aspell_ptr->getName());
            arr_aspell.push_back(aspell_ptr);
        }
    }
	void Warlock::forgetSpell(std::string spellname)
    {
        size_t i =0;
        while(i < arr_spellname.size())
        {
            if(arr_spellname[i] == spellname)
            {
                arr_spellname.erase(arr_spellname.begin()+i);
                break;
            }
            i++;
        }
    }
	void Warlock::launchSpell(std::string spellname, const ATarget & atarget_ref) 
    {
        size_t i =0;
        while(i < arr_spellname.size())
        {
            if(arr_spellname[i] == spellname)
            {
                arr_aspell[i]->launch(atarget_ref);
                break;
            }
            i++;
        }
    } 

