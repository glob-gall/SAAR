#pragma once
#include <string>
#include "../Item/interface.hpp"

class Pedido {
  int numero;
  Item* item;
  Item* adicionais;
  std::string DataHora;
  std::string observacoes;

  public:
  Pedido(Item* item);

  double getPreco();
};