#include<iostream>

using namespace std;
class Animal {
  private:
  string nome;
  int idade;

  public:
  Animal(){
    nome = "";
    idade = 0;
  }

  Animal(string n, int i){
    nome = n;
    idade = i;
  }

  virtual ~Animal() {}

  virtual string emitesom() = 0;

  string obtemnome(){

    return nome;
  }

  void definenome(string n){
    nome = n;
  }

  int obtemidade(){

    return idade;
  }

  void defineidade(int i){
    idade = i;
  } 
};

  class Gorila : public Animal{
    public:

    Gorila(string n, int i) : Animal(n, i){}
    string emitesom()override{

      return "u u u u u";
    }
  };

  class cobra : public Animal{
    public:

    cobra(string n, int i) : Animal(n,i){}
    string emitesom()override{
      return "ssssss";
    }
  };

  class gato : public Animal{
    public:
    gato(string n, int i) : Animal(n, i){}
    string emitesom()override{

      return "miau";
    }
  };
int main(){
  Animal* Zoo[6];

  Zoo[0] = new Gorila("roger", 25);
  Zoo[1] = new Gorila("cleber", 35);
  Zoo[2] = new cobra("cascavel", 65);
  Zoo[3] = new cobra("giboia" , 45);
  Zoo[4] = new gato("tom" , 5);
  Zoo[5] = new gato("pipi", 15);

  for(int i = 0; i < 6; i++){
    cout << "Nome: " << Zoo[i] -> obtemnome() << ", Idade: " << Zoo[i] -> obtemidade() << Zoo[i] -> emitesom() << endl;
  }
  cout << endl;
  
  for(int i = 0; i < 6; i++){
    cout << "Deletando objeto: " << Zoo[i] -> obtemnome() << endl;
    delete Zoo[i];
  }

  
}


































