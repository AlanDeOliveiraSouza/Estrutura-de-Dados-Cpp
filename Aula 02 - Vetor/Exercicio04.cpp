/*
  4 - Ler um vetor V de 10 elementos e obter um vetor W cujos componentes
  são os fatoriais dos respectivos componentes de V.
*/

#include <iostream>
using namespace std;

int main()
{
    int vetV[10], vetW[10], i, j;
    
    cout << "||Lendo um vetor de 10 valores||\n";
    for(i=0;i<10;i++){
        cout << "Insira o " << i+1 << "° valor:";
        cin >> vetV[i];
    }
    
    cout << "\n||Vetor fatorial||\n";
    for(i=0;i<10;i++){
        vetW[i] = vetV[i];
        cout << i+1 << "° valor fatorial: ";
        for(j=vetV[i]-1;j>0;j--){
            vetW[i] *= j;
        }
        cout << vetW[i] << "\n";
    }
    
    return 0;
}