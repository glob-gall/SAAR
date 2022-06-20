#pragma once
#include "../Funcionario/interface.hpp"
#include "../Item/Mng/interface.hpp"
#include "../Categoria/Mng/interface.hpp"
#include "../Mesa/Mng/interface.hpp"
#include "../Funcionario/Mng/interface.hpp"
class Gerente: public Funcionario {
  ItemMng* itemMng;
  CategoriaMng* categoriaMng;
  MesaMng* mesaMng;
  FuncionarioMng* funcionarioMng;

  public:
  Gerente(
    MesaMng* mesaMng,
    ItemMng* itemMng,
    CategoriaMng categoriaMng,
    FuncionarioMng* funcionarioMng
  );
  void aceitarAtendimento();
  void fazerPedidoParaMesa();

};