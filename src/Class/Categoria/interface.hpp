#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "../Item/interface.hpp"
class Categoria{
  std::string nome;
  std::vector<Item> itens;

  public:
  Categoria(std::string nome);
  
  void verItens();
  std::string getNome();
};