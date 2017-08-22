#include <iostream>
#include <list>

using namespace std;

int main(){

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

}
