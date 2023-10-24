/*#include <iostream>
#include <fstream>
#include "Aplicacao.hpp"

using namespace std;

Aplicacao::Aplicacao()
    : numCinemas(0), numFilmes(0), numProgramacao(0) {
}

Aplicacao::~Aplicacao() {
    // Libera a memória para cinemas, filmes e programacao.
    for (int i = 0; i < numCinemas; i++) {
        delete cinemas[i];
    }
    for (int i = 0; i < numFilmes; i++) {
        delete filmes[i];
    }
    for (int i = 0; i < numProgramacao; i++) {
        delete programacao[i];
    }
}

bool Aplicacao::carregaFilmes(string nomeArquivo) {
    // Abre o arquivo de filmes.
    ifstream arq;
    arq.open(nomeArquivo, ios::in);
    if (!arq.is_open()) {
        return false; // Falha ao abrir o arquivo.
    }

    int numero, faixaEtaria;
    string nome, genero;
    
    while (arq >> numero) {
        arq.ignore(); // Ignora o caractere de nova linha.
        getline(arq, nome);
        arq >> faixaEtaria;
        arq.ignore();
        getline(arq, genero);
        
        // Cria um novo filme e coloca no vetor
        filmes[numFilmes] = new Filme(numero, nome, faixaEtaria, genero);
        numFilmes++;
    }
    
    arq.close();
    return true;
}

bool Aplicacao::salvaFilmes(string nomeArquivo) {
    // Abre o arquivo para salvar os filmes.
    ofstream arq;
    arq.open(nomeArquivo, ios::out);
    if (!arq.is_open()) {
        return false; // Falha ao abrir o arquivo.
    }

    for (int i = 0; i < numFilmes; i++) {
        arq << *filmes[i]; // Usa o operador para salvar os filmes
    }

    arq.close();
    return true;
}

void Aplicacao::mostraFilmes() {
    for (int i = 0; i < numFilmes; i++) {
        cout << filmes[i]->str() << endl;
    }
}

void Aplicacao::ordenaFilmes() {
    // ordenação para ordenar os filmes
    for (int i = 0; i < numFilmes - 1; i++) {
        for (int j = 0; j < numFilmes - i - 1; j++) {
            if (*filmes[j + 1] < *filmes[j]) {
                // Troca os filmes de posição se necessário.
                Filme* temp = filmes[j];
                filmes[j] = filmes[j + 1];
                filmes[j + 1] = temp;
            }
        }
    }
}

Filme* Aplicacao::obtemFilme(int id) {
    for (int i = 0; i < numFilmes; i++) {
        if (filmes[i]->obtemNumero() == id) {
            return filmes[i];
        }
    }
    return nullptr;
}

bool Aplicacao::carregaCinemas(string nomeArquivo) {
    ifstream arq(nomeArquivo);
    
    if (!arq) {
        return false; // Falha ao abrir o arquivo.
    }

    int num, n, s;
    string nm, log, com, bai, cep, cid, est;

    while (arq >> num) {
        arq.ignore();

        getline(arq, nm);
        getline(arq, log);
        
        arq >> n;
        arq.ignore();
        
        getline(arq, com);
        getline(arq, bai);
        getline(arq, cep);
        getline(arq, cid);
        getline(arq, est);
        
        arq >> s;

        // Cria um novo cinema e coloca no vetor
        Endereco en(log, n, com, bai, cep, cid, est);
        cinemas[numCinemas++] = new Cinema(num, nm, en, s);
    }

    return true;
}


bool Aplicacao::salvaCinemas(string nomeArquivo) {
    ofstream arq;
    arq.open(nomeArquivo, ios::out);
    if (!arq.is_open()) {
        return false; // Falha ao abrir o arquivo.
    }

    for (int i = 0; i < numCinemas; i++) {
        arq << *cinemas[i]; // Usa o operador para salvar um cineme no arquivo
    }

    arq.close();
    return true;
}

void Aplicacao::mostraCinemas() {
    for (int i = 0; i < numCinemas; i++) {
        cout << cinemas[i]->str() << endl;
    }
}

void Aplicacao::ordenaCinemas() {
    // ordenação para ordenar os cinemas
    for (int i = 0; i < numCinemas - 1; i++) {
        for (int j = 0; j < numCinemas - i - 1; j++) {
            if (*cinemas[j + 1] < *cinemas[j]) {
                // Troca os cinemas de posição se necessário.
                Cinema* temp = cinemas[j];
                cinemas[j] = cinemas[j + 1];
                cinemas[j + 1] = temp;
            }
        }
    }
}

Cinema* Aplicacao::obtemCinema(int id) {
    for (int i = 0; i < numCinemas; i++) {
        if (cinemas[i]->obtemNumero() == id) {
            return cinemas[i];
        }
    }
    return nullptr;
}

bool Aplicacao::carregaProgramacao(string nomeArquivo) {
    ifstream arq;
    arq.open(nomeArquivo, ios::in);
    if (!arq.is_open()) {
        return false; // Falha ao abrir o arquivo.
    }

    int cInt, fInt, s, t;
    string h;

    while (arq >> cInt) {
        arq >> s;
        arq >> fInt;
        arq >> t;
        arq.ignore();
        getline(arq, h);

        Cinema* c = obtemCinema(cInt);
        Filme* f = obtemFilme(fInt);

        // Cria uma programação e coloca em um vetor.
         programacao[numProgramacao] = new Programacao(c, s, f, t, h);
        numProgramacao++;
    }

    arq.close();
    return true;
}

void Aplicacao::mostraProgramacao() {
    ordenaCinemas();
    for (int i = 0; i < numCinemas; i++) {
        cout << cinemas[i]->obtemNome() << "\n" << endl;
        int cinemaNumero = cinemas[i]->obtemNumero();
        bool programacaoEncontrada = false;
        for (int j = 0; j < numProgramacao; j++) {
            if (programacao[j]->obtemCinema()->obtemNumero() == cinemaNumero) {
                if (!programacaoEncontrada) {
                    programacaoEncontrada = true;
                }
                cout << programacao[j]->str(programacaoEncontrada) << endl;
            }
        }
        cout << endl;
    }
}
*/