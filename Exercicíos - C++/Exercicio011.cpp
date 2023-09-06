//Exercicio 011
//Luiz Augusto de Souza Kubaszewski
/* criei uma classe para armazenar as informações de um ponto e realizar calculos basicos de distancia com pontos.
*/
// 06/09/2023

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Ponto {
private:
    double x;
    double y;

public:
    Ponto() {
        x = 0.0;
        y = 0.0;
    }

    Ponto(double x, double y) {
        this->x = x;
        this->y = y;
    }

    void defineX(double x) {
        this->x = x;
    }

    void defineY(double y) {
        this->y = y;
    }

    double obtemX() {
        return x;
    }

    double obtemY() {
        return y;
    }

    double distancia(double x2, double y2) {
        double deltaX = x - x2;
        double deltaY = y - y2;
        return sqrt(deltaX * deltaX + deltaY * deltaY);
    }
};

void mostraPonto(Ponto &p) {
    cout << "(" << fixed << setprecision(4) << p.obtemX() << " , " << p.obtemY() << ")" << endl;
}

int main() {
    Ponto p1;
    mostraPonto(p1);
    p1.defineX(1.5);
    p1.defineY(2.4);
    mostraPonto(p1);

    Ponto p2(5.5, 2.4);
    mostraPonto(p2);

    Ponto p3(5.5, 5.4);
    mostraPonto(p3);

    cout << fixed << setprecision(4) << p1.distancia(5.5, 2.4) << " ";
    cout << fixed << setprecision(4) << p2.distancia(5.5, 5.4) << " ";
    cout << fixed << setprecision(4) << p3.distancia(1.5, 2.4) << endl;

    Ponto origem(1.2, 3.4);
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j)
            cout << fixed << setprecision(4) << origem.distancia(i + 5.6, j + 7.8) << " ";
        cout << endl;
    }

    return 0;
}
