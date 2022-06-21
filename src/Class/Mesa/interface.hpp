#pragma once
#include "STATUS_MESA.hpp"
#include "../Cardapio/interface.hpp"
#include "../Painel/interface.hpp"

class Mesa {
  int id;
  STATUS_MESA status;
  Cardapio* cardapio;
  Painel* painel;

  public:
  Mesa(Cardapio*);
  void iniciarComanda();
  bool chamarGarcom();
  void verCardapio();
  void verCategoria();
  void verComanda();
  void verItemDetalhes(int idItem);
  void verItemDetalhes(std::string nomeItem);
  bool fazerPedido(int idItem);
  bool fazerPedido(std::string nomeItem);
};