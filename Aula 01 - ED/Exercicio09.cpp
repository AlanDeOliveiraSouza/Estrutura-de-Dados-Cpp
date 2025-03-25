/*
  9 - Escreva um programa que solicite ao usuário quatro números e mostre na
  tela o maior, o menor e a média aritmética dos números digitados.
*/
#include <iostream>
using namespace std;
int main() {
    int vet[4], i, c, soma = 0, C = 0;
    float med;
    
    cout << "Digite 4 números:";
    for(i=0;i<4;i++){
        cin >> vet[i];
        soma += vet[i];
        if(vet[i] > C){
            C = vet[i];
        }
        if(i > 0){
            if(vet[i] < vet[i-1]){
                c = vet[i];
            }
        } else{
            c = C;
        }
        
    }
    med = soma / 4;
    
    cout << "Maior número: " << C << "; Menor número: " << c << "; Média: " << med << ".";

    return 0;
}