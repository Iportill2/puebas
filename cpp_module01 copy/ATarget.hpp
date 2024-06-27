#pragma once
#include <iostream>
#include "ASpell.hpp"
class ASpell;
class ATarget
{
    std::string T;
    ATarget();
    ATarget(ATarget const & o);

    ATarget &operator=(ATarget const & o);

    public:

    ATarget(const std::string & t);

    ~ATarget();

    const std::string & getType()const;

    virtual ATarget *clone() const = 0;

    void getHitBySpell(const ASpell & aspell_ref)const ;

};