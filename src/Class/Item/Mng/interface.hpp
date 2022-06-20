#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"

class ItemMng {
  ItemDao* itemDao;

  public:
  std::vector<Item> listarItens();
  Item* get();
  bool criar(Item);
  bool alterar(Item);
  bool remover(Item);
  bool removerPorId(int id);
};
