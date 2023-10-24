/*#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

#define MAX_ALUNOS 10

class Aluno {
private:
    int matricula;
    string nome;
    float nota;

public:

    Aluno() : nome(""), matricula(0), nota(-1.0) {}

    Aluno(int matriculaparam, string nomeparam, float notaparam) : nome(nomeparam), matricula(matriculaparam), nota(notaparam) {}

    int obtemMatricula() {
        return matricula;
    }

    void defineMatricula(int m) {
        matricula = m;
    }

    string obtemNome() {
        return nome;
    }

    void defineNome(string name) {
        nome = name;
    }

    float obtemNota() {
        return nota;
    }

    void defineNota(float note) {
        nota = note;
    }

    string str() {
        string matriculastr = to_string(matricula);
        while (matriculastr.length() < 10) {
            matriculastr = "0" + matriculastr;
        }
        string resultado = nome + " (" + matriculastr + ")";
        if (nota != -1.0) {
            string notastr = to_string(nota);
            notastr = notastr.substr(0, 6);
            resultado += ": " + notastr;
        }
        return resultado;
    }
};

class Turma {

private:

    int numTurma;
    string nomDisci; //nome da disciplina
    string nomProf; // Nome do professor
    Aluno* alunos[MAX_ALUNOS];
    int numAlunos;

public:

    Turma() : numTurma(0), nomDisci(""), nomProf(""), numAlunos(0) {}

    Turma(int numTurmaParam, string nomDisciParam, string nomProfParam, int numAlunosParam) : numTurma(numTurmaParam), nomDisci(nomDisciParam), nomProf(nomProfParam), numAlunos(numAlunosParam) {}

    void defineNumero(int n) {
        numTurma = n;
    }

    int obtemNumero() {
        return numTurma;
    }

    void defineDisciplina(string d) {
        nomDisci = d;
    }

    string obtemDisciplina() {
        return nomDisci;
    }

    void defineProfessor(string p) {
        nomProf = p;
    }

    string obtemProfessor() {
        return nomProf;
    }

    Aluno* obtemAluno(int indice) {
        if (indice >= 0 && indice < numAlunos) {
            return alunos[indice];
        }
        else {
            return nullptr; // Índice inválido, retorna nullptr
        }
    }

    bool adicionaAluno(Aluno* aluno) {
        if (numAlunos < MAX_ALUNOS) {
            alunos[numAlunos] = aluno;
            numAlunos++;
            return true; // Adição bem-sucedida
        }
        else {
            return false; // A turma está cheia, não é possível adicionar mais alunos
        }
    }

    string str() {
        string resultado = "\n" + to_string(numTurma) + " - " + nomDisci + " - Prof. " + nomProf;
        if (numAlunos > 0) {
            for (int i = 0; i < numAlunos; i++) {
                resultado += "\n" + alunos[i]-
                  >str();
            }
        }
        else {
            resultado += "\nTurma vazia.";
        }
        return resultado;
    }
};

int main() {
    Aluno* discente[] = {
        new Aluno(1, "Benedito", 9.1),
        new Aluno(2, "Carlos", 8.2),
        new Aluno(3, "Daniela", 7.3),
        new Aluno(4, "Elisabeth", 6.4),
        new Aluno(5, "Fernanda", 5.5),
        new Aluno(6, "Gilson", 9.6),
        new Aluno(7, "Heitor", 8.5),
        new Aluno(8, "Irineu", 7.4),
        new Aluno(9, "Joana", 3.2),
        new Aluno(10, "Klaus", -1.0),
        new Aluno(11, "Laura", 9.8)
    };
    int numDiscentes = sizeof(discente) / sizeof(Aluno*);
    Turma* turma = new Turma(0, "SEM ALUNOS", "INDEFINIDO", 0);
    int a;
    cout << turma->str() << endl;
    turma->defineNumero(123);
    turma->defineDisciplina("Linguagem C");
    turma->defineProfessor("Alberto");
    for (a = 0; a < 5; ++a)
        if (!turma->adicionaAluno(discente[a])) { cerr << "ERRO"; exit(1); }
    for (a = 0; a < 5; ++a)
        if (turma->obtemAluno(a) != discente[a]) { cerr << "ERRO"; exit(1); }
    for (; a < numDiscentes; ++a)
        if (turma->obtemAluno(a) != nullptr) { cerr << "ERRO"; exit(1); }
    cout << turma->str() << endl;
    for (a = 5; a < MAX_ALUNOS; ++a)
        if (!turma->adicionaAluno(discente[a])) { cerr << "ERRO"; exit(1); }
    for (; a < numDiscentes; ++a)
        if (turma->adicionaAluno(discente[a])) { cerr << "ERRO"; exit(1); }
    for (a = 0; a < MAX_ALUNOS; ++a)
        if (turma->obtemAluno(a) != discente[a]) { cerr << "ERRO"; exit(1); }
    cout << turma->str() << endl;
    delete turma;
    for (int i = 0; i < numDiscentes; ++i)
        delete discente[i];
    return 0;
}

*/