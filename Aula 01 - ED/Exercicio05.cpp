/* 
  5 - Escreva um programa que solicite ao usuário um valor inteiro e informe
  se esse número é par ou ímpar.   
*/
#include <iostream>
using namespace std;
 
int main()
{
    int num;
    
    cout << "Informe um valor para saber se este é PAR ou ÍMPAR:";
    cin >> num;
    
    if(num % 2 == 0){
        cout << num << " é um número PAR.";
    } else {
        cout << num << " é um número ÍMPAR.";
    }
 
    return 0;
}