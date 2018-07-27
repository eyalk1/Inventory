#pragma once
#include<string>

enum class PartType{ 
	resistor,
	capcitor 
};

class Part {
 public:
  Part(PartType type);
  virtual ~Part() = default;
private:
	PartType m_type;
};
