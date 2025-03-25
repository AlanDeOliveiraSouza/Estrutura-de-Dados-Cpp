/* 
  4 - Crie um programa que solicite ao usuário os lados de um trapézio e
  informe a sua área.  
*/
#include <iostream>
using namespace std;
 
int main()
{
    float B_ase, b_ase, altura, area;
    
    cout << "||CALCULANDO ÁREA DO TRAPÉZIO||\n"; 
    
    cout << "Informe a base inferior do trapézio:";
    cin >> b_ase;
    
    cout << "Informe a base superior do trapézio:";
    cin >> B_ase;
    
    cout << "Informe a altura do trapézio:";
    cin >> altura;
    
    area = ((B_ase + b_ase) * altura) / 2;

    cout << "Área do trapézio: " << area;
 
    return 0;
}