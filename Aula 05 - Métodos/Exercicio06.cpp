/*
  6 - Calcule a soma dos quadrados de dois números fornecidos pelo usuário.
  Trabalhe com chamada de métodos usadas como argumento de outros métodos.
  Dica: você vai criar 3 métodos onde duas delas estarão dentro de uma.

*/
#include <iostream>
using namespace std;

int i = 1;

int receberNumero(){
    int n;
    cout << "Insira o " << i << "º número a ser utilizado: ";
    cin >> n;
    i += 1;
    return n;
}

int quadrado(int n){
    return n * n;
}

void somar(int a, int b){
    int soma = a + b;
    cout << "\nO resultado da soma do quadrado dos números fornecidos é: " << soma;
}

int main() {
    
    cout << "Calculando a soma do quadrado de dois números\n\n";
    somar(quadrado(receberNumero()), quadrado(receberNumero()));

    return 0;
}