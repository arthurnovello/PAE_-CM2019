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

/*int main(){

	//cria lista pra numeros interos
	list<int> lista;
	//tamanho lista
	cout << lista.size() << endl;
	//coloca elemento na lista
	lista.push_back(23);
	cout << lista.size() << endl;
	
	for(int i=3; i<10; i++){
		lista.push_back(i);
	}
	
	//navegar na lista
	list<int> :: iterator it;
	
	//exibe toda lista
	for(it=lista.begin(); it!=lista.end(); it++){
		cout <<*it<<endl;
	}

	cout<<endl;

	//insere elemento na pos 3
	it=lista.begin();
	for(int i = 0; i<3; i++){
		++it;
	}
	lista.insert(it, 135);

        //exibe toda lista
        for(it=lista.begin(); it!=lista.end(); it++){
                cout <<*it<<endl;
        }

	cout<<endl;

	//ordena a lista
	lista.sort();

	//exibe toda lista ordenada
        for(it=lista.begin(); it!=lista.end(); it++){
                cout <<*it<<endl;
        }

	return 0;

}*/

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
