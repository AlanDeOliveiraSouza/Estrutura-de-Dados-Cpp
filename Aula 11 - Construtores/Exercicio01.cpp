/*
    1 - Baseado no diagrama de classe abaixo faça a classe no C++.
    ---------------------------------------------------------
                            Conta
    ---------------------------------------------------------
        + número: int
        + saldo: double
        + limite: double
        + nome: string
    ---------------------------------------------------------
        ~Conta (int, double, double, string)
        + saca (valor: double) bool
        + deposita (valor: double)
        + transfere ( destino: Conta, valor: double) bool
    ---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Conta{
    
    public:
        int numero;
        double saldo;
        double limite;
        string nome;
        
        Conta(int numero, double saldo, double limite, string nome){
            this -> numero = numero;
            this -> saldo = saldo;
            this -> limite = limite;
            this -> nome = nome;
        }
        
        bool Saca(double valor){
            if(valor <= saldo){
                saldo -= valor;
                return true;
            } else{
                return false;
            }
        }
        
        void Deposita(double valor){
            saldo += valor;
        }
        
        bool Transfere(Conta &destino, double valor){
            if(Saca(valor) == true){
		destino.Deposita(valor);
                return true;
            } else{
                return false;
            }
        }
    
};

int main(){
    Conta MinhaConta(12, 1200.99, 1500, "Alan de Oliveira Souza");
    Conta OutraConta(15, 260.75, 400, "José Gustavo Silva");
    
    cout << "Saldo de Minha Conta: " << MinhaConta.saldo << "\n\n";
    cout << "Saldo de Outra Conta: " << OutraConta.saldo << "\n\n";
    
    cout << "Sacando R$50 de Minha Conta\n";
    MinhaConta.Saca(50);
    cout << MinhaConta.saldo << "\n\n";
    
    cout << "Depositando R$100 em Minha Conta\n";
    MinhaConta.Deposita(100);
    cout << MinhaConta.saldo << "\n\n";
    
    cout << "Transferindo R$50 de Minha Conta para Outra Conta\n";
    MinhaConta.Transfere(OutraConta, 50);
    cout << "Saldo minha Conta\n";
    cout << MinhaConta.saldo << "\n\n";
    cout << "Saldo Outra Conta\n";
    cout << OutraConta.saldo;

    return 0;
}