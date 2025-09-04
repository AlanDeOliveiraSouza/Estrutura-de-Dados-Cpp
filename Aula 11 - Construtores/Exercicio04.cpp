/*
    4 - Crie uma classe Aluno contendo seu nome, número de matrícula e telefone.
        a) Crie dois construtores, um iniciando valores “vazios” e outro iniciando valores dados pelo teclado.
        b) Faça um método que imprima dados de dois alunos simultâneamente.
*/
 
#include <iostream>
using namespace std;
 
class Aluno{
    public:
    
        string nome;
        int mat;
        long tel;
    
        Aluno(){
            nome = "";
            mat = 0;
            tel = 0;
        }
        
        Aluno(string nome, int mat, long tel){
            this -> nome = nome;
            this -> mat = mat;
            this -> tel = tel;
        }
        
        void saidaDados(Aluno &aluno1, Aluno &aluno2){
            cout << "||DADOS DE DOIS ALUNOS||";
            cout << "\n\n|Aluno1|\nNome: " << aluno1.nome << "\nMatrícula: " << aluno1.mat << "\nTelefone: " << aluno1.tel;
            cout << "\n\n|Aluno2|\nNome: " << aluno2.nome << "\nMatrícula: " << aluno2.mat << "\nTelefone: " << aluno2.tel;
        }

};
 
int main(){
    Aluno Joao;
    Aluno Caio("Caio da Silva Benjamin", 32530, 13934523798);
    
    Joao.nome = "Joao Batista Júnior";
    Joao.mat = 35289;
    Joao.tel = 13981436511;
    
    Joao.saidaDados(Joao, Caio);
    
    return 0;
}