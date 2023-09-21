#include <iostream>
using namespace std;

struct termek
{
    string nev;
    float tomeg;
    int ear;
};

int main(){

    termek alma, repa, hus;


    alma.nev = "Alma";
    alma.tomeg = 1.5;
    alma.ear = 380;

    repa.nev = "Repa";
    repa.tomeg = 0.8;
    repa.ear = 250;

    hus.nev = "Hus";
    hus.tomeg = 1.5;
    hus.ear = 2100;

    int fizetendo; {
            fizetendo = alma.tomeg*alma.ear+repa.tomeg*repa.ear+hus.tomeg*hus.ear;
    }
    float tomeg; {
            tomeg = alma.tomeg+repa.tomeg+hus.tomeg;
    }


    cout << alma.nev << "\t" << alma.tomeg << "kg\t" << alma.ear << "Ft.-";
    cout << "\n" << repa.nev <<  "\t" << repa.tomeg << "kg\t" << repa.ear << "Ft.-";
    cout << "\n" << hus.nev << "\t" << hus.tomeg << "kg\t" << hus.ear << "Ft.-";
    cout << "\nFizenetdo osszeg:  " << fizetendo << "Ft.- ";
    cout << "\nTomeg osszesen:  " << tomeg << " kilogramm";



    return 0;
}
