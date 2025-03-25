/*
  3 - Criar um programa que crie um vetor com 10 posições e carregue com uma palavra,
  depois imprima o vetor de uma maneira que exiba a palavra ao contrário (ex: casa...asac).
*/

#include <iostream>
using namespace std;

int main()
{
    char vetor [10] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', 'a', 'd', 'o'};
    int i;
    cout << "Palavra invertida: ";
    for (i=9;i>=0;i--){
        cout << vetor[i];
    }
    return 0;
}