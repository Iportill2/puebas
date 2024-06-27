#pragma once
#include "ASpell.hpp"
class Fwoosh : public ASpell
{
    public:
    Fwoosh();
    virtual~Fwoosh();
    Fwoosh *clone() const;
};