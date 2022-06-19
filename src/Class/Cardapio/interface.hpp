class Cardapio {
  Categoria* categorias;
  Item* itens;
  
  public:
  Cardapio(Categoria*,Item*);

  void verCategorias();
  void verItens();
  void verItens(Categoria*);
  void verItens(char* categoria);
  Item* escolherItem(Item*);
  Item* escolherItem(char* nome);
};