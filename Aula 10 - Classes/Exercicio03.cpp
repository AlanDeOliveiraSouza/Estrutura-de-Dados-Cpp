/*  3 - Crie uma classe Estacionamento que tenha como atributos da classe dia, horaEntrada,
        horaSaida, e dois métodos o primeiro Solicita os dados para o usuário e o outro
        método calcule o valor a ser pago sendo que cada hora equivale a 5 reais
*/

#include <iostream>
using namespace std;

class Estacionamento{
    public: 
    
    int dia, horaEntrada, horaSaida;
    
    void solicitar(){
        cout << "Insira os dados:\n";
        cin >> dia >> horaEntrada >> horaSaida;
    }
    
    int calcularValor(){
        if(horaEntrada > horaSaida){
            return ((horaSaida + 24) - horaEntrada) * 5;
        } else{
            return (horaSaida - horaEntrada) * 5;
        }
    }
};

int main() {
    Estacionamento tarifa;
    
    cout << "||Inserindo dados de estacionamento||\n";
    tarifa.solicitar();
    
    cout << "O valor a ser pago é de R$" << tarifa.calcularValor() << ".";

    return 0;
}