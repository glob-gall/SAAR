#pragma once
#include <vector>
#include "../interface.hpp"
#include "../Dao/interface.hpp"
#include "../../Comanda/Mng/interface.hpp"

class MesaMng {
  MesaDao* mesaDao;
  ComandaMng* comandaMng;
  Item itemSelecionado;

  public:
  std::vector<Mesa> listar();
  Mesa* get(int id);
  bool criar(Mesa);
  bool alterar(Mesa);
  bool remover(Mesa);
  bool removerPorId(int id);
  Mesa* buscaMesaPelaComanda(int comandaId);
  bool adicionarPedido(Mesa,Item,std::string observacoes);
  bool fecharMesa(int MesaId);
};
