#pragma once
#include <string>
#include <vector>
#include "../Comanda/interface.hpp"
#include "../Mesa/Mng/interface.hpp"
#include "./TIPO_PAGAMENTO.hpp"
class Caixa {
  std::string login;
  std::string senha;
  std::vector<Comanda> comandas;
  std::vector<MesaMng> mesaMng;

  public:
  std::vector<Comanda> buscarComandasAbertas();
  void buscarComanda(int id);
  void buscarComandaPelaMesa(int idMesa);
  void registrarPagamento(TIPO_PAGAMENTO,int ComandaId);
};