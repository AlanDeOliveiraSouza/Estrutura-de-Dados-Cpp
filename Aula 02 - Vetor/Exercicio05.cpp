/*
  5 - Criar um programa que leia dados de um vetor de 12 elementos inteiro. 
  Imprima o maior e menor sem ordenar, o percentual de números pares
  e a média dos elementos do vetor.
*/

#include <iostream>
using namespace std;

int main()
{
    int vet[12], a, l, mai, men, total = 0, pares = 0;
    cout << "||Populando um vetor e realizando cálculos com seus valores||\n\n";
    
    for(a=0;a<12;a++){
        cout << "Insira o " << a+1 << "º número:";
        cin >> l;
        vet[a] = l;
        
        // Salvando valores maiores e menores:
        if(a == 0){
            mai = l;
            men = l;
        } else {
            if(l < men){
                men = l;
            } else if(l > mai){
                mai = l;
            }
        }
        
        // Somando todos:
        total += l;
        
        //Somando os pares:
        if (l%2==0){
            pares ++;
        }
    }
    
    // Exibindo maior e menos valor:
    cout << "\nMaior valor: " << mai << ", menor valor: " << men << ".";
    
    //Percentual de pares:
    double perc = (100/12) * pares;
    cout << "\nPercentual de pares: Aprox." << perc << "%.";
    
    //Média de elementos:
    double media = total/12;
    cout << "\nMédia dos valores: Aprox." << media << ".";
    
    return 0;
}