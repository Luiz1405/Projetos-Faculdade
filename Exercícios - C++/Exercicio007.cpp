/*#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

class Ponto{

private:
float x;
float y;

public:

Ponto(): x(0) , y(0){}
Ponto(float xparam, float yparam): x(xparam), y(yparam){}

void defineX(float abscissa){
  x = abscissa;
}

void defineY(float ordenadas){
  y = ordenadas;
}

float obtemX(){
  return x;
}

float obtemY(){
  return y;
}
float distancia(float x2, float y2){
        float dx = x2 - x;
        float dy = y2 - y;
        return sqrt(dx * dx + dy * dy);
    }
};

void mostraPonto(Ponto &p) {
cout << "(" << fixed << setprecision(4) << p .obtemX() << " , " << p.obtemY() << ")" << endl;
}

int main() {
Ponto p1;
mostraPonto(p1);
p1.defineX(1.5);
p1.defineY(2.4);
mostraPonto(p1);
Ponto p2(5.5,2.4);
mostraPonto(p2);
Ponto p3(5.5,5.4);
mostraPonto(p3);
cout << fixed << setprecision(4) << p1.distancia(5.5,2.4) << " ";
cout << fixed << setprecision(4) << p2.distancia(5.5,5.4) << " ";
cout << fixed << setprecision(4) << p3.distancia(1.5,2.4) << endl;
Ponto origem(1.2,3.4);
for (int i=0; i<5; ++i) {
for (int j=0; j<5; ++j)
cout << fixed << setprecision(4) << origem.distancia(i+5.6,j+7.8) << " ";
cout << endl;
}
return 0;
}
*/