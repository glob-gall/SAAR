#include <string>

// #include "src/Class/Caixa/interface.hpp"
#include "src/Class/Categoria/interface.hpp"
// #include "src/Class/Comanda/interface.hpp"
// #include "src/Class/Funcionario/interface.hpp"
// #include "src/Class/Garcom/interface.hpp"
// #include "src/Class/Gerente/interface.hpp"
// #include "src/Class/Impressora/interface.hpp"
// #include "src/Class/Pedido/interface.hpp"
// #include "src/Class/Cardapio/interface.hpp"
// #include "src/Class/Item/interface.hpp"
// #include "src/Class/Mesa/interface.hpp"

void testCategoria(){
  std::cout << "AAAAAAAAAAAAAAAAAAAAA\n";
  std::cout << "AAAAAAAAAAAAAAAAAAAAA\n";
  std::string catNome = "sopas";
  Categoria* sopas = new Categoria(catNome);

  std::cout << "categoria: " << sopas->getNome() << "\n";
  sopas->verItens();
}

int main(){


  // Item* sopa = new Item(
  //   1,// int id,
  //   "sopa de macaco",// std::string nome,
  //   12.99,// double preco,
  //   "uma delisia hummmmmmmmm",// std::string descricao,
  //   TAMANHO::G,// TAMANHO tamanho,
  //   "http://youtube.com",// std::string enderecoVideo,
  //   sopas// Categoria* categoria
  // );

  // std::cout << sopa->getId() <<sopa->getCategoria() << sopa->getNome() << sopa->getPreco() << "\n";

  return 0;
}