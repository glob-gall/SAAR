#pragma once
#include "../Funcionario/interface.hpp"
#include "STATUS_IMPRESSORA.hpp"
#include "../Item/interface.hpp"
class Impressora {
  int id;
  STATUS_IMPRESSORA status;
  public:
  void receber(Item);
};