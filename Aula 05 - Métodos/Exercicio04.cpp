/*
  4 - Desenvolver um programa onde você entre via teclado com dois valores e após a digitação o usuário escolha um seletor de opção (menu) com as seguintes opções:
      - Multiplicação;
      - Adição;
      - Divisão;
      - Subtração;
      - Fim do processo;
*/
#include <iostream>
using namespace std;

float adicao(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
    return a - b;
}

float multiplicacao(float a, float b){
    return a * b;
}

float divisao(float a, float b){
    return a / b;
}

int main() {
    int operacao;
    float a, b;
    
    cout << "insira o primeiro valor:";
    cin >> a;
    cout << "Insira o segundo valor:";
    cin >> b;
    
    cout << "Informe a operação que deseja realizar de acordo com o número\n";
    cout << "(1 - Adição, 2 - Subtração, 3 - Multiplicação, 4 Divisão, 5 - Finalizar Programa):\n";
    cin >> operacao;
    
    switch(operacao){
        case 1:
            cout << "Adição selecionada\n";
            cout << adicao(a, b);
            break;
        case 2:
            cout << "Subtração selecionada\n";
            cout << subtracao(a, b);
            break;
        case 3:
            cout << "Multiplicação selecionada\n";
            cout << multiplicacao(a, b);
            break;
        case 4:
            cout << "Divisão selecionada\n";
            cout << divisao(a, b);
            break;
        case 5:
        cout << "Programa finalizado.";
            return 0;
            break;
    }
    
    return 0;
}