#pragma once
#include"Part.h"



class Resistor : public Part
{
public:
	Resistor();
	Resistor(float val_i);
	~Resistor();
	virtual bool	operator==		(Resistor rhs);
	virtual float	operator||		(Resistor rhs);
	virtual float	operator+		(Resistor rhs);
private:

};


