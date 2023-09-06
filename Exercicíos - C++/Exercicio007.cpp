//Exercicio 007
//Luiz Augusto de Souza Kubaszewski
/* criei uma classe para armazenar atributos como: nome e ano denascimento 

27/08/2023
*/

#include <iostream>
using namespace std;

class Pessoa {
private:
    string nome;
    int anoNascimento;

public:
    Pessoa() {
        nome = "";
        anoNascimento = 0;
    }

    Pessoa(string nome, int anoNascimento) {
        this->nome = nome;
        this->anoNascimento = anoNascimento;
    }

    void defineNome(string nome) {
        this->nome = nome;
    }

    string obtemNome() {
        return nome;
    }

    void defineAnoNascimento(int anoNascimento) {
        this->anoNascimento = anoNascimento;
    }

    int obtemAnoNascimento() {
        return anoNascimento;
    }

    int obtemIdade(int anoAtual) {
        if (anoAtual < anoNascimento) {
            return -1;
        }
        return anoAtual - anoNascimento;
    }

    int obtemIdadeEmMeses(int anoAtual) {
        int idade = obtemIdade(anoAtual);
        if (idade == -1) {
            return -1;  
        }
        return idade * 12;
    }
};

int main() {
    Pessoa *p = new Pessoa();
    cout << "[" << p->obtemNome() << "](" << p->obtemAnoNascimento() << ")" << endl;
    p->defineNome("Friedrich Wilhelm Nietzsche");
    p->defineAnoNascimento(1844);
    cout << "[" << p->obtemNome() << "](" <<
        p->obtemAnoNascimento() << "/" <<
        p->obtemIdade(1900) << " anos/" <<
        p->obtemIdadeEmMeses(1900) << " meses)" << endl;
    delete p;
    
    Pessoa *rn = new Pessoa("Fulano", 2020);
    cout << "Nome = " << rn->obtemNome() << endl;
    cout << "Ano de Nascimento = " << rn->obtemAnoNascimento() << endl;
    for (int i = 2018; i < 2025; ++i)
        cout << i << " " << rn->obtemIdade(i) << " " << rn->obtemIdadeEmMeses(i) << endl;
    delete rn;
    
    return 0;
}
