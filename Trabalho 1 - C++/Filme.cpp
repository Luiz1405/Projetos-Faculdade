/*#include <iostream>
#include <sstream>
#include "Filme.hpp"

// Construtor da classe Filme
Filme::Filme(int n, string t, int f, string e) {
    numero = n;
    titulo = t;
    faixaEtaria = f;
    estilo = e;
}

// Destrutor da classe Filme
Filme::~Filme() {}

// Métodos da classe filme
int Filme::obtemNumero() const {
    return numero;
}

string Filme::obtemTitulo() const {
    return titulo;
}

int Filme::obtemFaixaEtaria() const {
    return faixaEtaria;
}

string Filme::obtemEstilo() const {
    return estilo;
}

// Método para formatar o filme como uma string
string Filme::str() const {
    string numerostr = to_string(numero);
    string output = "";

    // Verifica se a faixa etária é livre ou diferente de zero.
    if (faixaEtaria == 0) {
        output += titulo + " [" + numerostr + "] - " + "LIVRE" + " - " + estilo;
    } else {
        string faixaEtariastr = to_string(faixaEtaria);
        output += titulo + " [" + numerostr + "] - " + faixaEtariastr + " anos" + " - " + estilo;
    }

    return output;
}

// Método para definir o número do filme
void Filme::defineNumero(int n) {
    numero = n;
}

// Método para definir o título do filme
void Filme::defineTitulo(string t) {
    titulo = t;
}

// Método para definir a faixa etária do filme
void Filme::defineFaixaEtaria(int f) {
    faixaEtaria = f;
}

// Método para definir o estilo do filme
void Filme::defineEstilo(string e) {
    estilo = e;
}

// Sobrecarga do operador de comparação para ordenação
bool Filme::operator<(const Filme &f) const {
    return titulo < f.obtemTitulo();
}

// Sobrecarga do operador de leitura de dados de um filme
istream &operator>>(istream &in, Filme &f) {
    string t, e;
    int n, fa;
    
    // Leitura dos dados do filme a partir do fluxo de entrada
    in >> n;
    in.ignore();
    getline(in, t);
    in >> fa;
    in.ignore();
    getline(in, e);
    
    // Definição dos dados lidos no objeto Filme
    f.defineNumero(n);
    f.defineTitulo(t);
    f.defineFaixaEtaria(fa);
    f.defineEstilo(e);
    
    return in;
}

// Sobrecarga do operador de impressão para exibir os dados de um filme
ostream &operator<<(ostream &out, const Filme &f) {
    out << f.obtemNumero() << endl;
    out << f.obtemTitulo() << endl;
    out << f.obtemFaixaEtaria() << endl;
    out << f.obtemEstilo() << endl;
    
    return out;
}
*/