#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temperatura;
    
    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;
    
    if (escala == 'F' || escala == 'f') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temperatura;
        double celsius = 5.0 * (temperatura - 32.0) / 9.0;
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Celsius: " << celsius << endl;
    } else {
        cout << "Digite a temperatura em Celsius: ";
        cin >> temperatura;
        double fahrenheit = temperatura * 9.0 / 5.0 + 32.0;
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Fahrenheit: " << fahrenheit << endl;
    }
    
    return 0;
}
