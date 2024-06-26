#pragma once
#include <iostream>
class Warlock
{
private:
    std::string Name;
    std::string Title;
    Warlock(){};
    Warlock(const Warlock & obj);
    Warlock & operator=(const Warlock & obj);
public:
    Warlock(const std::string & name,const std::string & title);
    ~Warlock();

    std::string const & getName() const ;
    std::string const & getTitle() const ;
    void setTitle(const std::string & t) ;
    void introduce() const;
};
