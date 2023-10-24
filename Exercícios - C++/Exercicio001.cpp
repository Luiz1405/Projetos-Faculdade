/*#include <iostream>
#include <string>

using namespace std;

class Pessoa{

private:
string nome;
int anodenasci;//ano de nascimento.

public:
// Construtor sem parâmetros
Pessoa() : nome(""), anodenasci(0) {}

// Contrutor com parâmetros
Pessoa( string nomeParam, int anodenasciParam): nome(nomeParam), anodenasci(anodenasciParam){}//estudar mais sobre construtores

int obtemIdade(int x){
  if( x < anodenasci){
    return -1;
  } else {
    return x - anodenasci;
  }  
}

int obtemIdadeEmMeses(int y){

  if( y < anodenasci){
    return -1;
  }
  return (y - anodenasci) * 12;
}

void defineNome(string dename){
  nome = dename;
  }  
string obtemNome(){
  return nome;
}
void defineAnoNascimento(int anonasci){
  anodenasci = anonasci;
  
}
int obtemAnoNascimento(){
  return anodenasci;
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
Pessoa *rn = new Pessoa("Fulano",2020);
cout << "Nome = " << rn-> obtemNome() << endl;
cout << "Ano de Nascimento = " << rn->obtemAnoNascimento() << endl;
for (int i=2018; i<2025; ++i)
cout << i << " " << rn->obtemIdade(i) << " " << rn->obtemIdadeEmMeses(i) << endl;
delete rn;
return 0;
}
*/