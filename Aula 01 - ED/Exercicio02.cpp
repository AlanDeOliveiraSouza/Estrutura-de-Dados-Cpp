/* 
  2 - Crie um programa que solicite ao usuário os lados de um retângulo e
  informe a sua área. 
*/
#include <iostream>
using namespace std;
 
int main()
{
    float ladoa, ladob, area;
    
    cout << "||CALCULANDO ÁREA DO RETÂNGULO||\n\n";
    
    cout << "Informe a altura do retângulo:";
    cin >> ladoa;
    
    cout << "Informe a largura do retângulo:";
    cin >> ladob;
    
    area = ladoa * ladob;
    
    cout << "\nÁrea do retângulo: " << area;
 
    return 0;
}