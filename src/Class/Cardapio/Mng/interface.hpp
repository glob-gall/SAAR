#pragma once
#include <vector>
#include "../interface.hpp"
#include "../../Item/Mng/interface.hpp"
#include "../../Categoria/Mng/interface.hpp"

class CardapioMng {
  Cardapio* cardapio;

  public:
  ItemMng* itemMng;
  CategoriaMng* categoriaMng;
};
