#pragma once
#include <string>
#include "../Mesa/interface.hpp"
#include "../Garcom/interface.hpp"
#include "./STATUS_ATENDIMENTO.hpp"

class Atendimento{
  int id;
  Mesa* mesa;
  Garcom* garcom;
  std::string DataHora;
  STATUS_ATENDIMENTO status;

  public:
  
};