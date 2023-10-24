/*#include <iostream>
#include <sstream>
#include "Endereco.hpp"

using namespace std;
// Construtor da classe Endereco
Endereco::Endereco(string l, int n, string c, string b, string cp, string cd, string e){

 string logradouro;
 int numero;
 string complemento;
 string bairro;
 string cep;
 string cidade;
 string estado;
 }

// Destrutor da classe Endereco
Endereco::~Endereco() {}

// Métodos de obtenção dos atributos do endereço
string Endereco::obtemLogradouro() const {
    return logradouro;
}

int Endereco::obtemNumero() const {
    return numero;
}

string Endereco::obtemComplemento() const {
    return complemento;
}

string Endereco::obtemBairro() const {
    return bairro;
}

string Endereco::obtemCEP() const {
    return cep;
}

string Endereco::obtemCidade() const {
    return cidade;
}

string Endereco::obtemEstado() const {
    return estado;
}

// Método para formatar o endereço como uma string
string Endereco::str() const {
    stringstream ss;
    ss << logradouro << ", " << numero;
    if (!complemento.empty()) {
        ss << " - " << complemento;
    }
    ss << " - Bairro " << bairro << " - " << cidade << " - " << estado;
    return ss.str();
}

// Métodos de definição dos atributos do endereço
void Endereco::defineLogradouro(string l) {
    logradouro = l;
}

void Endereco::defineNumero(int n) {
    numero = n;
}

void Endereco::defineComplemento(string c) {
    complemento = c;
}

void Endereco::defineBairro(string b) {
    bairro = b;
}

void Endereco::defineCEP(string cp) {
    cep = cp;
}

void Endereco::defineCidade(string cd) {
    cidade = cd;
}

void Endereco::defineEstado(string e) {
    estado = e;
}

// Sobrecarga do operador de inserção para entrada de dados
istream& operator>>(istream& in, Endereco& e) {
    string l, c, b, cp, cd, es;
    int n;

    getline(in, l);
    in >> n;
    in.ignore();
    getline(in, c);
    getline(in, b);
    getline(in, cp);
    getline(in, cd);
    getline(in, es);

    e.defineLogradouro(l);
    e.defineNumero(n);
    e.defineComplemento(c);
    e.defineBairro(b);
    e.defineCEP(cp);
    e.defineCidade(cd);
    e.defineEstado(es);

    return in;
}

// Sobrecarga do operador de inserção para saída de dados
ostream& operator<<(ostream& out, const Endereco& e) {
    out << e.obtemLogradouro() << endl;
    out << e.obtemNumero() << endl;
    out << e.obtemComplemento() << endl;
    out << e.obtemBairro() << endl;
    out << e.obtemCEP() << endl;
    out << e.obtemCidade() << endl;
    out << e.obtemEstado() << endl;
    return out;
}
*/