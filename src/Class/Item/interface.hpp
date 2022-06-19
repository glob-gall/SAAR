#pragma once
#include "TAMANHO.hpp"
#include "../Categoria/interface.hpp"
#include <string>
#include <vector>

class Categoria;

class Item {
  private:
  int id;
  std::string nome;
  double preco;
  std::string descricao;
  TAMANHO tamanho;
  std::string enderecoVideo;
  Categoria* categoria;
  
  public:
  Item(
    int id,
    std::string nome,
    double preco,
    std::string descricao,
    TAMANHO tamanho,
    std::string enderecoVideo,
    Categoria* categoria
  );

  double getPreco();
  int getId();
  std::string getCategoria();
  std::string getNome();
};