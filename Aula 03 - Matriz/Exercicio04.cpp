/* 
  4 - Criar uma matriz de ordem 5 e imprima: toda a matriz e depois os
  números que se encontram em posições cuja a linha mais a coluna formam
  um número ímpar.
*/
#include <iostream>
using namespace std;
 
int main()
{
    int mat[5][5], i, j;
    
    cout << "Preenchendo matriz:\n";
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout << "Insira o valor da " << i+1 << "º linha na " << j+1 << "º coluna:";
            cin >> mat[i][j];
        }
    }
    
    cout << "\nExibindo matriz:\n";
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    
    cout << "\nExibindo valores que tenham a soma de sua posição ímpar:\n";
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if((i+j) % 2 != 0){
                cout << mat[i][j] << "\t";
            }else {
                cout << "_\t";
            }
        }
        cout << "\n";
    }
    
    return 0;
}