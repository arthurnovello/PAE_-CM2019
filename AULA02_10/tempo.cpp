#include <iostream>
#include <time.h> //utilizar rotina do tempo
#include <stdio.h>

using namespace std;

int main(){

  cout << "Teste de Tempo: "  << endl;
  int t = clock();
  for(int i = 0; i < 10000000000000000; i++){
    t = clock() - t;
  }
  float tempo = float(t) /float(CLOCKS_PER_SEC);

  printf("TEMPO: %.f\n", tempo);
}
