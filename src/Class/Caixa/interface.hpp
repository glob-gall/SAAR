#pragma once
#include <string>
#include <vector>
#include "../Comanda/interface.hpp"
#include "./TIPO_PAGAMENTO.hpp"
class Caixa {
  std::string login;
  std::string senha;
  std::vector<Comanda> comandas;

  public:
  std::vector<Comanda> buscarComandasAbertas();
  Comanda* buscarComanda(int id);
  void registrarPagamento(TIPO_PAGAMENTO,Comanda*);
};