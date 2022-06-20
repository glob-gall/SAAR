#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"

class MesaMng {
  MesaDao* mesaDao;

  public:
  std::vector<Mesa> listarMesas();
  Mesa* get();
  bool criar(Mesa);
  bool alterar(Mesa);
  bool remover(Mesa);
  bool removerPorId(int id);
};
