#include <iostream>

#define pi 3.14               // definição de uma constante, ou seja, um valor que não irá variar no decorrer do programa
#define c_curtir cout << "\nCurta o meu canal\nque é muito mais legal!\n";

using namespace std;

// int t = 1; é o exemplo de uma variável global, ou seja, válida para todas as funções

void f_inscrever(){             // 'void' determina umma função apenas de saída, '()' if_orma que não tem argumento
    cout << "Inscreva-se no canal\nque é muito legal\n";

}
//int f_somar(int x, int y){    // nome da função: f_somar com duas entradas: x e y que receberão os valores de 'a' e 'b' 
int f_somar(int &x, int &y){    // nome da função: f_somar com duas entradas contendo '&' irá ignorar os valores de 'a' e 'b'
        int v_soma;             // é uma variável 'local' pois somente vale dentro desta função
       // x = 30;               // em 'O resultado da função 'f_somar' é: ' será um se esta variável 'x' vier aqui ou depois de 'v_soma = x + y;'
        v_soma = x + y;
        x = 30;
        // y = 15;
        return v_soma;

}               

int main(){                     // é uma função denominada "main" do tipo inteiro (int)
    f_inscrever();              // esta chamando a função
    f_inscrever();
    
    int a = 5, b = 4;          // declaramos duas variáveis denominadas, respectivamente, 'a' e 'b' e seus respectivos valors
    int s;                     // declaramos uma variável denominada 's'
    s = f_somar(a, b);          // a variável 's' recebe o retorno da função 'f_somar' que recebe a entrada de 'a' e 'b'
    
    cout << "O valor de 'a' (obs: será diferente se alterado por '&x') é: " << a << endl;
    cout << "O valor de 'b' é: " << b << endl; 
    
    cout << "O resultado da função 'f_somar' é: " << s << endl;

    cout << "o valor de PI é: " << pi << endl;

    c_curtir;

    return 0;
}