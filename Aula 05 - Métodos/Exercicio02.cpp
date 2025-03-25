/*
  2 - Escreva um método que receba um inteiro positivo e, se este número for primo retorne 1,
  caso contrário retorne 0.
*/
#include <iostream>
using namespace std;

int primo(int n){
        if(n == 1){
            return 0;
        }
    for(int i = 1; i <= n; i++){
        if(n%i == 0 && i != 1 && i != n){
            return 0;
        }
    }
    return 1;
}

int main() {
    int numero;
    cout << "Insira um número inteiro positivo para saber se ele é primo (1 = É Primo, 0 = Não é Primo)\n";
    cin >> numero;
    cout << primo(numero);
    
    return 0;
}