#pragma once
#include "../Atendimento/interface.hpp"

class Garcom {
  char* cpf;
  char* telefone;
  char* endereco;
  char* dataInicioCadastro;
  char* dataFimCadastro;
  Atendimento* atendimentos;

  public:
  void aceitarAtendimento();
  void fazerPedidoParaMesa();

};