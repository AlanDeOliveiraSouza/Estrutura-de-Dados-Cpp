/* 
  2 - Ler valores inteiros para a matriz A[3][5]. Gerar e imprimir o vetor 
  Soma_Linha, onde cada elemento é a soma dos elementos de uma linha da 
  matriz A. Faça o trecho que gera a matriz separadamente da entrada e saída.
*/
#include <iostream>
using namespace std;
 
int main()
{
    int A[3][5], Soma_Linha[3] = {{0}}, i, j;
    
    // Populando a Matriz:
    cout << "Populando a Matriz:\n\n";
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            cout << "Digite o valor da " << i+1 << "º linha da " << j+1 << "º coluna:";
            cin >> A[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            Soma_Linha[i] += A[i][j];
        }
    }
    
    // Exibindo o vetor:
    cout << "\nExibindo o vetor das somas:\n";
    for(i=0;i<3;i++){
        cout << "Soma linha " << i+1 << ": " << Soma_Linha[i] << "\n";
    }
    
    return 0;
}