// C program for implementation of Bubble sort
#include <stdio.h>
#include <cstdlib>
#include <time.h> //utilizar rotina do tempo
#include <iostream>

#define N 10000

using namespace std;
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{

    cout << "Teste de Tempo: "  << endl;
    int arr[N], i;
    for (i = 0; i < N; i++){
	int x;
	int j;
	do{
          x = (rand() /RAND_MAX) * N;
	  for(j = 0; j<i; j++)
	    if(arr[j] == x)
		break;
	}while(j != i);
	arr[i] = x;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    clock_t t = clock();
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
   

  

    float tempo = float(t) /float(CLOCKS_PER_SEC);

    printf("TEMPO: %.6f\n", tempo);

    return 0;

}


