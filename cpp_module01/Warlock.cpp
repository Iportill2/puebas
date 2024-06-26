#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
    for (size_t i = 0; i < arr_aspell.size(); ++i) 
    {
        delete arr_aspell[i];
    }
    arr_spellname.clear();
    arr_aspell.clear();
}

std::string const &Warlock::getName() const { return (this->name);}
std::string const &Warlock::getTitle() const { return (this->title);}

void Warlock::setTitle(std::string const &title) { this->title = title;}

void Warlock::introduce() const { std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";}
void Warlock::learnSpell(ASpell *aspell_ptr) 
{
    if (aspell_ptr) 
    {
        arr_spellname.push_back(aspell_ptr->getName());
        arr_aspell.push_back(aspell_ptr);
    }
}

void Warlock::forgetSpell(std::string name) 
{
    for (size_t i = 0; i < arr_spellname.size(); ++i) 
    {
        if (arr_spellname[i] == name) 
        {
            arr_spellname.erase(arr_spellname.begin() + i);
            arr_aspell.erase(arr_aspell.begin() + i);
            break;
        }
    }
}

void Warlock::launchSpell(std::string name, ATarget const &atarget_ref) 
{
    for (size_t i = 0; i < arr_spellname.size(); ++i) 
    {
        if (arr_spellname[i] == name) 
        {
            arr_aspell[i]->launch(atarget_ref);
            break;
        }
    }
}

