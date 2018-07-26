#include"Resistors.h"


Resistor::Resistor()
	:Part(TWO_LEGS, resistor, NOT_POLAR)
{
	m_num_of_vals = 1;
}
Resistor::Resistor(float val_i)
	: Part(TWO_LEGS, resistor, NOT_POLAR)
{
	m_values = new Measure_val(val_i, Ohm, res_like);
	m_num_of_vals = 1;
}

Resistor::~Resistor()
{
}

bool Resistor::operator==(Resistor rhs)
{
	if (m_values->get_val() == rhs.get_value())
	{
		return true;
	}
	else
	{
		return false;
	}
}

float Resistor::operator||(Resistor rhs)
{
	return (1 / ((1 / rhs.get_value()) + (1 / m_values->get_val())));
}

float Resistor::operator+(Resistor rhs)
{
	return rhs.get_value() + m_values->get_val();//change to rhs + this?
}
