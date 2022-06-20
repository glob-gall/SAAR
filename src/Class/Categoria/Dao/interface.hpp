#pragma once
#include <string>
#include <vector>
#include "../interface.hpp"

class CategoriaDao {
  std::vector<Categoria> categorias;

  public:
  std::vector<Categoria> listar();
  Categoria* get();
  bool criar(Categoria);
  bool alterar(Categoria);
  bool remover(Categoria);
  bool removerPorNome(std::string);
};
