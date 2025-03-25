/*
  1 - Fazer um programa que leia vários números inteiros e positivos.
  A leitura se encerra quando encontrar um número negativo ou quando o vetor ficar completo.
  Sabe-se que o vetor possui, no máximo, 10 elementos. Gerar e imprimir um vetor onde
  cada elemento é o inverso do correspondente do vetor original.
*/

#include <iostream>
using namespace std;

int main()
{
    int vetor1 [10] = {{0}}; // Vetor original
    int vetor2 [10] = {{0}}; // Vetor inverso
    int c;
    int d = 10;
    int leitor;
    for (c=0; c<10; c++){
        cout << "Digite o " << (c+1) << "º número:";
        cin >> leitor;
        if(leitor > 0){
            d--;
            vetor1[c] = leitor;
            vetor2[d] = leitor;
        } else {
            break;
        }
    }
    
    // Exibindo o vetor inverso:
    cout << "\nExibindo o Vetor inverso:\n";
    for (c=0;c<10;c++) {
        cout << "Valor 1: " << vetor2[c] << "\n";
    }

    return 0;
}