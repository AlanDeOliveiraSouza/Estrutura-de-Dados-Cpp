/*  2 - Crie uma classe chamada Triangulo onde crie variáveis da classe e os métodos que
        são 2, o primeiro é para ver se é triangulo e o segundo é para ver que tipo de
        triangulo é, os três abaixo:
            -Escaleno – os 3 lados diferentes
            -Isósceles – 2 lados iguais
            -Eqüilátero – os 3 lados iguais
        Obs: Não esquecer de verificar primeiramente se é triangulo
*/

#include <iostream>
using namespace std;

class Triangulo{
    public: 
    
    int a, b, c;
    
    void criarForma(){
        cout << "Defina os lados do Triângulo:\n";
        cin >> a >> b >> c;
    }
    
    int verificarTriangulo(){
        if((a+b) > c && (b+c) > a && (a+c) > b){
            return 1;
        } else{
            return -1;
        }
    }
    
    string tipoTriangulo(){
        if((a == b) && (b == c)){
            return "Equilátero";
        } 
        if((a == b) || (b == c) || (c == a)){
            return "Isósceles";
        }
        if((a != b) && (b != c) && (c != a)){
            return "Escaleno";
        } else{
            return "Tipo não identificado";
        }
    }
};

int main() {
    Triangulo forma;
    
    cout << "||Inserindo lados do Triângulo||\n";
    forma.criarForma();
    
    if(forma.verificarTriangulo() == -1){
        cout << "Isto não é um triângulo.";
    } else {
        cout << "Isto é um Triânulo ";
        cout << forma.tipoTriangulo();
    }

    return 0;
}