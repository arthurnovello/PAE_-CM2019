#include <iostream>
#include <list>

using namespace std;

//cria uma classe definida pelo usuario
class Dados{
	//elementos soh conhecidos pela classe
	private:
		float valor;
		string nome;
	//tudo publico d classe, todos tem acesso
	public:
		//cria uma forma de pegar os valores da classe
		string getNome(){
			return nome;
		}
	
		float getValor(){
			return valor;
		}
		void setValor(float v){
			valor = v;
		}
		void setNome(string n){
			nome = n;
		}
};

int main(){
	//Declara um objeto da classe dados
	Dados dados;
	//instanciar a classe
	//dados = new Dados();
	//pede para o usuario falar um valor
	cout << "inf um valor: ";
	float x;
	cin>>x;
	//coloca o val inf dentro do obj
	dados.setValor(x);
	//Exibe val inf pelo usuario
	cout << "val do obj: "<<dados.getValor();
	return 0;
}
