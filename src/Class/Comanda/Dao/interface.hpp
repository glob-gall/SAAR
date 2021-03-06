#pragma once
#include <vector>
#include "../interface.hpp"

class ComandaDao {
  std::vector<Comanda> comandas;

  public:
  std::vector<Comanda> listar();
  Comanda* buscarPorId(int id);
  bool criar(Comanda);
  bool alterar(Comanda);
  bool remover(Comanda);
  bool removerPorId(int id);
};
