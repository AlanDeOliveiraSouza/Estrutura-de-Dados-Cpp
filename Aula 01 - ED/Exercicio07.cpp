/* 
  7 - Escreva um programa que solicite ao usuário um ano qualquer e informe se esse ano é bissexto. Um ano é considerado bissexto se ele for divisível por quatro, mas não por 100. Ou então se ele for divisível por 400.     
*/
#include <iostream>
using namespace std;
 
int main()
{
    int ano;
    
    cout << "Informe um ano para saber se este é bissexto:\n";
    cin >> ano;
    
    if(ano % 4 == 0 && ano % 100 != 0){
        cout << "Este ano é bissexto.";
    } else if(ano % 400 == 0){
        cout << "Este ano é bissexto.";
    } else{
        cout << "Este ano não é bissexto.";
    }
 
    return 0;
}