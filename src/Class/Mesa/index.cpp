#include "./interface.hpp"

Mesa::Mesa(Cardapio* cardapio){
  this->cardapio  = cardapio;
}

void Mesa::iniciarComanda(){
 this->status = STATUS_MESA::ABERTO;
};

void Mesa::chamarGarcom(){

};

void Mesa::visualizarCardapio(){

};

void Mesa::fazerPedido(){

};
