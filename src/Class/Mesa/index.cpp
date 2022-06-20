#include "./interface.hpp"

Mesa::Mesa(Cardapio* cardapio){
  this->cardapio  = cardapio;
}

void Mesa::iniciarComanda(){
 this->status = STATUS_MESA::ABERTO;
};

void Mesa::chamarGarcom(){

};

void Mesa::verItem(){

};

void fazerPedido(int idItem){

};

void fazerPedido(std::string nomeItem){

};