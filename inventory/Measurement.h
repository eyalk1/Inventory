#pragma once

enum class Unit {
  Farad,
  Ohm,
};

class Measurement {
 public:
  Measurement();
  ~Measurement();

 private:
  Unit m_unit;
  double m_value;  // TODO: cahnge to homebrew class
};
