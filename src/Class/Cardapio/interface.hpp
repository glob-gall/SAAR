#pragma once
#include "../Categoria/interface.hpp"
#include "../Item/interface.hpp"
#include <vector>
#include <iostream>
#include <string>
class Cardapio {
  std::vector<Categoria> categorias;
  std::vector<Item> itens;
  
  public:
  Cardapio(std::vector<Categoria>,std::vector<Item>);

  void verCategorias();
  void verItens();
  void verItens(std::string nomeCategoria);
  Item* escolherItem(int id);
  Item* escolherItem(std::string nome);
};