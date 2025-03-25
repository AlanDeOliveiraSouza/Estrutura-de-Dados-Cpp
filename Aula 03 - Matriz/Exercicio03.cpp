/* 
  3 - Criar uma matriz 2x3. Gerar e imprimir a transposta dessa matriz.
  A matriz transposta é gerada trocando linha por coluna.
*/
#include <iostream>
using namespace std;
 
int main()
{
    int mat[2][3], matT[3][2], i, j;
    
    cout << "||Criando Matriz e imprimindo sua transposta||\n\n";
    
    cout << "Populando a Matriz:\n";
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout << "Digite o valor da " << i+1 << "º linha e da " << j+1 << "º coluna:";
            cin >> mat[i][j];
            // Atribuindo os valores para a matriz transposta:
            matT[j][i] = mat[i][j];
        }
    }
    
    cout << "\nExibindo Matriz transposta:\n";
    
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cout << matT[i][j] << "\t";
        }
        cout << "\n";
    }
    
    return 0;
}