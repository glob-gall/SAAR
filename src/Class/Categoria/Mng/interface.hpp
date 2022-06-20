#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"

class CategoriaMng {
  CategoriaDao* categoriaDao;

  public:
  std::vector<Categoria> listarCategorias();
  Categoria* get();
  bool criar(Categoria);
  bool alterar(Categoria);
  bool remover(Categoria);
  bool removerPorId(int id);
};
