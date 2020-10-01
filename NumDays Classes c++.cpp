// John muema michael
//10/1/2020
//course 
//program  is made up of a  class called NumDays,
//

#include <iostream>
using namespace std;
class NumDays
{
public:
	NumDays();
	NumDays(int);
	NumDays(double);
	void sethours(int);
	void setDays(double);
	int getHours();
	double getDays();
	NumDays operator+ (NumDays&);
	NumDays operator++ (int);
	NumDays operator-- (int);
	NumDays operator- (NumDays&);
	NumDays& operator++ ();
	NumDays& operator-- ();
	
	~NumDays();

private:
	int hours;
	double days;

};

NumDays::NumDays()
{
	hours = 0;
}
NumDays::NumDays(int time)
{
	hours = time;
}
NumDays::NumDays(double days)
{
	hours = days * 8;
}
void NumDays::sethours(int numHours)
{
	numHours = hours;
}
void NumDays::setDays(double d)
{
	hours = d * 8;
}
int NumDays::getHours()
{
	return hours;
}

double NumDays::getDays()
{
	double days;
	days = (hours / 8);
	return days;
	
}

NumDays NumDays::operator+(NumDays&a)
{
	NumDays b;
	b.hours = this->hours + a.hours;
	return b;
	return NumDays();
}
NumDays NumDays::operator- (NumDays& a)
{
	NumDays b;
	b.hours = this->hours - a.hours;
	return b;
}
NumDays& NumDays::operator++ ()
{
	++hours;
	return *this;
}
NumDays& NumDays::operator-- ()
{
	--hours;
	return *this;
}
NumDays NumDays::operator++ (int)
{
	hours++;
	return hours;
}
NumDays NumDays::operator-- (int)
{
	hours--;
	return hours;
}

NumDays::~NumDays()
{
}

int main()
{
   
}

