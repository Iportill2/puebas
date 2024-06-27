#pragma once
#include <iostream>
class Warlock
{
    std::string N;
    std::string T;
    Warlock();
    Warlock(Warlock const & o);

    Warlock &operator=(Warlock const & o);

    public:

    Warlock(const std::string & n,const std::string & t);

    ~Warlock();

    const std::string & getName()const;
    const std::string & getTitle()const;

    void setTitle(const std::string & l);

    void introduce() const;



};

/*
* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
* forgetSpell, takes a string corresponding a to a spell's name, and makes the
  Warlock forget it. If it's not a known spell, does nothing.
* launchSpell, takes a string (a spell name) and a reference to ATarget, that
  launches the spell on the selected target. If it's not a known spell, does
  nothing.
*/