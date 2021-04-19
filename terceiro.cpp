#include <iostream>     // biblioteca de entrada e saída
#include <math.h>       // biblioteca matemática


using namespace std;

int main(){
    int a = 5, b = 2;
    
    int soma = a + b;
    cout << "Soma: " << soma << endl;
    // cout << "Soma: " << a + b << endl;      // outra forma de dar saída sem determinar uma variável

    int subtracao = a - b;
    cout << "Subtracao: " << subtracao << endl;

    int multiplicacao = a * b;
    cout << "Multipicação: " << multiplicacao << endl;

    int divisao = a / b;
    cout << "Quociente da divisão: " << divisao << endl;    // apenas o quociente da divisão

    int divisaoresto = a % b;                               // resto da divisão
    cout << "Resto da divisão: " << divisaoresto << endl;

    float divisaointeira = (float) a / (float) b;           // divisão inteira com float
    cout << "Divisão inteira: " << divisaointeira << endl;

// com o acréscimo da biblioteca 'math.h'
    float potencia = pow(a, b);                             // 'pow' é a função da biblioteca 'math.h' que calcula a potência
    cout << "Potência: " << potencia << endl;

// Incremento e Decremento
    cout << "O 'a' antigo vale: " << a << endl;
    //a = a + 1; essa é uma forma de incremento
    //a += 1; essa é outra forma (a mais recomendável)
    //a ++; ainda outra forma de incremento
    //a = a - 1; uma forma de decremento
    //a -= 1; outra forma de decremento
    //a --;
    a *= 2;       // incremento com multiplicação
    cout << "O 'a' com incremento vale: " << a << endl;




    return 0;
}