#include "ASpell.hpp"

    ASpell::ASpell(){};
    ASpell::ASpell(ASpell const & o){*this = o;}

    ASpell &ASpell::operator=(ASpell const & o)
    {
        this->N=o.N;
        this->E= o.E;
        return(*this);
    }

    ASpell::ASpell(const std::string & n,const std::string & e) :N(n),E(e)
    {}

    ASpell::~ASpell(){}

    const std::string & ASpell::getName()const{return(N);}
    const std::string & ASpell::getEffects()const{return(E);}
    void ASpell::launch(ATarget const & atarget_ref) const
    {
        atarget_ref.getHitBySpell(*this);
    }
