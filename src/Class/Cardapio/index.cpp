#include "./interface.hpp"

Cardapio::Cardapio(std::vector<Categoria>,std::vector<Item>){
  this->categorias = categorias;
  this->itens = itens;
}

void Cardapio::verCategorias(){

  for (int i = 0; i < this->categorias.size(); i++){

    std::cout<< this->categorias[i].getNome() << "\n";
  }

};

void Cardapio::verItens(){
  for (int i = 0; i < this->itens.size(); i++){
      std::cout<< this->itens[i].getNome() << "\n";
  }
};

void Cardapio::verItens(std::string nomeCategoria){

  for (int i = 0; i < this->itens.size(); i++){
    if (this->categorias[i].getNome() == nomeCategoria){
      this->categorias[i].verItens();
      return;
    }
  }

};

Item* Cardapio::escolherItem(int id){

  for (int i = 0; i < this->itens.size(); i++){
    if (this->itens[i].getId() == id){
      Item* item = new Item(this->itens[i]);
      return item;
    }
  }
  return NULL;
};

Item* Cardapio::escolherItem(std::string nome){

  for (int i = 0; i < this->itens.size(); i++){
    if (this->itens[i].getNome() == nome){
      Item* item = new Item(this->itens[i]);
      return item;
    }
  }
  return NULL;
};
