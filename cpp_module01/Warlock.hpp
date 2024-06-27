#pragma once
#include <iostream>
#include "ASpell.hpp"
#include <vector>
class ASpell;
class Warlock
{
	private:
    std::string Name;
    std::string Title;
    Warlock(){};
    Warlock(const Warlock & o);
    Warlock &operator=(const Warlock & o);
	
	std::vector<std::string>arr_spellname;
	std::vector<ASpell *>arr_aspell;
    public:
    Warlock(const std::string & name, const std::string & title);
	~Warlock();

    const std::string & getName() const ;
	const std::string & getTitle() const ;
	
	void setTitle(const std::string & l) ;
	
	void introduce() const;
	
	void learnSpell(ASpell *aspell_ptr) ;
	void forgetSpell(std::string spellname);
	void launchSpell(std::string spellname, const ATarget & atarget_ref); 



};