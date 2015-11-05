#ifndef _PLACE_HPP_
#define _PLACE_HPP_
#include <string>


class Place
{
public:
	Place(const std::string & _PlaceNamed, const std::string & _city, const std::string & _country);

	const std::string & GetPlaceNamed() const;
	const std::string & GetCity() const;
	const std::string & GetCountry() const;

private:
	const std::string m_PlaceNamed;
	const std::string m_city;
	const std::string m_country;

};


inline const std::string & Place::GetPlaceNamed() const
{
	return m_PlaceNamed;
}

inline const std::string & Place::GetCity() const
{
	return m_city;
}

inline const std::string & Place::GetCountry() const
{
	return m_country;
}
#endif //_PLACE_HPP_