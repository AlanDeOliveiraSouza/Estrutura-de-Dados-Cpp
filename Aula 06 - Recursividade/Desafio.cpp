//  DESAFIO - Criar uma função recursiva que imprima a Sequência de Fibonacc.

#include <iostream>
#include <string>
using namespace std;

string fibonacci(int qtde, int cont, int ant, int atu){
    int novo = ant + atu;
    if(qtde == 1){
        return "1.";
    } else if(qtde == cont){
        return to_string(atu) + ".";
    } else {
        return to_string(atu) + ", " + fibonacci(qtde, cont+1, atu, novo);
    }
}

int main() {
    int seq;
    cout << "||Sequência de Fibonacci||\n\n";
    cout << "Insira a quantidade de valores da sequência para serem impressos: ";
    cin >> seq;
    cout << "Sequência de Fibonacci: " << fibonacci(seq, 1, 0, 1);
    return 0;
}