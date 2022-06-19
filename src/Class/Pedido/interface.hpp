#pragma once
#include "../Item/interface.hpp"

class Pedido {
  int numero;
  Item* item;
  Item* adicionais;
  char* DataHora;
  char* observacoes;

  public:
  Pedido(Item* item);

  double getPreco();
};