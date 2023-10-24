/* Exercicio023
  Luiz Augustou de Souza Kubaszewski
  Usei o Seu programa algoritmo Insertion Sort, para ordenar os registros lidos em ordem alfa numerica crescente de identificador, usando a ordem crescente de linha como segundo criterio de ordenacao.
  27/08/2023
  */
   
/*#include <iostream>
#include <string>
using namespace std;

struct Registro {
    string identificador;
    int linha;
};

void insertionSort(Registro arr[], int N) {
    for (int i = 1; i < N; i++) {
        Registro chave = arr[i];
        int j = i - 1;

        while (j >= 0 && (arr[j].identificador > chave.identificador || (arr[j].identificador == chave.identificador && arr[j].linha > chave.linha))) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;

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

    insertionSort(registros, N);

    return 0;
}
*/