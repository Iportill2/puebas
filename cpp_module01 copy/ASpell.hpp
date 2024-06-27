#pragma once
#include <iostream>
#include "ATarget.hpp"
class ATarget;
class ASpell
{
    std::string N;
    std::string E;
    ASpell();
    ASpell(ASpell const & o);

    ASpell &operator=(ASpell const & o);

    public:

    ASpell(const std::string & n,const std::string & e);

    ~ASpell();

    const std::string & getName()const;
    const std::string & getEffects()const;

    virtual ASpell *clone() const = 0;

    void launch(const ATarget & atarget_ref) const;

};
