/*#include <iostream>
using namespace std;
class VetorDinamico {
private :
// colocar os argumentos que voce achar necessario
int * vec;
int tam,tamMax;

public :
// Metodos a serem criados :
// - construtor : deve alocar o vetor com um tamanho passado como parametro
VetorDinamico(int t = 10){
  tam = 0; tamMax = t;
  vec = new int[tamMax];
  cout << "+ VetorDinamico(" << tamMax << " ) criado ... " <<endl;
}
~VetorDinamico(){
  cout << "- VetorDinamico (" << tamMax << ") destruído ..." << endl;
}
// - adiciona : coloca um dado no vetor . Se nao houver mais espaco , deve alocar um novo vetor
void adiciona(int x){
  
  
}
// - getQtdDados : deve informar o numero de dados inseridos no vetor
int getQtdDados(){}
// - getDado (i): deve informar o valor do dado i
int getDado(){}
};
int main () {
VetorDinamico V1 (5) ;
int dado ;
do {
cin >> dado ;
if ( dado > 0) V1 . adiciona ( dado ) ; else break ;
} while (1) ;
for ( int i =0; i < V1 . getQtdDados () ; i ++)
cout << V1 . getDado (i) << endl ;
return 0;
}
*/