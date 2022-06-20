#pragma once
#include "../Caixa/TIPO_PAGAMENTO.hpp"
#include "STATUS.hpp"
#include "../Item/interface.hpp"
#include "../Pedido/interface.hpp"

class Comanda {
  int id;
  char* dataHoraPagamento;
  TIPO_PAGAMENTO tipoPagamento;
  STATUS status;
  Pedido* pedidos;

  public:
  void adicionarPedido(Item*);

  void ver();
};