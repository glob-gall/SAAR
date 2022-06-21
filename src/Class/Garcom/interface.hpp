#pragma once
#include<string>
#include "../Funcionario/interface.hpp"
#include "../Mesa/interface.hpp"
#include "../Mesa/Mng/interface.hpp"
#include "../Cardapio/interface.hpp"
class Garcom {
  Funcionario funcionario;
  Cardapio* cardapio;
  MesaMng* mesaMng;
  public:
  Garcom(Funcionario);
  bool fazerPedidoParaMesa(Item,Mesa);
};