#include "person.h"
#include <string>
//#include <stdexcept> узнать про библиотеку!

//Error #A1 - This error may be when you input invalid Gender. Gender may be only Male, Fermale, fermale, male.


Person * Person::Make(const std::string & _fullName, const std::string & _Gender)test
{
	if (_Gender == "male" || _Gender == "fermale" || _Gender == "Fermale" || _Gender == "Male") {
		
		return new Person(_fullName, _Gender);
	}
	else {
		throw::std::logic_error("Error #A1: Invalid Gender.");
	}
}



Person::Person(const std::string & _fullName, const std::string & _Gender)
	:m_FullName(_fullName), m_Gender(_Gender)
{
};
