/*#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class UnidadeFederativa {
private:
  string nome;
  string sigla;
  string capital;
  double area;
  double populacao;

public:
  UnidadeFederativa()
      : nome(""), sigla(""), capital(""), area(0), populacao(0) {}

  UnidadeFederativa(string nomeparam, string siglaparam, string capitalparam,
                    double areaparam, double populacaoparam)
      : nome(nomeparam), sigla(siglaparam), capital(capitalparam),
        area(areaparam), populacao(populacaoparam) {}

  void defineNome(string n) { nome = n; }

  string obtemNome() { return nome; }

  void defineSigla(string s) { sigla = s; }

  string obtemSigla() { return sigla; }

  void defineCapital(string c) { capital = c; }

  string obtemCapital() { return capital; }

  void defineArea(double a) { area = a; }

  double obtemArea() { return area; }

  void definePopulacao(double p) { populacao = p; }

  double obtemPopulacao() { return populacao; }

  double obtemDensidade() { 

    if(area == 0){
      return 0;
    }
    return populacao / area; 
  }
};

void mostraUF(UnidadeFederativa &uf) {
  cout << uf.obtemNome() << " (" << uf.obtemSigla() << ") - "
       << uf.obtemCapital();
  cout << " - Area = " << fixed << setprecision(4) << uf.obtemArea();
  cout << " - Pop. = " << uf.obtemPopulacao();
  cout << " - Densidade = " << fixed << setprecision(4) << uf.obtemDensidade()
       << endl;
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
  UnidadeFederativa sc("Santa Catarina", "SC", "Florianopolis", 95346.2,
                       6734568);
  mostraUF(sc);
  for (int i = 0; i < 10; ++i) {
    sc.definePopulacao(sc.obtemPopulacao() + 100000);
    mostraUF(sc);
  }
  return 0;
}
*/