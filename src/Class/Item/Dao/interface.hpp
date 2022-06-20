#pragma once
#include <vector>
#include "../interface.hpp"

class ItemDao {
  std::vector<Item> itens;

  public:
  std::vector<Item> listar();
  Item* get();
  bool criar(Item);
  bool alterar(Item);
  bool remover(Item);
  bool removerPorId(int id);
};
