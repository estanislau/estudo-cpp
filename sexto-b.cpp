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
// DO...WHILE = Faça isso enquanto
    // Já começa contando 1 (um), então, se 'n' = 0 o resultado será 1 (cuidado!)
   do {
       soma+=cont;
       cont++;
    // Faça isso enquanto o valor de 'cont' seja menor ou igual a 'n'
   } while(cont <= n);
    cout << "A soma dos números de 0 até " <<  n << " = " << soma << endl;

    return 0;
} 