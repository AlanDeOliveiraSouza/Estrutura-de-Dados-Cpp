/* 
  8 - Crie um programa que solicite ao usuário os três ângulos de um triângulo e informe se este é um triângulo equilátero, isósceles ou escaleno.     
*/
#include <iostream>
using namespace std;
 
int main()
{
    float la, lb, lc;
    
    cout << "Descobrindo qual é o tipo de triângulo:\n";
    
    cout << "Insira o 1º lado:";
    cin >> la;
    
    cout << "Insira o 2º lado:";
    cin >> lb;
    
    cout << "Insira o 3º lado:";
    cin >> lc;
    
    if(la == lb && lb == lc && lc == la){
        cout << "Este triângulo é Equilátero.";
    } else if(la == lb || lb == lc || lc == la){
        cout << "Este triângulo é Isósceles.";
    } else if(la != lb && lb != lc && lc != la){
        cout << "Este triângulo é Escaleno.";
    }
 
    return 0;
}