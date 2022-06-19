#pragma once
#include "STATUS_MESA.hpp"
#include "../Cardapio/interface.hpp"
#include "../Comanda/interface.hpp"
class Mesa {
  int id;
  STATUS_MESA status;
  Cardapio* cardapio;
  Comanda* comanda;

  public:
  Mesa(Cardapio*);
  void iniciarComanda();
  void chamarGarcom();
  void visualizarCardapio();
  void fazerPedido();
};