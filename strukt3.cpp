#include <iostream>
using namespace std;

struct termek
{
    string nev;
    float tomeg;
    int ear;
    int fizetendo;
};

int main(){

    termek piac[4];        //struktura tomb


    piac[0].nev = "Alma";
    piac[0].tomeg = 1.5;
    piac[0].ear = 380;
    piac[0].fizetendo = piac[0].tomeg*piac[0].ear;

    piac[1].nev = "Repa";
    piac[1].tomeg = 0.8;
    piac[1].ear = 250;
    piac[1].fizetendo = piac[1].tomeg*piac[1].ear;

    piac[2].nev = "Hus";
    piac[2].tomeg = 1.5;
    piac[2].ear = 2100;
    piac[2].fizetendo = piac[2].tomeg*piac[2].ear;


    float tomegossz; {
            tomegossz = piac[0].tomeg+piac[1].tomeg+piac[2].tomeg;
    }

    for (int i=0; i<3; i++)
    cout << piac[i].nev << "\t" << piac[i].tomeg << "kg\t" << "\t" << piac[i].ear << "Ft.-";

    cout << "\nFizenetdo osszeg:  " << piac[0].fizetendo+piac[1].fizetendo+piac[2].fizetendo << "Ft.- ";
    cout << "\nTomeg osszesen:  " << tomegossz << " kilogramm";



    return 0;
}
