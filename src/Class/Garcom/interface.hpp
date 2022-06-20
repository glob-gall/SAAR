#pragma once
#include "../Atendimento/interface.hpp"
#include "../Funcionario/interface.hpp"
class Garcom: public Funcionario {
  Atendimento* atendimentos;

  public:
  void aceitarAtendimento();
  void fazerPedidoParaMesa();

};