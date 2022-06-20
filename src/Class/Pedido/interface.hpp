#pragma once
#include <string>
#include <vector>
#include "../Item/interface.hpp"
#include "../Impressora/interface.hpp"

class Pedido {
  int numero;
  Item* item;
  std::string DataHora;
  std::string observacoes;
  std::vector<Impressora> impressoras;

  public:
  Pedido(Item* item);

  double getPreco();
};