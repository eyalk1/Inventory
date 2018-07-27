#pragma once
#include "Part.h"
#include "Measurement.h"

class Resistor : Part
{
public:
	Resistor(double resistance);
	~Resistor() = default;

private:
	Measurement m_measure;
};

