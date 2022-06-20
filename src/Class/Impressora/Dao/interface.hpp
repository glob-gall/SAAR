#pragma once
#include <vector>
#include "../interface.hpp"

class ImpressoraDao {
  std::vector<Impressora> impressoras;

  public:
  std::vector<Impressora> listar();
  Impressora* get();
  bool criar(Impressora);
  bool alterar(Impressora);
  bool remover(Impressora);
  bool removerPorId(int id);
};
