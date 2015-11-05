#include "time.h"
#include <ctime>
#include <iostream>

Time::Time()
{
	time_t currentTime = time(nullptr);
	// Используем функции стандартной библиотеки для
	// декодирования компонентов времени к удобному виду
	tm* currentTM = gmtime(&currentTime);
	m_hour = currentTM->tm_hour;
	m_minutes = currentTM->tm_min;
	if (!isValide())
		throw std::logic_error("Error: time is not correct.");
}

Time::Time(const int _hour, const int _minutes)
	:m_hour(_hour),
	m_minutes(_minutes)
{
	if (!isValide())
		throw std::logic_error("Error: time is not correct.");
}

bool Time::isValide() const
{
	if (m_hour > 23 ||
		m_hour < 0)
		return false;

	if (m_minutes > 59 || m_minutes < 0)
		return false;
	else return true;

}
