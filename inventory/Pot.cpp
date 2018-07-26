#include"Pot.h"
Pot::Pot(float val_i, uint8_t per_i)
	: Resistor(val_i)
{
	m_percentage = per_i;
}
Pot::Pot(float val_i)
	: Resistor(val_i)
{
	m_percentage = 0;
}
Pot::Pot()
	: Resistor(0)
{
	m_percentage = 0;
}

Pot::~Pot()
{
}

inline bool Pot::operator^=(Pot rhs)
{
	if (((*this) == rhs) && m_percentage == rhs.get_percentage())
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline uint8_t Pot::get_percentage()
{
	return m_percentage;
}
