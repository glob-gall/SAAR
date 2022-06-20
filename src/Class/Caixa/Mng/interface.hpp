#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"

class CaixaMng {
  CaixaDao* CaixaDao;

  public:
  std::vector<Caixa> listar();
  Caixa* get(int id);
  bool criar(Caixa);
  bool alterar(Caixa);
  bool remover(Caixa);
  bool removerPorId(int id);
};
