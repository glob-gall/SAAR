#pragma once
#include "STATUS.hpp"
#include "../Cardapio/interface.hpp"
#include "../Comanda/interface.hpp"
class Mesa {
  int id;
  STATUS status;
  Cardapio* cardapio;
  Comanda* comanda;

  public:
  void iniciarComanda();
  void chamarGarcom();
  void visualizarCardapio();
  void fazerPedido();
};