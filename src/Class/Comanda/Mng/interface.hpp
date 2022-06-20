#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"
#include "../../Impressora/Mng/interface.hpp"

class ComandaMng {
  ComandaDao* ComandaDao;
  ImpressoraMng* impressoraMng;

  public:
  std::vector<Comanda> listar();
  Comanda* get(std::string nome);
  Comanda* get(int id);
  bool criar(Comanda);
  bool alterar(Comanda);
  bool remover(Comanda);
  bool removerPorId(int id);
  bool enviarParaImpressora(Pedido);
};
