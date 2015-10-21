//Versao 0.5
#include <string>
#include "Data.h"
using std::string;
 
 
// Classe Humano - > 
class Humano {
	public:
		
    void conversar(const string ); 
    void correr(const int ); 
    void andar(const int ); 
  	
	private:
 		
    int forca;
    int velocidade;
    int altura;
    int cor;
    int inteligencia;
     
     
 
};
 
class Guerreiro : public Humano{
	
	public:
     
    void gritar( string );
    void atacar(const int , const int );
    void defender(); 
    void addItemBag( const int);
	
    private:
    
	int tecnica;
    int destreza;
    int forcaAtk;
    int veldefesa;
     
 
 
};
 
class Legionario:public Guerreiro
{
 
public:
    //Métodos e Construtores
    Legionario();//construtor1
    Legionario(string &);//construtor2
    Legionario(const string &);//construtor via copia
     
     
     
private:
    // Atributos Static e Const Static
     
    string gritodeGuerra;
    int forcaGolpeEspecial;
    int qtdEquip;
    static int legUnidades;
    const static int maxAtk;
     
    const Data ano_nascimento;
     
 
};
