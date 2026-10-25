#include <iostream>

using namespace std;

int main(){
    float salarioAtual, percentualReajuste, valorAumento, novoSalario;

    cout << "Digite o salario atual do funcionario: R$ ";
    cin >> salarioAtual;

    cout << "Digite o percentual de reajuste (ex: 10 pa 10%): ";
    cin >> salarioAtual;

    valorAumento = salarioAtual * (percentualReajuste / 100.0);
    novoSalario = salarioAtual + valorAumento;

    cout << "\n---Reajuste salarial ---\n";
    cout << "Salario Atual: R$ " << salarioAtual << endl;
    cout << "Percentual de Reajuste: " << percentualReajuste << " % " << endl;
    cout << "Valor de Aumento: R$ " << valorAumento << endl;
    cout << "Novo Salario: R$" << novoSalario << endl;

    return 0;
}