#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"

class ItemMng {
  ItemDao* itemDao;

  public:
  std::vector<Item> listar();
  Item* get(std::string nome);
  Item* get(int id);
  bool criar(Item);
  bool alterar(Item);
  bool remover(Item);
  bool removerPorId(int id);
};
