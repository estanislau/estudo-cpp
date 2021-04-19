#include <iostream>

using namespace std;

int main(){      
    // tipos de variáveis                   
    // int inteiro = 5; podemos declarar a variável aqui ou desmembrar em dois como abaixo
    int inteiro;
    inteiro = 5.2;               
    cout << inteiro << endl; 

    float real;
    real = 5.2;
    cout << real << endl;   

    float real2;
    real2 = 5.2e99;
    cout << real2 << endl;    // a saída será 'if_' if_ormando que é maior do que suportado pelo tipo float

    double realdouble;         // o tipo double aceita números muito maiores do que o tipo float
    realdouble = 5.2e99;
    cout << realdouble << endl;

    bool booleano;
    booleano = true;
    cout << booleano << endl;   // a saída para 'true' é 1 (um) e para false será 0 (zero)

    bool booleano2;
    booleano2 = false;
    cout << booleano2 << endl;

    char letra;
    letra = 'b';                // valor de ariável tipo char precisa estar entre aspas simples
    cout << letra << endl;

    string palavra;             // o tipo string aceita palavras
    palavra = "bola";           // valor variável tipo string devem estar entre aspas duplas
    cout << palavra << endl;

   
    // Entradas em algoritmos
    int idade;
    cout << "Qual a sua idade?" << endl;
    cin >> idade;               // cin significa 'entrada em c' e solicita uma entrada
    cout << "Sua ídade é: " << idade << endl;
                                    
    return 0;                     
}


// 'main' determina que essa é a função 'principal'
// 'int' é 'variável do tipo inteiro' e 'inteiro' é o nome de nossa variável que no exemplo tem valor '5'
// '<<' determina o que será a saída
// 'endl' significa "end line" ou seja 'final de linha';
// 'cout' significa 'saída de c'
// 'return 0' determina que o programa termina aqui

