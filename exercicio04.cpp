#include <iostream>

using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Digite a temoeratura em graus  Celsius: ";
    cin >> celsius;

    fahrenheit = (9.0 * celsius / 5.0) + 32.0;

    cout << "\n--- Coversao de Temperatura ---\n ";
    cout << "Temperatura em Celsius: " << celsius << " C " << endl;
    cout << "Temperatura em fahrenheit: " << fahrenheit << " F " << endl;

    return 0;
}