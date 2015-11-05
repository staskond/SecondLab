#pragma once
#ifndef _DATA_HPP_
#define _DATA_HPP_

class Date {
public:

	Date();
	Date::Date(const char * _yyyyMMDD, char _sep);
	Date(int _year, int _month, int _day);
	int GetYear() const;
	int GetMonth() const;
	int GetDay() const;
	bool isLeapYear() const;

	void Print(char _sep);
private:

	bool isValide() const;
	int m_Year, m_Month, m_Day;
};

inline int Date::GetMonth() const
{
	return m_Month;
}

inline int Date::GetYear() const
{
	return m_Year;
}

inline int Date::GetDay() const
{
	return m_Day;
}



#endif//_DATA_HPP_