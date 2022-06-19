#pragma once

class Categoria{
  char* nome;
  Item* itens;
  public:
  Categoria(Item*);
  
  Item* verItens();
};