//Exercicio 014
//Luiz Augusto de Souza Kubaszewski
/* Fiz um programa que le uma matriz de linhas por colunas de inteiros
e substitua todos os numeros negativos dessa matriz pelo seus respectivos numeros
*/
// 06/09/2023

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int lin, col;
    cin >> lin >> col;

    int matriz[10][10];

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matriz[i][j];
            matriz[i][j] = abs(matriz[i][j]); 
        }
    }

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            cout << matriz[i][j];
            if (j < col - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}