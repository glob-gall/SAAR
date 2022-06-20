#pragma once
#include <string>
#include <vector>
#include "../Item/interface.hpp"

class Pedido {
  int numero;
  Item* item;
  std::string DataHora;
  std::string observacoes;

  public:
  Pedido(Item* item);

  double getPreco();
};