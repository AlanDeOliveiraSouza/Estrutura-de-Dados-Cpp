/*
  3 - Escreva um método que receba o ano e retorne 1 se for bissexto e 0 se não for.
  Um ano é bissexto quando divisível por 4, mas não por 100.
  Um ano também é bissexto quando divisível por 400.
*/
#include <iostream>
using namespace std;

int bissexto(int a){
    if(a % 4 == 0 && a % 100 != 0){
        return 1;
    } else if(a % 400 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int ano;
    cout << "Analisando se um ano é bissexto ou não (1 = É Bissexto, 0 = Não é Bissexto):\n\n";
    cout << "Insira um ano:";
    cin >> ano;
    cout << bissexto(ano);
    
    return 0;
}