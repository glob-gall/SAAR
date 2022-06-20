#pragma once
#include <vector>
#include "../interface.hpp"

class MesaDao {
  std::vector<Mesa> mesas;

  public:
  std::vector<Mesa> listarMesas();
  Mesa* get();
  bool criar(Mesa);
  bool alterar(Mesa);
  bool remover(Mesa);
  bool removerPorId(int id);
};
