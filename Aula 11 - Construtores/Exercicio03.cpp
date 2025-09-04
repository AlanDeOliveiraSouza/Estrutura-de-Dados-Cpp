/*
    3 - Escreva uma classe “EntradaDeCinema” com a seguinte estrutura (dados):
        - Int dia do filme
        - float horário
        - int sala
        - float valor
        
        E com as seguintes ações (métodos):
        - Construtor: com a finalidade de inicializar todos os atributos.
        - CalculaDesconto: que deve receber como parâmetro a data de nascimento do cliente (do tipo Data)
          e caso seja menor de 12 anos, deve ser dado um desconto de 50% no valor normal.
        - CalculaDesconto: que deve receber como parâmetro a data de nascimento do cliente (do tipo Data)
          e o número de sua carteira de estudante (do tipo int). Se o estudante tiver idade entre 12 e 15 anos,
          deve ser dado um desconto de 40%, de 16 a 20 um desconto de 30% e mais que 20 anos um desconto de 20% no valor normal.
        - CalculaDescontoHorário: esse método deve dar um desconto de 10% sobre o valor aferido após todas as
          outras opções de desconto, caso o horário do filme seja antes das 16 horas.
        - toString(): que deve imprimir todos os dados do ingresso.
*/

#include <iostream>
using namespace std;

class EntradaDeCinema{
    
    public:
    
        int dia_do_filme;
        float horario;
        int sala;
        float valor;
    
        EntradaDeCinema(){
            dia_do_filme = 24;
            horario = 15;
            sala = 7;
            valor = 25.00;
        }
        
        void CalculaDescontoIdade(int idade, int carteira){
            if(idade < 12){
                valor /= 2;
            }
        }
        
        void CalculaDescontoEstudante(int idade){
            if(idade >= 12 && idade <= 15){
                valor -= ((valor/10) * 4);
            } else if(idade >= 16 && idade <= 20){
                valor -= ((valor/10) * 3);
            } else if(idade > 20){
                valor -= ((valor/10) * 2);
            }
        }
        
        void CalculaDescontoHorario(){
            if(horario < 16){
                valor -= ((valor / 10) * 1);
            }
        }
        
        void toString(){
            cout << "Dados do Ingresso:\nDia do Filme - "<< dia_do_filme << "\nHorário - " << horario << ":00\nSala - " << sala << "\nTotal a Pagar - R$" << valor;
        }
};

int main(){
    EntradaDeCinema ingresso;
    
    cout << "ENTRADA DE CINEMA\n\n";
    ingresso.toString();
    
    
    return 0;
}