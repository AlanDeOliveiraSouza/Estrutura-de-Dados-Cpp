/* 
  6 - Escreva um programa que solicite ao usuário a idade de uma pessoa e
  informe se essa pessoa é criança (0 a 11 anos), adolescente (12 a 17 anos),
  adulta (18 a 49 anos) ou idosa (a partir de 50 anos).    
*/
#include <iostream>
using namespace std;
 
int main()
{
    int idade;
    
    cout << "Informe uma idade para saber em qual estágio da vida esta pessoa se encontra:\n";
    cin >> idade;
    
    if(idade >=0 && idade <= 11){
        cout << "Esta pessoa é criança.";
    } else if(idade >=12 && idade <= 17){
        cout << "Esta pessoa é adolescente.";
    } else if(idade >= 18 && idade <= 49){
        cout << "Esta pessoa é adulta.";
    } else if(idade >=50){
        cout << "Esta pessoa é idosa.";
    } else {
        cout << "Idade inválida.";
    }
 
    return 0;
}