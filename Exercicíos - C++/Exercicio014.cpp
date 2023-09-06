//Exercicio 013
//Luiz Augusto de Souza Kubaszewski
/* Fiz programa que le um numero impar n e mostre uma saıda em que aparecem na primeira linha , os numeros de 1 até n e assim por diante.
*/
// 06/09/2023

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= (n + 1) / 2; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        for (int j = i; j <= n - i + 1; j++) {
            cout << j;
            if (j < n - i + 1) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}













