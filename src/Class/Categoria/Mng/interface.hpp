#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"

class CategoriaMng {
  CategoriaDao* categoriaDao;

  public:
  std::vector<Categoria> listar();
  Categoria* get(std::string nome);
  Categoria* get(int id);
  bool criar(Categoria);
  bool alterar(Categoria);
  bool remover(Categoria);
  bool removerPorId(int id);
};
