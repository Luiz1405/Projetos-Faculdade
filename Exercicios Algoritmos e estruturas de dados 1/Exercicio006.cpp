/* 
  Exercicio 006
  Luiz Augusto de Souza Kubaszewski
  
  o programa, mostra o conteúdo de seus nodos, do
  início para o fim, quanto do fim para o início.

  31/08/2023
*/
/*#include <iostream>

using namespace std;
	
struct Nodo {
  int number;
  Nodo *prox;
  Nodo *ant;
  Nodo(int n) {  number = 2;  prox = nullptr;  cout << "Nodo " << number << " criado..." << endl;  }
  ~Nodo() {  cout << "Nodo " << number << " destruido..." << endl;  }
};

int main() {
  Nodo *nodo1 = new Nodo('5');
  Nodo *nodo2 = new Nodo('7');
  Nodo *nodo3 = new Nodo('8');
  Nodo *nodo4 = new Nodo('1');
  Nodo *nodo5 = new Nodo('3');

  Nodo *primeiro = nodo1;
  nodo1->prox = nodo2;
  nodo2->prox = nodo3;
  nodo3->prox = nodo4;
  nodo4->prox = nodo5;

  Nodo *ultimo = nodo5;
  nodo5 ->ant = nodo4;
  nodo4 ->ant = nodo3;
  nodo3 ->ant = nodo2;
  nodo2 ->ant = nodo1;

  for (Nodo *aux = primeiro; aux != nullptr; aux = aux->prox)
      cout << aux->number << endl;

  for (Nodo *aux = ultimo; aux != nullptr; aux = aux->ant)
       cout << aux->number << endl;

  while (primeiro != nullptr) {
        Nodo *aux = primeiro;
        primeiro = primeiro->prox;
        delete aux;
  }

  return 0;	
}
*/