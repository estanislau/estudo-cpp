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
    // Variável contador 'cont' começa com valor = 1:
    int cont=1;
    // while irá se repetir até quanto a variável 'cont' for menor ou igual a variável 'n' (valor informado pelo usuário) 
    while(cont <= n){
        // '+=" é o mesmo que: soma=soma+cont
        // Incremento: 'soma' irá somar-se ao valor de 'cont'
        // primeira rodada: soma = 0 + 1, portanto soma = 1
        // segunda rodada: soma = 2 + 1, portanto soma = 3
        // terceira rodada: soma = 3 + 3, portanto soma = 6
        soma+=cont;
        // 'cont+=' é o mesmo que: 'cont+=1'
        // 'cont' esta somando de um em um
        // Primeira rodada: cont = 1 + 1, portanto 2 é menor que n, que vale 3
        // Segunda rodada: cont = 2 + 1, portanto 3 é igual a n, que vale 3
        // terceira rodada: cont = 3 +1, portanto = 4 que não é < e nem = n, que vale 3; final do WHILE
        cont++;

    }
    cout << "A soma dos números de 0 até " <<  n << " = " << soma << endl;

    return 0;
}