#include <iostream>
#include <vector>

using namespace std;

std::vector<double> wspolczynniki(double a, double b, double c) {
    std::vector<double> wspol;

    if (a == 0) {
        cout << "to nie funkcja kwadratowa" << endl;
        return wspol;
    }

    double p = -b/ (2 * a);
    double q = a * p * p + b*p + c;

    wspol.push_back(p);
    wspol.push_back(q);

    cout << "wspolrzedna p to: " << p << endl;
    cout << "wspolrzedna q to: " << q << endl;

    if (a > 0) {
        cout << "funkcja ma minimum w punkcie: " << p << " , " << q << endl;
    }
    else if (a < 0) {
        cout << "funkcja ma maximum w punkcie: " << p << " , " << q << endl;
    }

    return wspol;
}



int main() {
    double a, b, c;

    cout << "Podaj współczynnik a: ";
    cin >> a;
    cout << "Podaj współczynnik b: ";
    cin >> b;
    cout << "Podaj współczynnik c: ";
    cin >> c;

    std::vector<double> wyniki = wspolczynniki(a, b, c);

    return 0;
}