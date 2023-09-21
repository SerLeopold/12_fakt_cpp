#include <iostream>
using namespace std;

struct termek
{
    string nev;
    float tomeg;
    int ear;
};

int main(){

    termek alma;


    alma.nev = "Alma";
    alma.tomeg = 1.5;
    alma.ear = 380;
    int fizetendo; {
            fizetendo = alma.tomeg*alma.ear;
    }


    cout << alma.nev << "\t" << alma.tomeg << "kg\t" << alma.ear << "Ft.-" << "Fizetendo: " << fizetendo << " Ft.-";

    return 0;
}
