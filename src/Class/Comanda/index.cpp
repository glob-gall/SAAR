#pragma once
#include "../../Enum/TIPO_PAGAMENTO.hpp"

class Comanda {
  int id;
  char* dataHoraPagamento;
  TIPO_PAGAMENTO tipoPagamento;
  Pedido* pedidos;

  public:
  void adicionarPedido(ItemMenu*);
};