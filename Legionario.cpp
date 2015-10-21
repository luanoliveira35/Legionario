//versao 0.5
#include <iostream>
#include <string>
#include "legionario.h"
#include "Data.h"
 
 
using std::cout;
using std::endl;
 
int Legionario::legUnidades = 0;
int Legionario::maxAtk = 200;
 
//Construtor 1
Legionario::Legionario(){
    this->gritodeGuerra = "Nenhum Grito de Guerra Definido!";
    this->forca=0;
    this->velAtk=0;
    this->destreza = 0;
    this->inteligencia = 0;
    this->ano_nascimento = 0;
 
}
//construtor 2
Legionario::Legionario(string &gritodeGuerra){
    this->gritodeGuerra = gritodeGuerra;
    this->forca=30;
    this->velAtk=20;
    this->destreza = 10;
    this->inteligencia = 10;
    this->ano_nascimento = 500;
}
 
//Construtor 3 via copia
Legionario::Legionario( const Legionario &leg){
    this->gritodeGuerra = leg.gritodeGuerra;
    this->forca=leg.forca;
    this->velAtk=leg.velAtk;
    this->destreza = leg.destreza;
    this->inteligencia = leg.inteligencia;
    this->ano_nascimento = leg.ano_nascimento;
}
Legionario::Legionario(int ano){
:ano_nascimento(ano)
}
/////////////////////////////////////////Metodos////////////////////////////////////////////
void Legionario::gritar() const{
 cout<<leg.gritodeGuerra<<endl;
};
 
//na Classe Guerreiro há o Metodo com Alocação de Memoria
 
void Guerreiro::addItemBag(const int &itemId){
    int *aux = new int[itemQuantidade];
    for (int i = 0; i<itemQuantidade; i++)
          aux[i]= itens[i];
    delete [] itens;
        itens = new int[itemQuantidade];
    for(int i=0; i< itemQuantidade;i++)
        itens[itemQuantidade-1] = itemId;
    delete [] aux;
}
 
int Data::checarDia(int dia) const
{
    static const int diasPorMes[13]={0,31,28,31,30,30,31,31,30,31,30,31};
     
    if( dia>0 && dia<= diasPorMes[mes])
        return dia;
     
    if( mes == 2 && dia ==29 && (ano%400==0||(ano%4==0&&ano%100 !=0)))
        return dia;
         
        cout << "Dia inválido.\n";
     
    return 1;
}