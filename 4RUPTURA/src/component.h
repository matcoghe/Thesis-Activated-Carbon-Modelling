#pragma once

#include <iostream>

#include "multi_site_isotherm.h"

struct Component
{
  Component(size_t i, std::string n): id(i), name(n) {}

  size_t id;
  std::string name{};         // name of the component
  std::string filename{};
  MultiSiteIsotherm isotherm; // isotherm information
  double Yi0;                 // gas phase mol-fraction [-]
  double Kl;                  // masstransfer coefficient [1/s]
  double D;                   // axial dispersion coefficient [m^2/s]
  bool isCarrierGas{ false }; // whether or not this is the carrier-gas
                                  
  void print(size_t i) const;
};
