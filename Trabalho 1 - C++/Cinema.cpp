/*#include <iostream>
#include "Cinema.hpp"
#include <sstream>

Cinema::Cinema() : numero(0), nome(""), endereco(), salas(0) {}

Cinema::Cinema(int n, string nm, Endereco &e, int s): numero(n), nome(nm),
endereco(e), salas(s) {}

Cinema::~Cinema() {}

int Cinema::obtemNumero() const {
    return numero;
}

string Cinema::obtemNome() const {
    return nome;
}

Endereco Cinema::obtemEndereco() const {
    return endereco;
}

int Cinema::obtemSalas() const {
    return salas;
}

string Cinema::str() const {
    stringstream ss;
    ss << nome << " [" << numero << "]\n";
    ss << endereco.str() << "\n";
    ss << "Cinema(s): " << salas << "\n";
    return ss.str();
}

void Cinema::defineNumero(int n) {
    numero = n;
}

void Cinema::defineNome(string nm) {
    nome = nm;
}

void Cinema::defineEndereco(Endereco &e) {
    endereco = e;
}

void Cinema::defineSalas(int s) {
    salas = s;
}

bool Cinema::operator<(const Cinema &c) const{//metodo sobrecarregado que
compara dois cinemas usando o nome return nome < c.obtemNome();
}

istream& operator>>(istream& in, Cinema& c) {
    int num, n, s;
    string nm, log, com, bai, cep, cid, est;

    in >> num;
    in.ignore();
    getline(in, nm);
    getline(in, log);
    in >> n;
    in.ignore();
    getline(in, com);
    getline(in, bai);
    getline(in, cep);
    getline(in, cid);
    getline(in, est);
    in >> s;

    c.defineNumero(num);
    c.defineNome(nm);
    Endereco en(log, n, com, bai, cep, cid, est);
    c.defineEndereco(en);
    c.defineSalas(s);

    return in;
}

ostream& operator<<(ostream& out, const Cinema& c) {
    out << c.obtemNumero() << endl;
    out << c.obtemNome() << endl;
    out << c.obtemEndereco() << endl;
    out << c.obtemSalas() << endl;
    return out;
}
*/