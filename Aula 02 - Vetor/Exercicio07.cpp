/* 
  7 - Fazer um programa que, dados dois vetores de 7 posições cada , efetue as
  operações aritméticas básicas, indicadas por um terceiro vetor cujos dados
  também são fornecidos pelo usuário, gerando e imprimindo um quarto vetor.
*/
#include <iostream>
using namespace std;
 
int main()
{
    int vet1[7], vet2[7], i, v;
    double resp[7] = {{0}};
    char oper[7];
    
    cout << "|||EFETUANDO CÁLCULOS INFORMADOS PELO USUÁRIO|||\n\n";
    
    for(i=0;i<2;i++){
        cout << "Insira o primeiro valor do " << i+1 << "º cálculo:";
        cin >> vet1[i];
        
        cout << "Insira o segundo valor do " << i+1 << "º cálculo:";
        cin >> vet2[i];
        
        cout << "Insira a operação a ser realizada no " << i+1 << "º cálculo:\n";
        cout << "Digite o sinal da operação ('+' para adição, '-' para subtração,\n'*' para multiplicação e '/' para divisão).";
        cin >> oper[i];
        
        cout << "\n";
    }
    
    /* 
        Criei uma variável 'v' para verificar se o cálculo foi mesmo executado,
        caso contrário o resultado não será exibido.
    */
    cout << "||EXIBINDO RESULTADOS||\n";
    for(i=0;i<2;i++){
        v = 0;
        cout << "Cálculo " << i+1 << ": ";
        switch (oper[i]){
            case '+':
                resp[i] = vet1[i] + vet2[i];
                break;
            case '-':
                resp[i] = vet1[i] - vet2[i];
                break;
            case '*':
                resp[i] = vet1[i] * vet2[i];
                break;
            case '/':
                resp[i] = vet1[i] / vet2[i];
                break;
            default:
                cout << "Operação informada irregular! Não foi possível realizar seu cálculo.";
                v = 1;
                break;
        }
        if(v == 0){
            cout << resp[i] << "\n";
        } else {
            cout << "\n";
        }
    }

    return 0;
}