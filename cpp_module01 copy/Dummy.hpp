#pragma once
#include "ATarget.hpp"
class Dummy : public ATarget
{
    public:
    Dummy();
    virtual~Dummy();
    Dummy *clone() const;
};