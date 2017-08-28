#include <iostream>
#include <list>

using namespace std;

class Dado{
  public:
    int valor;
    string nome;		
};

//Estrutura de dados para ordenacao
struct OrdenaDado2{
  bool operator()(Dado *d1, Dado *d2){
    return d1->valor > d2->valor;
  }
  bool operator() (Dado d1, Dado d2) {
	if  (d1.nome == d2.nome)
		return d1.valor < d2.valor;   
   return (d1.nome < d2.nome);
  }
};

struct OrdenaDado{
  bool operator()(Dado *d1, Dado *d2){
    return d1->valor > d2->valor;
  }
  bool operator() (Dado d1, Dado d2) {
    return d1.valor < d2.valor;
  }
};


int main(){
	//criar lista de dados e ordenar
	
	list<Dado> lista;	
	//Declara um objeto da classe dados
        Dado dado;
     	//coloca val dentro do obj
	dado.nome = "Goku";
	dado.valor = 8000;
	//coloca na lsta
	lista.push_back(dado);
        //coloca val dentro do obj
        dado.nome = "Vegeta";
        dado.valor = 7999;
        //coloca na lsta
        lista.push_back(dado);
        //coloca val dentro do obj
        dado.nome = "Gohan";
        dado.valor = 7000;
        //coloca na lsta
        lista.push_back(dado);

	cout << "Lista N ordenada" << endl;
	//Cria um iterador para a lista
	list<Dado>::iterator it;
	for(it = lista.begin(); it != lista.end(); ++it){
		cout<<"Nome: "<< it->nome << "\tValor: " << it->valor << endl;
	}
	      
	//ORDENA LISTA
	lista.sort(OrdenaDado());

	cout << "Lista Ordenada:" <<endl;
	for(it = lista.begin(); it != lista.end(); ++it){
		cout<<"Nome: " << it->nome << "\tValor: " <<it->valor << endl;
	}	
	

	//ordena lista 2
	
	lista.sort(OrdenaDado2());	

	cout << "Lista Ordenada:" << endl;
        for(it = lista.begin(); it != lista.end(); ++it){
                cout<<"Nome: " << it->nome << "\tValor:" << it->valor << endl;
        }


	return 0;
  
}
