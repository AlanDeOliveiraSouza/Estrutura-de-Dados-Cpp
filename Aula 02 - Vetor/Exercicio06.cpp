/* 
  6 - Criar um vetor com a 8 elementos e ordená-los.
*/
#include <iostream>
using namespace std;
 
int main()
{
    int i, j, c;
    double vetor[8], l;
    
    cout << "Realizando leitura de um vetor e ordenando-o\n\n";
    
    for(i=0;i<8;i++){
        cout << "Insira o " << i+1 << "º valor:";
        cin >> vetor[i];
    }
    
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(vetor[i]<vetor[j]){
                c = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = c;
            }
        }
    }
    
    for(i=0;i<8;i++){
        cout << "\n" << i+1 << "º valor: " << vetor[i];
    }
 
    return 0;
}