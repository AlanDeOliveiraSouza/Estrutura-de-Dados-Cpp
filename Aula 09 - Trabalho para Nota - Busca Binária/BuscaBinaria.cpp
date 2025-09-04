/*
  TP - Algoritmo de Busca Binária.
  Para realizar a Busca Binária, é necessário que o vetor esteja ordenado. 
  Crie um método que organize o vetor antes de realizar a busca.
*/

#include <iostream>
using namespace std;

int Busca_Binaria(int vet[], int t, int busca){
    
    int inf = 0, sup = (t-1), meio;
    
    while(inf<=sup){
        meio = ((inf + sup) / 2);
        if(vet[meio] == busca){
            return meio;
        } else if(busca < vet[meio]){
            sup = meio - 1;
        } else{
            inf = meio + 1;
        }
    }
    
    return -1;
}

void Ordenar(int vet[], int t){
    int c;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(vet[i]<vet[j]){
                c = vet[i];
                vet[i] = vet[j];
                vet[j] = c;
            }
        }
    }
    
    cout << "\n|||Realizando a Busca Binária|||\n\n";
    
    cout << "Informe o valor a ser buscado no vetor: ";
    int num;
    cin >> num;
    int posicao = Busca_Binaria(vet, t, num);
    if(posicao == -1){
        cout << "O valor não foi encontrado no vetor.";
    } else {
        cout << "O valor foi encontrado no índice " << posicao << " do vetor.";
    }
}

int main() {
    cout << "|||Busca Binária|||\n\n";
    
    cout << "Insira o tamanho do vetor a ser populado: ";
    int tam;
    cin >> tam;
    int vetor[tam];
    
    for(int i = 0; i < tam; i++){
        cout << "Insira o " << (i+1) << "º valor do vetor: ";
        cin >> vetor[i];
    }
    
    Ordenar(vetor, tam);
    
    return 0;
}