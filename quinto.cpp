#include <iostream>

using namespace std;

int main(){
    float v_nota1, v_nota2;
    cout << "Informe a nota 1: \n";
    cin >> v_nota1;                     // 'cin' significa 'entrada em c', ou seja, solicita uma entrada de dado ao usuário
    cout << "Informe a nota 2: \n";
    cin >> v_nota2; 
    float v_media = (v_nota1 + v_nota2) / 2;
    cout << "A nota média é: " << v_media << endl;

// primeira opção
    //if (v_media >= 5){
    //        cout << "Portanto o aluno está APROVADO\n";
    //    }
// segunda opção
   // if (v_media >=5){
   //     cout << "Portanto o aluno está APROVADO\n";
    //} else{                                             // caso a nota não seja maior ou igual a 5 (condição importa por 'if'acima)
    //    cout << "Portanto o aluno está REPROVADO\n";
    //}

// terceira opção: de 0-2 = D, 2.5-5 = C, 5-7 = B, 7.5-10 = A
    if (v_media < 2.5){
        cout << "Nota final: D\n";
    } else if (v_media < 5){
        cout << "Nota final: C\n";
    } else if (v_media < 7){
        cout << "Nota final: B\n";
    } else {
        cout << "Nota final: A\n";
    }
// Operadores lógicos: E = &&, OU: ||, NÃO = !  
 
    float v_frequencia;
    cout << "Qual é a frequência do aluno?:\n";
    cin >> v_frequencia;

// primeira opção com uso de 'E' (&&)   
    //if (v_media >= 5 && v_frequencia >=75){         // agora são duas as condiçẽos para a aprovação do aluno: nota e frequência (&&)
    //    cout << "Aluno APROVADO\n";
    //} else{
    //    cout << "Aluno REPROVADO\n";
    //}

// segunda opção com uso de 'OU' (||)
    //if (v_media < 5 || v_frequencia < 75){
    //    cout << "Aluno REPROVADO\n";
    //} else{
    //    cout << "Aluno APROVADO\n";
//}
// terceira opção com uso de Operador Ternário
    (v_media >= 5 && v_frequencia >= 75) ? cout << "APROVADO\n" : cout << "REPROVADO\n";

    return 0;
}