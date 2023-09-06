//Exercicio 012
//Luiz Augusto de Souza Kubaszewski
/* Ler uma matriz quadrada de inteiros e imprima o numero
da linha que contenha o menor elemento da matriz
*/
// 06/09/2023
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int matriz[10][10]; 
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    int menorValor = matriz[0][0]; 
    int linhaMenorValor = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
                linhaMenorValor = i;
            }
        }
    }

    cout << linhaMenorValor << endl;

    return 0;
}









