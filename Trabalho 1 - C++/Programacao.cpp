/*#include <iostream>
#include <sstream>
#include "Programacao.hpp"

using namespace std;

// Construtor da classe Programacao
Programacao::Programacao(Cinema *c, int s, Filme *f, int t, string h) {
    cinema = c;
    sala = s;
    filme = f;
    tipoDeExibicao = t;
    horarios = h;
}

// Destrutor da classe Programacao
Programacao::~Programacao() {}

// Métodos de obtenção dos atributos da programação
Cinema *Programacao::obtemCinema() const {
    return cinema;
}

int Programacao::obtemSala() const {
    return sala;
}

Filme *Programacao::obtemFilme() const {
    return filme;
}

int Programacao::obtemTipoDeExibicao() const {
    return tipoDeExibicao;
}

string Programacao::obtemHorarios() const {
    return horarios;
}

// Método para formatar a programação como uma string
string Programacao::str(bool incluiCinema) const {
    stringstream ss;
    
    if (incluiCinema) {
        ss << "Sala " << sala << ": " << filme->obtemTitulo() << " | " << horarios << " | ";

        // Verifica o tipo de exibição e adiciona à stringstream
        if (tipoDeExibicao == 1) {
            ss << "LEG | ";
        } else if (tipoDeExibicao == 2) {
            ss << "DUB | ";
        } else if (tipoDeExibicao == 3) {
            ss << "3D LEG | ";
        } else if (tipoDeExibicao == 4) {
            ss << "3D DUB | ";
        } else if (tipoDeExibicao == 5) {
            ss << "NAC | ";
        }

        // Adiciona a faixa etária (LIVRE ou idade) à stringstream
        if (filme->obtemFaixaEtaria() <= 1) {
            ss << "[LIVRE] | " << filme->obtemEstilo();
        } else {
            ss << "[" << filme->obtemFaixaEtaria() << "] | " << filme->obtemEstilo();
        }
    }

    return ss.str();
}

// Método para definir o cinema da programação
void Programacao::defineCinema(Cinema *c) {
    cinema = c;
}

// Método para definir a sala da programação
void Programacao::defineSala(int s) {
    sala = s;
}

// Método para definir o filme da programação
void Programacao::defineFilme(Filme *f) {
    filme = f;
}

// Método para definir o tipo de exibição da programação
void Programacao::defineTipoDeExibicao(int t) {
    tipoDeExibicao = t;
}

// Método para definir os horários da programação
void Programacao::defineHorarios(string h) {
    horarios = h;
}
*/