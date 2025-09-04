/*  1 - Criar uma classe matemática que contenham dois atributos da classe A, B inteiros e 
    os seguintes métodos: 
    Entrada de dados, soma, multiplicação, subtração e divisão (fazer o tratamento da 
    divisão, não dividir por zero)
*/

#include <iostream>
using namespace std;

class Matematica{
    public: 
    
    int A, B;
    
    void entrada(){
        cout << "Digite dois números: ";
        cin >> A >> B;
    }
    
    int soma(){
        return A + B;
    }
    
    int multiplicacao(){
        return A * B;
    }
    
    int subtracao(){
        return A - B;
    }
    
    string divisao(){
        if(B == 0){
            return "Não é possível realizar divisão por 0.";
        } else {
            return to_string(A / B);
        }
    }
};

int main() {
    Matematica objeto;
    
    cout << "||Inserindo atributos||\n";
    objeto.entrada();
    
    int op;
    cout << "||Escolha a operação a ser realizada|| \n";
    cout << "Insira o número de acordo com a operação\n";
    cout << "1 - Soma;\n2 - Subtração;\n3 - Multiplicação;\n4 - Divisão.\n";
    cin >> op;
    switch (op) {
        case 1:
            cout << "Resultado: " << objeto.soma();
            break;
        case 2: 
            cout << "Resultado: " << objeto.subtracao();
            break;
        case 3:
            cout << "Resultado: " << objeto.multiplicacao();
            break;
        case 4: 
            cout << "Resultado: " << objeto.divisao();
            break;
    }

    return 0;
}