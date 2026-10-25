#include <iostream>

using namespace std;

int main() {
    float largura, comprimento, area, perimetro;

    cout << "Digite a largura do retangulo: ";
    cin >> largura;

    cout << "Digite o comprimento do retangulo: ";
    cin >> comprimento;

    area = largura * comprimento;
    perimetro = 2 * (largura+ comprimento);

    cout << "\n--- Resultado do Retangulo ---\n";
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}