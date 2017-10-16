#include <iostream>
#include <vector>
using namespace std;

typedef vector <int> vetor;

 void BubbleSort (vetor &v, int *troc)
 {
  for (int i=0;i<v.size()-1;i++)
  {
   for (int j=0;j<v.size()-1;j++)
   {
    if (v[j]>v[j+1])
    {
      *troc++;
      swap (v[j],v[j+1]);
    }

   }
  }
}

  int main()
  {
  vetor v;

  int alen;
  int nro;
  int troc=0;

  cin >> alen;

  for(int i = 0; i<alen; i++){
    cin >> nro;
    v.push_back(nro);
  }
  
  BubbleSort(v, &troc);

  cout << troc;

  return 0;
  }
