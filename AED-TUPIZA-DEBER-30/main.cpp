#include <iostream>
#include <fstream>
#include "deber30.h"

using namespace std;
using namespace heapsort;


int main()
{
  ofstream archivo;
  archivo.open("heapsort.txt",ios::out);
    int A[100],n;
    archivo<<"Ordenamiento Heapsort"<<endl;
    cout<<"Ingresa la cantidad de elementos del arreglo: ";
    cin>>n;
    archivo<<"Arreglo original: ";
    for(int i=1;i<=n;i++){
      cout<<"Ingresa el numero: ";
      cin >> A[i];
      archivo<< "|"<<A[i]<<"| ";
    }
    HeapSort(A, n);
    cout<<"El orden es:";
    
archivo<<endl<<"Arreglo ordenado: ";
    
    for(int i=1;i<=n;i++){
      cout<< "|"<<A[i]<<"| ";
      archivo<< "|"<<A[i]<<"| ";
    }
    archivo.close();

    
    return 0;
}
