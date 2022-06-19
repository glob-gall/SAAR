#include "./interface.hpp"

Categoria::Categoria(std::string nome){
  this->nome = nome;
  this->itens = {};
}

std::string Categoria::getNome(){
  return this->nome;
}

void Categoria::verItens(){
  for (int i = 0; i < this->itens.size(); i++){
    std::cout<< this->itens[i].getId() << "-" << this->itens[i].getId() << "\n";
  }
}