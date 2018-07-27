#include "Resistor.h"

Resistor::Resistor(double resistance) : Part{PartType::resistor }, m_measure{ Unit::Ohm,resistance }  {
	//Empty on porpuse
}
