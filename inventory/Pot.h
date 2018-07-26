#pragma once
#include"Resistors.h"

class Pot :
	public Resistor
{
public:
	Pot(float val_i, uint8_t per_i = 0);
	Pot(float val_i);
	Pot();
	~Pot();
	bool operator ^= (Pot rhs);
	uint8_t get_percentage();
private:
	uint8_t m_percentage;
};
