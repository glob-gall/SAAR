#pragma once
#include <vector>
#include "../interface.hpp"

class FuncionarioDao {
  std::vector<Funcionario> funcionario;

  public:
  std::vector<Funcionario> listFuncionarios();
  Funcionario* get();
  bool criar(Funcionario);
  bool alterar(Funcionario);
  bool remover(Funcionario);
  bool removerPorId(int id);
};
