#pragma once
#include "../../Enum/ITEM_TAMANHO.hpp"
#include "../Categoria/interface.hpp"

class Item {
  int id;
  char* nome;
  double preco;
  char* descricao;
  ITEM_TAMANHO tamanho;
  char* enderecoVideo;
  Categoria* categoria;
  
  public:
  Item(
    int id,
    char* nome,
    double preco,
    char* descricao,
    ITEM_TAMANHO tamanho,
    char* enderecoVideo,
    Categoria* categoria
  );

  char* getNome();
  double getPreco();
};