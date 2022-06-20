#pragma once
#include <vector>
#include "../interface.hpp"

class CaixaDao {
  std::vector<Caixa> caixas;

  public:
  std::vector<Caixa> list();
  Caixa* get();
  bool save(Caixa);
  bool update(Caixa);
  bool remove(Caixa);
  bool removeById(int id);
};
