#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quantos elementos da sequência de Fibonacci? ";
    cin >> n;

    long long a = 0, b = 1, next;

    cout << "Sequência: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;

    return 0;
}
