/* 
  3 - Crie um programa que solicite ao usuário os lados de um triângulo e
  informe a sua área.  
*/
#include <iostream>
using namespace std;
 
int main()
{
    float base, altura, area;
    
    cout << "||CALCULANDO ÁREA DO TRIÂNGULO||\n"; // A partir da altura e da base
    
    cout << "Informe a base do triângulo:";
    cin >> base;
    
    cout << "Informe a altura do triângulo:";
    cin >> altura;
    
    area = (base * altura) / 2;
    cout << "Área do triângulo: " << area;
 
    return 0;
}