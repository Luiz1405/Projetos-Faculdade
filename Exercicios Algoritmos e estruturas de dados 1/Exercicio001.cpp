/* Exercicio001
   Luiz Augusto de Souza Kubaszewski

   o programa criado imprime um "+" toda vez que nodo for alocado e toda 
   vez que for desalocado irá imprimir um "-". ele imprime a lista com "|" 
   para separar, ao final do programa ele imprime a lista ao contrário e 
   desaloca todos os itens da lista.
  
   28/09/2023
  */
   
/*#include <iostream>

using namespace std;

struct Node {
    char info;
    Node* next;
    Node* prev;

    Node(char i) : info(i), next(nullptr), prev(nullptr) {
        cout << "+" << endl;
    }

    ~Node() {
        cout << "-" << endl;
    }
};

class ListaDuplamenteEncadeada {
private:
    Node* head;
    Node* tail;

public:
    ListaDuplamenteEncadeada() : head(nullptr), tail(nullptr) {}

    void inserirFrente(char valor) {
        Node* novoNode = new Node(valor);
        if (!head) {
            head = tail = novoNode;
        } else {
            novoNode->next = head;
            head->prev = novoNode;
            head = novoNode;
        }
    }

    void inserirFim(char valor) {
        Node* novoNode = new Node(valor);
        if (!head) {
            head = tail = novoNode;
        } else {
            novoNode->prev = tail;
            tail->next = novoNode;
            tail = novoNode;
        }
    }

    void removerInicio() {
        if (!head) {
            cout << "ERRO" << endl;
        } else {
            Node* temp = head;
            head = head->next;
            if (head)
                head->prev = nullptr;
            delete temp;
        }
    }

    void removerFim() {
        if (!tail) {
            cout << "ERRO" << endl;
        } else {
            Node* temp = tail;
            tail = tail->prev;
            if (tail)
                tail->next = nullptr;
            delete temp;
        }
    }

    void removerIndice(int indice) {
        if (indice < 0) {
            cout << "ERRO" << endl;
            return;
        }

        Node* atual = head;
        int i = 0;

        while (atual) {
            if (i == indice) {
                if (atual == head) {
                    head = atual->next;
                    if (head)
                        head->prev = nullptr;
                } else if (atual == tail) {
                    tail = atual->prev;
                    if (tail)
                        tail->next = nullptr;
                } else {
                    atual->prev->next = atual->next;
                    atual->next->prev = atual->prev;
                }

                delete atual;
                return;
            }

            atual = atual->next;
            i++;
        }

        cout << "ERRO" << endl;
    }

    void imprimirLista() {
        cout << "|";
        Node* atual = head;
        while (atual) {
            cout << atual->info << "|";
            atual = atual->next;
        }
        cout << endl;
    }

    void imprimirReverso() {
        cout << "|";
        Node* atual = tail;
        while (atual) {
            cout << atual->info << "|";
            atual = atual->prev;
        }
        cout << endl;
    }

    ~ListaDuplamenteEncadeada() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    ListaDuplamenteEncadeada lista;
    char operacao, letra;
    int indice;

    while (true) {
        lista.imprimirLista();
        cin >> operacao;

        if (operacao == '.') {
            break;
        }

        switch (operacao) {
            case '<':
                cin >> letra;
                lista.inserirFrente(letra);
                break;
            case '>':
                cin >> letra;
                lista.inserirFim(letra);
                break;
            case '{':
                lista.removerInicio();
                break;
            case '}':
                lista.removerFim();
                break;
            case '-':
                cin >> indice;
                lista.removerIndice(indice);
                break;
        }
    }

    lista.imprimirReverso();

    return 0;
} 

*/

