#pragma once
#include<stdint.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

typedef enum addage
{
	res_like,
	cap_like,
	other_none
}addage;
typedef enum
{
	Ohm,
	Farad,
	Beta,
}Measure_type;

class Measure_val
{
public:

	Measure_val(float value, Measure_type type, addage addativity);
	Measure_val();
	~Measure_val();
	void			set_val		(float new_val);
	void			set_type	(Measure_type new_type);
	Measure_type	get_type	();
	float			get_val		();


private:
	Measure_type m_type;//ohm, farad etc...
	float m_val;
	addage m_addetivity;
};

