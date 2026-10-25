#include <iostream>

using namespace std;

int main () {
    int num1, num2;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    cout << "\n--- Resultados das Operacoes ---\n";
    cout << "Soma: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << "Subtracao: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << "multiplicacao" << num1 << " * " << num2 << " * " << ( num1 * num2) << endl;

    if (num2 != 0){
        cout << "Divisao: "<< num1 << " / " << num2 << " = " << (static_cast<float>(num1) / num2) << endl;
    } else {
        cout << "Divisao: nao e possivel dividir por zero!" << endl;
         }
         return 0;
    }
