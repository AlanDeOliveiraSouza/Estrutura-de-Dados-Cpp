/* 
  1 - Criar uma matriz de ordem 4 e exibir a soma da diagonal principal.
*/
#include <iostream>
using namespace std;
 
int main()
{
    int mat[4][4], i, j, soma = 0;
    
    cout << "Preencha a matriz:\n\n";
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout << "Insira o valor da posição (" <<  i << ", " << j << "):";
            cin >> mat[i][j];
            if(i==j){
                soma += mat[i][j];
            }
        }
    }
    
    cout << "A soma da Diagonal Principal é de " << soma << ".";
    
    return 0;
}