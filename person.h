#ifndef _PERSON_HPP_
#define _PERSON_HPP_
#include <string>


class Person
{
public:
	

	const std::string & GetFullName() const;
	const std::string & GetGender() const;
	static Person * Make(const std::string & _fullName, const std::string & _Gender);

private:
	Person(const std::string & _fullName, const std::string & _Gender);//закрытый конструктор, для использования метод фабрик
	const std::string m_FullName;
	const std::string m_Gender;
};

inline const std::string & Person::GetFullName() const
{
	return m_FullName;
};

inline const std::string & Person::GetGender() const
{
	return m_Gender;
}



#endif // _PERSON_HPP_
