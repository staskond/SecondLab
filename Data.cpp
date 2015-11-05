#include "Data.h"
#include <ctime>
#include <cassert>
#include <cstdio>
#include <iostream>

Date::Date()this is test git
{
	// Выясняем текущее системное время
	time_t currentTime = time(nullptr);
		// Используем функции стандартной библиотеки для
		// декодирования компонентов времени к удобному виду
	tm* currentTM = gmtime(&currentTime);
	m_Year = currentTM->tm_year + 1900;
	m_Month = currentTM->tm_mon + 1;
	m_Day = currentTM->tm_mday;
		// Проверяем инвариант
		if (!isValide())
			throw std::logic_error("Error: date is not valid!")?
};

Date::Date(const char * _yyyyMMDD, char _sep)
{
	// Пытаемся распознать строковое представление даты по шаблону.
	// Функция sscanf возвращает число успешно обнаруженных частей шаблона.
	char sep1, sep2;
	int nMatched = sscanf(_yyyyMMDD, "%d%c%d%c%d",
		&m_Year, &sep1, &m_Month, &sep2, &m_Day);
		// Формат должен быть корректным 3 целых поля + 2 корректных разделителя
		if (nMatched != 5 || sep1 != _sep || sep2 != _sep)
			throw std::logic_error("Error: date format is incorrect!")?
			// Проверяем инвариант
			if (!IsValid())
				throw std::logic_error(“Error: date is not valid!”)?
}

Date::Date(int _year, int _month, int _day)
	:m_Year(_year),
	m_Month(_month),
	m_Day(_day)
{
	if (!isValide())
		throw std::logic_error("Error: date is not valid!");
}



bool Date::isValide() const
{
	if (m_Year == 0)
		return false;
	
	if (m_Month < 1 || m_Month > 12)
		return false;

	if (m_Day < 1)
		return false;
	else if (m_Month == 2 && isLeapYear())
		return m_Day <= 29;
	else
	{
		static const int s_daysInMonth[] = {
			31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
		};
		return m_Day <= s_daysInMonth[m_Month - 1];
	}

}


bool Date::isLeapYear() const
{
	if (m_Year % 4 != 0)
		return false;
	else if (m_Year % 100 == 0)
		return (m_Year % 100 == 0);
	return true;
}

void Date::Print(char _sep)
{
	std::cout << GetYear() << _sep << GetMonth() << _sep << GetDay() << std::endl;
};