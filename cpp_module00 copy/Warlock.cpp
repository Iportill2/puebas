#include "Warlock.hpp"

    Warlock::Warlock(){};
    Warlock::Warlock(Warlock const & o){*this = o;}

    Warlock &Warlock::operator=(Warlock const & o)
    {
        this->N=o.N;
        this->T= o.T;
        return(*this);
    }

    Warlock::Warlock(const std::string & n,const std::string & t) :N(n),T(t)
    {std::cout << N << ": This looks like another boring day.\n";}

    Warlock::~Warlock(){std::cout << N << ": My job here is done!\n";}

    const std::string & Warlock::getName()const{return(N);}
    const std::string & Warlock::getTitle()const{return(T);}

    void Warlock::setTitle(const std::string & l){T=l;}

    void Warlock::introduce() const
    {std::cout << N << ": I am " << N << ", " << T << "!\n";}