#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"

class FuncionarioMng {
  FuncionarioDao* funcionarioDao;

  public:
  std::vector<Funcionario> listarItens();
  Funcionario* get();
  bool criar(Funcionario);
  bool alterar(Funcionario);
  bool remover(Funcionario);
  bool removerPorId(int id);
};
