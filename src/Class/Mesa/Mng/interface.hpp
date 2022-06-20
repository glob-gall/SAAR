#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"

class MesaMng {
  MesaDao* mesaDao;

  public:
  std::vector<Mesa> listar();
  Mesa* get(int id);
  bool criar(Mesa);
  bool alterar(Mesa);
  bool remover(Mesa);
  bool removerPorId(int id);
};
