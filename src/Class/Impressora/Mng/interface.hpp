#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"

class ImpressoraMng {
  ImpressoraDao* impressoraDao;

  public:
  std::vector<Impressora> listar();
  Impressora* get(std::string nome);
  Impressora* get(int id);
  bool criar(Impressora);
  bool alterar(Impressora);
  bool remover(Impressora);
  bool removerPorId(int id);
  bool enviarItemParaImpressao(Item);

};
