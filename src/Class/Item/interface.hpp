#pragma once
#include "TAMANHO.hpp"
#include "../Categoria/interface.hpp"

class Item {
  int id;
  char* nome;
  double preco;
  char* descricao;
  TAMANHO tamanho;
  char* enderecoVideo;
  Categoria* categoria;
  
  public:
  Item(
    int id,
    char* nome,
    double preco,
    char* descricao,
    TAMANHO tamanho,
    char* enderecoVideo,
    Categoria* categoria
  );

  char* getNome();
  double getPreco();
};