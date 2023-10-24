/* Exercicio013
  Luiz Augustou de Souza Kubaszewski
  Criei um programa que le um numero inteiro N correspondendo ao tamanho de um vetor de registros e também os N registros, juntamente com a implementação do algoritmo selection sort.
  27/08/2023
  */
/*#include <iostream>
#include <string>
using namespace std;

struct Registro {
    string identificador;
    int linha;
};

void selectionSort(Registro arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j].identificador < arr[minIndex].identificador) {
                minIndex = j;
            }
            else if (arr[j].identificador == arr[minIndex].identificador && arr[j].linha < arr[minIndex].linha) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }

        for (int k = 0; k < N; k++) {
            cout << arr[k].identificador << "/" << arr[k].linha << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    Registro registros[N];

    for (int i = 0; i < N; i++) {
        cin >> registros[i].identificador >> registros[i].linha;
    }

    selectionSort(registros, N);

    return 0;
}
*/