#include <iostream>

using namespace std;

// Estruturas de repepetição WHILE, DO-WHILE, FOR
// O programa calcula a soma de zero até o número escolhido pelo usuário, com todos os inteiros,
// por exemplo: a soma de 0 até 3 = 0+1+2+3 = 6
int main(){
    // Declaramos a variável com nome 'n' de tipo integral:
    int n;          
    // Solicitamos que o usuário informe um valor:
    cout << "Diga um número inteiro não negativo:\n";
    // A variável 'n' recebe o valor informado:
    cin >> n; 
    // Calcula a soma de n até o número informado.
    // A variável 'soma' começa com valor = 0:
    int soma=0;
   
// FOR : para
    // Variaável 'j' começa com valor 1 com condição final de 'j' menor ou igual a 'n'
    // primeira rodada: j + j = 2, portanto j vale agora 2; soma = 0 + j, ou seja, soma = 2 
    // segunda rodada: j + j = 2, portanto j vale agora 2; soma = 2 + 4, ou seja, soma = 6
    // se 'n=0' então pula 'j+=1' e vai direto para 'soma+
    for(int j=1; j <= n; j+=1){
        soma+=j;
    }

    cout << "A soma dos números de 0 até " <<  n << " = " << soma << endl;

    return 0;
} 