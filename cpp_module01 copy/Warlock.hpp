#pragma once
#include <iostream>
#include <vector>
#include "ASpell.hpp"
class Warlock
{
    std::string N;
    std::string T;
    Warlock();
    Warlock(Warlock const & o);

    Warlock &operator=(Warlock const & o);
    //std::vector<std::string > arr_spellname;
    std::vector< ASpell *> arr_aspell;
    public:

    Warlock(const std::string & n,const std::string & t);

    ~Warlock();

    const std::string & getName()const;
    const std::string & getTitle()const;

    void setTitle(const std::string & l);

    void introduce() const;

    void learnSpell(ASpell * aspell_ptr);
    void forgetSpell(std::string spellname);
    void launchSpell(std::string spellname,const ATarget & atarget_ref);

};

