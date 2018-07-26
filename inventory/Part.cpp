#include"Part.h"


Part::Part()
{

}

Part::Part(uint8_t num_of_pins, part_type p_type, bool polar, Measure_val* values, uint8_t num_of_vals)
	:m_type(p_type),
	m_num_of_pins(num_of_pins),
	m_polar(polar),
	m_values(values),
	m_num_of_vals(num_of_vals)
{


}

Part::Part(uint8_t num_of_pins, part_type p_type, bool polar)
	:m_type(p_type),
	m_num_of_pins(num_of_pins),
	m_polar(polar)
{
	
}

Part::~Part()
{
}

uint8_t Part::get_num_of_pins()
{
	return m_num_of_pins;
}

part_type Part::get_type()
{
	return m_type;
}

bool Part::get_polarity()
{
	return m_polar;
}

float Part::get_value()
{
	return m_values->get_val();
}

Measure_val * Part::get_values()
{
	return m_values;
}

void Part::set_value(float val_i)
{
	m_values->set_val(val_i);
}

void Part::set_values(Measure_val *vals_i, uint8_t len)
{
	if (len > m_num_of_vals)
	{
		return;
	}
	for (uint8_t j = 0; j < m_num_of_vals; j++)
	{
		for (uint8_t i = 0; i < len; i++)
		{
			if (vals_i[i].get_type() == m_values[j].get_type())
			{
				m_values[j].set_val(vals_i[i].get_val());
				break;
			}
		}
	}
}

bool Part::operator==(Part rhs)
{
	return false;
}

float Part::operator||(Part rhs)
{
	return 0.0f;
}

float Part::operator+(Part rhs)
{
	return 0.0f;
}
