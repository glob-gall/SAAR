#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"

class ComandaMng {
  ComandaDao* ComandaDao;

  public:
  std::vector<Comanda> listar();
  Comanda* get(std::string nome);
  Comanda* get(int id);
  bool criar(Comanda);
  bool alterar(Comanda);
  bool remover(Comanda);
  bool removerPorId(int id);
};
