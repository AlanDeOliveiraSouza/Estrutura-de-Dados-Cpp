/* 
  5 - Ler os elementos de uma matriz de ordem 6 e imprima o SOMA dos
  elementos que estão abaixo da diagonal principal.
*/
#include <iostream>
using namespace std;
 
int main()
{
    int mat[6][6], i, j, soma = 0;
    
    cout << "Preenchendo matriz:\n";
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cout << "Insira o valor da " << i+1 << "º linha na " << j+1 << "º coluna:";
            cin >> mat[i][j];
            if(j == i-1){
                soma += mat[i][j];
            }
        }
    }
    
    cout << "A soma dos valores na diagonal abaixo da Diagonal Principal é de " << soma;
    
    return 0;
}