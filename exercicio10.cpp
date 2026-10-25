#include <iostream> 

using namespace std;

int main() {
    float precoTotal, valorParcela;
    int quantidadeParcelas;

    cout << "Digite o preco total do produto: R$ ";
    cin >> precoTotal;

    cout << "Digite a quantidade de parcelas desejadas: ";
    cin >> quantidadeParcelas;

    if (quantidadeParcelas > 0) {
        valorParcela = precoTotal / quantidadeParcelas;

        cout << "\n--- Resumo do paecelamento (sem juros) ---\n";
        cout << "Preco total: R$ " << precoTotal << endl;
        cout << "Quantidade de Parcelas: " << quantidadeParcelas << " X " << endl;
        cout << "Valor de cada parcela: R$ " << valorParcela << endl;
         }else{
            cout << "\nA quantidade de parcelas deve ser maior que zero!" << endl;
             }
             return 0;
             
            }
    
