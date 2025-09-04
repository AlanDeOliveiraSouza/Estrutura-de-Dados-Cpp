/*
    2 - Escreva uma classe chamada classe “Comparavel” que tem como atributo um valor inteiro,
    um construtor para inicializar o atributo e os métodos éMaiorOuIgual, éMenorOuIgual e
    éDiferenteDe que recebem um valor do tipo int como parâmetro e retornam true se o valor encapsulado for,
    respectivamente, maior ou igual, menor ou igual ou diferente do passado como parâmetro.
*/

#include <iostream>
using namespace std;

class Comparavel{
    
    int numero;
    
    public:
        Comparavel(){
            numero = 10;
        }
        
        bool eMaiorOuIgual(int num){
            if(numero >= num){
                return true;
            } else{
                return false;
            }
        }
        
        bool eMenorOuIgual(int num){
            if(numero <= num){
                return true;
            } else{
                return false;
            }
        }
        
        bool eDiferenteDe(int num){
            if(numero != num){
                return true;
            } else{
                return false;
            }
        }
};

int main(){
    Comparavel comp;
    
    cout << "COMPARADOR\n";
    cout << "Comparando o número 10 com outros.\n\n";
    
    if(comp.eMaiorOuIgual(12) == true){
        cout << "O número É maior ou igual.\n\n";
    } else{
        cout << "O número NÃO É maior ou igual.\n\n";
    }
    
    if(comp.eMenorOuIgual(15) == true){
        cout << "O número É menor ou igual.\n\n";
    } else{
        cout << "O número NÃO É menor ou igual.\n\n";
    }
    
    if(comp.eDiferenteDe(10) == true){
        cout << "Os números são DIFERENTES.";
    } else{
        cout << "Os números são IGUAIS.";
    }
    
    return 0;
}