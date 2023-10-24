/* Exercicio003
   Luiz Augusto de Souza Kubaszewski

   Este programa em C++ cria uma classe chamada "Campeonato" que gerencia uma 
  lista de equipes de futebol. Ele organiza as equipes com base no número de 
  pontos, do maior para o menor, e em caso de empate, as ordena em ordem 
  alfabética crescente. A classe oferece funções para obter informações, como o 
  número de equipes, acessar equipes em posições específicas, adicionar novas 
  equipes e limpar a lista, liberando memória.
  
  16/10/2023

*/

/*#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Equipe {
private:
    string clube;
    int pontos;

public:
    Equipe(string c = "", int p = 0) {
        clube = c;
        pontos = p;
    }
    string obtemClube() { return clube; }
    void defineClube(string c) { clube = c; }
    int obtemPontos() { return pontos; }
    void definePontos(int p) { pontos = p; }
    string toString() {
        stringstream ss;
        ss << clube << ": " << pontos << " pontos";
        return ss.str();
    }
    string toCSV() {
        stringstream ss;
        ss << clube << ";" << pontos;
        return ss.str();
    }
};

class Campeonato {
private:
    class Nodo {
    public:
        Equipe *equipe;
        Nodo *prox, *ant;
        Nodo(Equipe *e) : equipe(e), prox(nullptr), ant(nullptr) {}
    };
    Nodo *primeiro;
    int numEquipes;

public:
    Campeonato() : primeiro(nullptr), numEquipes(0) {}

    ~Campeonato() {
        limpa();
    }

    int obtemNumEquipes() {
        return numEquipes;
    }

    Equipe *obtemEquipe(int indice) {
        if (indice < 0 || indice >= numEquipes)
            return nullptr;

        Nodo *atual = primeiro;
        for (int i = 0; i < indice; ++i) {
            atual = atual->prox;
        }
        return atual->equipe;
    }

    void insere(string c, int p) {
        Equipe *novaEquipe = new Equipe(c, p);
        insere(novaEquipe);
    }

    void insere(Equipe *e) {
        Nodo *novoNodo = new Nodo(e);

        if (!primeiro || e->obtemPontos() > primeiro->equipe->obtemPontos() ||
            (e->obtemPontos() == primeiro->equipe->obtemPontos() && e->obtemClube() < primeiro->equipe->obtemClube())) {
            novoNodo->prox = primeiro;
            if (primeiro) {
                primeiro->ant = novoNodo;
            }
            primeiro = novoNodo;
        } else {
            Nodo *atual = primeiro;
            while (atual->prox && 
                  (e->obtemPontos() < atual->prox->equipe->obtemPontos() || 
                  (e->obtemPontos() == atual->prox->equipe->obtemPontos() && e->obtemClube() > atual->prox->equipe->obtemClube()))) {
                atual = atual->prox;
            }
            novoNodo->prox = atual->prox;
            if (atual->prox) {
                atual->prox->ant = novoNodo;
            }
            atual->prox = novoNodo;
            novoNodo->ant = atual;
        }
        numEquipes++;
    }

    void limpa() {
        while (primeiro) {
            Nodo *proxNodo = primeiro->prox;
            delete primeiro->equipe;
            delete primeiro;
            primeiro = proxNodo;
        }
        numEquipes = 0;
    }
};

void mostraCampeonato(Campeonato *c) {
    int tam = c->obtemNumEquipes();
    for (int i = 0; i < tam; ++i) {
        Equipe *e = c->obtemEquipe(i);
        cout << e->toString() << endl;
    }
    cout << "------------------" << endl;
}

int main() {
    Campeonato *brasileirao2021 = new Campeonato();
    mostraCampeonato(brasileirao2021);
    Equipe *e = new Equipe("Chapecoense", 12);
    brasileirao2021->insere(e);
    mostraCampeonato(brasileirao2021);
    brasileirao2021->insere("Santos", 28);
    brasileirao2021->insere("Bragantino", 41);
    brasileirao2021->insere("Atletico Goianiense", 31);
    mostraCampeonato(brasileirao2021);
    brasileirao2021->insere("Flamengo", 42);
    brasileirao2021->insere("Atletico-MG", 53);
    brasileirao2021->insere("Internacional", 36);
    brasileirao2021->insere("Fluminense", 33);
    brasileirao2021->insere("Juventude", 28);
    brasileirao2021->insere("Sport", 26);
    brasileirao2021->insere("Cuiaba", 31);
    brasileirao2021->insere("Gremio", 23);
    mostraCampeonato(brasileirao2021);
    brasileirao2021->insere("Corinthians", 37);
    brasileirao2021->insere("Athletico-PR", 33);
    brasileirao2021->insere("Palmeiras", 40);
    brasileirao2021->insere("Sao Paulo", 30);
    brasileirao2021->insere("Ceara", 29);
    brasileirao2021->insere("Fortaleza EC", 39);
    brasileirao2021->insere("Bahia", 27);
    brasileirao2021->insere("America-MG", 31);
    mostraCampeonato(brasileirao2021);
    delete brasileirao2021;
    return 0;
}
*/