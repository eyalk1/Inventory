#pragma once
#include<string>

enum class PartType{ 
	resistor,
	capcitor 
};

class Part {
 public:
  Part(std::wstring name, PartType type);
  virtual ~Part() = default;
private:
	std::wstring m_name;
	PartType m_type;
};
