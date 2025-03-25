/* 
  1 - Crie um programa que solicite ao usuário os três coeficientes
  de uma equação do segundo grau e informe os valores de x’ e x’’.
*/
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int a_var, b_var, c_var, delta;
    cout << "CALCULANDO EQUAÇÃO DE GRAU 2:\n";

    cout << "Digite o valor de a:\n";
    cin >> a_var;
    
    cout << "Digite o valor de b:\n";
    cin >> b_var;
    
    cout << "Digite o valor de c:\n";
    cin >> c_var;
    
    delta = (pow(b_var, 2) - 4 * a_var * c_var);
 
    if(delta >= 0){
        int x_1 = (-(b_var) + sqrt(delta)) / (2 * a_var);
        int x_2 = (-(b_var) - sqrt(delta)) / (2 * a_var);
        
        cout << "X' = " << x_1 << ", X'' = " << x_2;
    } else {
        cout << "Não foi possível calcular a equação.";
    }
 
    return 0;
}