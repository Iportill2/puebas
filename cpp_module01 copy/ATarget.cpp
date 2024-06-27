#include "ATarget.hpp"

    ATarget::ATarget(){};
    ATarget::ATarget(ATarget const & o){*this = o;}

    ATarget &ATarget::operator=(ATarget const & o)
    {
        this->T=o.T;
        return(*this);
    }

    ATarget::ATarget(const std::string & t) :T(t)
    {}

    ATarget::~ATarget(){}

    const std::string & ATarget::getType()const{return(T);}
    void ATarget::getHitBySpell(const ASpell & aspell_ref) const
    {
        std::cout << T << " has been " << aspell_ref.getEffects() << "!\n";
    }