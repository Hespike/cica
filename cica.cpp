#include <iostream>
#include <string>

using namespace std;

class Cica {
    string nev;
    unsigned kor;

public:
    Cica(const string& nev, unsigned int kor = 0): nev(nev), kor(kor) {}

    void ido_telik() {
        kor++;
    }

    string nyavog() const {
        string vissza = "MIAU";
        return vissza;
    }
};
