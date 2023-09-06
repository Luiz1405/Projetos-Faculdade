/*Exercicio013
Luiz Augusto de Souza Kubaszewski
Criei uma aplicação que armazena informacoes sobre as unidades federativas brasileiras.
27/08/2023
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class UnidadeFederativa {
private:
    string nome;
    string sigla;
    string capital;
    double area;
    int populacao;

public:
    UnidadeFederativa() {
        nome = "";
        sigla = "";
        capital = "";
        area = 0.0;
        populacao = 0;
    }

    UnidadeFederativa(string nome, string sigla, string capital, double area, int populacao) {
        this->nome = nome;
        this->sigla = sigla;
        this->capital = capital;
        this->area = area;
        this->populacao = populacao;
    }

    string obtemNome() {
        return nome;
    }

    void defineNome(string nome) {
        this->nome = nome;
    }

    string obtemSigla() {
        return sigla;
    }

    void defineSigla(string sigla) {
        this->sigla = sigla;
    }

    string obtemCapital() {
        return capital;
    }

    void defineCapital(string capital) {
        this->capital = capital;
    }

    double obtemArea() {
        return area;
    }

    void defineArea(double area) {
        this->area = area;
    }

    int obtemPopulacao() {
        return populacao;
    }

    void definePopulacao(int populacao) {
        this->populacao = populacao;
    }

    double obtemDensidade() {
        if (area == 0.0) {
            return 0.0;
        }
        return static_cast<double>(populacao) / area;
    }
};

void mostraUF(UnidadeFederativa &uf) {
    cout << uf.obtemNome() << " (" << uf.obtemSigla() << ") - " << uf.obtemCapital();
    cout << " - Area = " << fixed << setprecision(4) << uf.obtemArea();
    cout << " - Pop. = " << uf.obtemPopulacao();
    cout << " - Densidade = " << fixed << setprecision(4) << uf.obtemDensidade() << endl;
}

int main() {
    UnidadeFederativa rs;
    mostraUF(rs);
    rs.defineNome("Rio Grande do Sul");
    rs.defineSigla("RS");
    rs.defineCapital("Porto Alegre");
    rs.defineArea(281748.5);
    rs.definePopulacao(11228091);
    mostraUF(rs);

    UnidadeFederativa sc("Santa Catarina", "SC", "Florianopolis", 95346.2, 6734568);
    mostraUF(sc);

    for (int i = 0; i < 10; ++i) {
        sc.definePopulacao(sc.obtemPopulacao() + 100000);
        mostraUF(sc);
    }

    return 0;
}












