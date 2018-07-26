#include"Measure_val.h"



Measure_val::Measure_val(float value_i, Measure_type type_i, addage addetivity_i)
{
	m_val = value_i;
	m_type = type_i;
	m_addetivity = addetivity_i;
}

Measure_val::Measure_val()
{
	m_type = Ohm;//default val
	m_val = 0;
	m_addetivity = res_like;
}

Measure_val::~Measure_val()
{
}
void Measure_val::set_val(float new_val)
{
	m_val = new_val;
}
void Measure_val::set_type(Measure_type new_type)
{
	m_type = new_type;
}
Measure_type Measure_val::get_type()
{
	return m_type;
}
float Measure_val::get_val()
{
	return m_val;
}