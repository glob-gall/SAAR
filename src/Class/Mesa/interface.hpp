#pragma once
#include "../../Enum/MESA_STATUS.hpp"

class Mesa {
  int id;
  MESA_STATUS status;
  Cardapio cardapio;
  Comanda comanda;
  Atendimanto* atendimentos;

  public:
  void iniciarComanda();
  void chamarGarcom();
  void visualizarCardapio();
  void fazerPedido();
};