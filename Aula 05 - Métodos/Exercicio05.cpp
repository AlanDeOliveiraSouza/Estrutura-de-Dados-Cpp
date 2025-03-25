/*
  5 - Gere um método que trabalhe com fatorial, lembrando o fatorial é ele vezes a quantidade dele mesmo.
*/
#include <iostream>
using namespace std;

int fatorial(int n){
    for(int i = n-1; i >= 1; i--){
        n *= i;
    }
    return n;
}

int main() {
    int num;
    cout << "Insira um número para calcular seu fatorial:";
    cin >> num;
    cout << "Fatorial de " << num << " é " << fatorial(num);
    
    return 0;
}