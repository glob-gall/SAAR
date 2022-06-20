#pragma once
#include "../Funcionario/interface.hpp"
#include "../Item/Mng/interface.hpp"
#include "../Categoria/Mng/interface.hpp"
#include "../Mesa/Mng/interface.hpp"
#include "../Funcionario/Mng/interface.hpp"
#include "../Caixa/Mng/interface.hpp"
#include "../Comanda/Mng/interface.hpp"
#include "../Impressora/Mng/interface.hpp"

class Gerente {
  Funcionario funcionario;
  ItemMng* itemMng;
  CategoriaMng* categoriaMng;
  MesaMng* mesaMng;
  FuncionarioMng* funcionarioMng;
  CaixaMng* caixaMng;
  ComandaMng* comandaMng;
  ImpressoraMng* impressoraMng;

  public:
  Gerente(
    MesaMng* mesaMng,
    ItemMng* itemMng,
    CategoriaMng categoriaMng,
    FuncionarioMng* funcionarioMng,
    CaixaMng* caixaMng,
    ComandaMng* comandaMng,
    ImpressoraMng* impressoraMng
  );

};