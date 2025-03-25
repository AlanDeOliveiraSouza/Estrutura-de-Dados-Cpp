/*
  1 - Desenvolva um programa que tenha dois métodos fahrenheit e celsius,
  onde você entra com um valor em fahrenheit e transforma em celsius e vice e versa.
*/
#include <iostream>
using namespace std;

int celsius(int f){
    int c = (f - 32) * 5/9;
    return c;
}

int fahrenheit(int c){
    int f = (c * 9/5) + 32;
    return f;
}

int main() {
    int Celsius, Fahrenheit;
    cout << "Calculando graus Celsius e Fahrenheit:\n\n";
    cout << "Insira uma temperatura em Celsius para torná-la em Fahrenheit:";
    cin >> Celsius;
    cout << fahrenheit(Celsius) << "º Fahrenheit.\n";
    
    cout << "\nInsira uma temperatura em Fahrenheit para torná-la em Celsius:";
    cin >> Fahrenheit;
    cout << celsius(Fahrenheit) << "º Celsius.";
    
    
    return 0;
}