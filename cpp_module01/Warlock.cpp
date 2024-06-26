#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day.\n";
}

/* Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
    std::map<std::string, ASpell *>::iterator it_begin = this->arr.begin();
    std::map<std::string, ASpell *>::iterator it_end = this->arr.end();
    while (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    this->arr.clear();
} */
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

/* void Warlock::learnSpell(ASpell* spell_ptr)
{
	if (spell_ptr)
		arr.insert(std::pair<std::string, ASpell *>(spell_ptr->getName(), spell_ptr->clone()));
}

void Warlock::forgetSpell(std::string spell_name)
{
	std::map<std::string, ASpell *>::iterator it = arr.find(spell_name);
	if (it != arr.end())
		delete it->second;
	arr.erase(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target_ref)
{
	ASpell* spell = arr[spell_name];
	if (spell)
		spell->launch(target_ref);
} */





/* void Warlock::learnSpell(ASpell *aspell_ptr) {
    if (aspell_ptr) {
        arr[aspell_ptr->getName()] = aspell_ptr;
    }
}

void Warlock::forgetSpell(std::string name) {
    arr.erase(name);
}

void Warlock::launchSpell(std::string name, ATarget const &atarget_ref) {
    ASpell *spell = arr[name];
    if (spell) {
        spell->launch(atarget_ref);
    }
} */
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

