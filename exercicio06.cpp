#include <iostream>

using namespace std;

int main() {
float precoUnitario, valorTotal;
int quantidade;

cout << "Digite o preco unitario do produto: ";
cin >> precoUnitario;

cout << "Digite a quantidade comprada: ";
cin >>quantidade;

valorTotal = precoUnitario * quantidade;

cout << "\n--- Resumo da Compra na Papelaria ---\n";
cout << "Preco Unitario: R$ " << precoUnitario << endl;
cout << "Quantidade: " << quantidade << endl;
cout << "Valor Total da Compra: R$ " <<  valorTotal << endl;

return 0;
}