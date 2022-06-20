#pragma once
#include "STATUS_MESA.hpp"
#include "../Cardapio/interface.hpp"
#include "../Comanda/interface.hpp"
class Mesa {
  int id;
  STATUS_MESA status;
  Comanda* comanda;
  Cardapio* cardapio;

  public:
  Mesa(Cardapio*);
  void iniciarComanda();
  void chamarGarcom();
  void verCardapio();
  void verCategoria();
  void verItem();
  void fazerPedido(int idItem);
  void fazerPedido(std::string nomeItem);
};