#pragma once
#include<stdint.h>
#include<stdio.h>
#include<iostream>
#include"Measure_val.h"

#define NOT_POLAR	0
#define POLAR		1
#define TWO_LEGS	2
#define THREE_LEGS	3
#define FOUR_LEGS	4


enum class part_type
{
	resistor,
	capacitor,
	transistor,
	ic,

};

class Part
{
public:
	Part();
	Part(uint8_t num_of_pins, part_type p_type, bool polar);
	Part(uint8_t num_of_pins, part_type p_type, bool polar, Measure_val* values, uint8_t num_of_vals);
	~Part();
	uint8_t			get_num_of_pins	();
	part_type		get_type		();
	bool			get_polarity	();
	float			get_value		();//just the first one
	Measure_val*	get_values		();//returns a pointer to the array
	void			set_value	(float val_i);
	void			set_values	(Measure_val* vals_i, uint8_t len);
	//need to make a default function to these
	virtual bool	operator==		(Part rhs);
	virtual float	operator||		(Part rhs);
	virtual float	operator+		(Part rhs);
protected:
	uint8_t m_num_of_pins;
	part_type m_type;
	bool m_polar;
	Measure_val* m_values;
	uint8_t m_num_of_vals;
};

