#pragma once
#include "../Funcionario/interface.hpp"
#include "../Cardapio/Mng/interface.hpp"
#include "../Mesa/Mng/interface.hpp"
#include "../Funcionario/Mng/interface.hpp"
class Gerente: public Funcionario {
  CardapioMng* cardapioMng;
  MesaMng* mesaMng;
  FuncionarioMng* funcionarioMng;

  public:
  Gerente(
    MesaMng* mesaMng,
    CardapioMng* cardapioMng,
    FuncionarioMng* funcionarioMng
  );
  void aceitarAtendimento();
  void fazerPedidoParaMesa();

};