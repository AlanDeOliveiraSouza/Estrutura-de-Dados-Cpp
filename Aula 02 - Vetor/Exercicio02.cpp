/*
  2 - Fazer um programa que digite vários números no vetor de tamanho máximo de 100 elementos,
  até digitar o número "0". Imprimir quantos números iguais ao últino número foram lidos.
  O limite de números é 100. Sem considerar o "0" como último número.
*/

#include <iostream>
using namespace std;

int main()
{
    int vetor [100], leitor, cont = 0, n = 0, ultimo;
    
    do {
        cout << "Digite o " << n+1 << "º número:";
        cin >> leitor; 
        if (leitor != 0){
            vetor[n] = leitor;
            n++;
            cont++;
        } else {
            ultimo = vetor[n-1];
        }
        
    } while (n<100 && leitor);
    leitor = -1;
    // Analisando os valores iguais ao último
    for (n=0;n<cont;n++) {
        if (vetor[n] == ultimo) {
            leitor++;
        }
    }
    cout << "\nForam lidos " << leitor << " valores iguais ao último lido (" << ultimo << ").";

    return 0;
}