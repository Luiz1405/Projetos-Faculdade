/* Exercicio001

  Luiz Augusto de Souza Kubaszewski
  
  Usando o conteúdo estudado sobre herança, criei as classes e os metodos conforme foi pedido, completando o funcionameto da main.
  
24/10/2023
  */

/*#include <iostream>
#include <iomanip>
using namespace std;

class Pessoa {
private:
    string nome;
    string RG;

public:
        
    Pessoa(){
      nome = "";
      RG = "";
    }
    
    Pessoa(string n, string rg){
      nome = n;   
      RG = rg;
    }
    string obtemNome() const {
        return nome;
    }

    void defineNome(string n) {
        nome = n;
    }

    string obtemRG() const {
        return RG;
    }

    void defineRG(string rg) {
        RG = rg;
    }
};

class Aluno : public Pessoa {
private:
    string Matricula;
    int AnoIngresso;

public:

    Aluno() : Pessoa("", "") {
      Matricula = "";
      AnoIngresso = 0;
    }

    Aluno(string n, string rg, string m, int a) : Pessoa(n, rg){
      Matricula = m;
      AnoIngresso = a;
    }
    string obtemMatricula() const {
        return Matricula;
    }

    void defineMatricula(string m) {
        Matricula = m;
    }

    int obtemAnoIngresso() const {
        return AnoIngresso;
    }

    void defineAnoIngresso(int a) {
        AnoIngresso = a;
    }
};

class Professor : public Pessoa {
private:
    string Unidade;
    int AnoIngresso;
    double SalarioFixo;

public:

    Professor() : Pessoa("", ""){
      Unidade = "";
      AnoIngresso = 0;
      SalarioFixo = 0.0;
    }

    Professor(string n, string rg, string u, int i, double s) : Pessoa(n, rg){
      Unidade = u;
      AnoIngresso = i;
      SalarioFixo = s;
    }

    string obtemUnidade() const {
        return Unidade;
    }

    void defineUnidade(string u) {
        Unidade = u;
    }

    int obtemAnoIngresso() const {
        return AnoIngresso;
    }

    void defineAnoIngresso(int i) {
        AnoIngresso = i;
    }

    double obtemSalarioFixo() const {
        return SalarioFixo;
    }

    void defineSalarioFixo(double s) {
        SalarioFixo = s;
    }
};

void imprimePessoa(Pessoa *p) {
cout << "Nome: " << p->obtemNome() << endl;
cout << "RG: " << p->obtemRG() << endl;
cout << "----------" << endl;
}
void imprimeAluno(Aluno *a) {
cout << "Nome: " << a->obtemNome() << endl;
cout << "RG: " << a->obtemRG() << endl;
cout << "Matricula: " << a->obtemMatricula() << endl;
cout << "Ano de Ingresso: " << a->obtemAnoIngresso() << endl;
cout << "----------" << endl;
}
void imprimeProfessor(Professor *p) {
cout << "Nome: " << p->obtemNome() << endl;
cout << "RG: " << p->obtemRG() << endl;
cout << "Unidade: " << p->obtemUnidade() << endl;
cout << "Ano de Ingresso: " << p->obtemAnoIngresso() << endl;
cout << "Salario Fixo: " << fixed << setprecision(4) << p->obtemSalarioFixo() << endl;
cout << "----------" << endl;
}
int main() {
Pessoa pe1("Pessoa 1","11111");
imprimePessoa(&pe1);
Pessoa pe2;
imprimePessoa(&pe2);
pe2.defineNome("Pessoa 2");
imprimePessoa(&pe2);
pe2.defineRG("22222");
imprimePessoa(&pe2);
Aluno al3("Aluno 3","33333","00001-1",2013);
imprimeAluno(&al3);
Aluno al4;
imprimeAluno(&al4);
al4.defineNome("Aluno 4");
imprimeAluno(&al4);
al4.defineRG("44444");
imprimeAluno(&al4);
al4.defineMatricula("00002-2");
imprimeAluno(&al4);
al4.defineAnoIngresso(2014);
imprimeAluno(&al4);
Professor pr5("Professor 5","55555","EP",2015,5555.55);
imprimeProfessor(&pr5);
Professor pr6;
imprimeProfessor(&pr6);
pr6.defineNome("Professor 6");
imprimeProfessor(&pr6);
pr6.defineRG("66666");
imprimeProfessor(&pr6);
pr6.defineUnidade("EN");
imprimeProfessor(&pr6);
pr6.defineAnoIngresso(2016);
imprimeProfessor(&pr6);
pr6.defineSalarioFixo(6666.66);
imprimeProfessor(&pr6);
return 0;
}
*/