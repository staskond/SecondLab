#pragma once
#ifndef _TIME_HPP_
#define _TIME_HPP_

class Time
{
public:
	Time();
	Time(const int _hour,const int _minutes);
	int GetHour() const;
	int GetMinutes() const;
	bool isValide() const;

private:
	int m_hour;
	int m_minutes;

};


inline int Time::GetHour() const
{
	return m_hour;
}

inline int Time::GetMinutes() const
{
	return m_minutes;
}

#endif //_TIME_HPP_