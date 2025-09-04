/*
Dado o exercício do calendário transforme-o em uma classe com seus 3 métodos e
crie um objeto no “main “ e manipule a classe.

Método 1: Ano Bissexto;
Método 2: Dia da Semana;
Método 3: imprimir Calendário.

Criar a classe com os atributos da classe, construtor parâmetrizado e esses 3
métodos na classe. No programa principal faça o objeto e imprima o calendário. 
*/

#include <iostream>
using namespace std;

class Calendario{
    
    public:
        int mes, ano;
        string nomeMes;
    
        Calendario(int dia, int mes, int ano, string nomeMes){
            this -> mes = mes;
            this -> ano = ano;
            this -> nomeMes = nomeMes;
        }
    
        bool bissexto(){
            if( ( (ano % 4 == 0) && (ano % 100 != 0) ) || (ano % 400 == 0) ){
                return true; 
            } else {
            return false; 
            }
        }
        
        int diaDaSemana(int dia, int mes, int ano){
            int f = ano + dia + 3 * (mes - 1) - 1;
            if (mes < 3){
                ano--;
            }
            else{
                f -= int(0.4 * mes + 2.3);
            }
            
            f += int (ano / 4) - int ((ano / 100 + 1) * 0.75);
            
            f %= 7;
            
            return f+1;
        }
        
        void imprimirCalendario(){
            
            cout << "||" << nomeMes << " / " << ano << "||\n\n";
        
            cout <<"DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n";
            
            short TamanhoDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            
            if (bissexto() == true){
                TamanhoDoMes[1] = 29;
            }
            
            for(int j = 1; j < diaDaSemana(1, mes, ano); j++){
                
                cout <<'\t';
            }   
            for(int dia = 1; dia <= TamanhoDoMes[mes - 1]; dia++){ 
                
                if(dia < 10){
                    
                    cout << '0' <<dia <<'\t';
                    
                } else{
                    
                    cout <<dia <<'\t'; 
                    
                }
                
                if(diaDaSemana(dia, mes, ano) == 7){
                    
                    cout <<'\n'; 
                    
                }
            } 
            
        }
};

int main(){
    
    Calendario mesA(1, 5, 2025, "Maio");
    
    Calendario mesB(1, 2, 2024, "Fevereiro");
    
    mesA.imprimirCalendario();
    
    cout << "\n";
    
    mesB.imprimirCalendario();

    return 0;
}