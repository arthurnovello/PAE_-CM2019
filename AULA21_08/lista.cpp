#include <iostream>
#include <list>

using namespace std;

int main(){
	list<int> lista;
	cout << "Tamanho da lista:" << lista.size() << endl;
	for (int i = 0; i < 10; i++){
		lista.push_back(i);
	}
	
	cout << "Tamanho da lista:" << lista.size() << endl;

	return 0;	
}
