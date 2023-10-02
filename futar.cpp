#include <iostream>
#include <fstream>
using namespace std;

struct TAVOK
{
    int nap;
    int fuvar;
    int km;

};
int main (){

    TAVOK tavok [280];
    ifstream bemenet;
    bemenet.open ("tavok.txt");

    int i=0;
    while (!bemenet.eof())
    {
        bemenet >> tavok[i].nap >> tavok[i].fuvar >> tavok[i].km;
        cout << tavok[i].nap << " " << tavok[i].fuvar << " " << tavok[i].km << endl;
        i++;
    }

    bemenet.close();

    cout << "\n2. feladat" << endl;
    int minNap = 8;
    for (int j=0; j<i; j++)
    {
        if (tavok[j].nap < minNap) minNap = tavok[j].nap;
    }

    for (int j=0; j<i; j++)
    if ((tavok[j].nap != minNap) && (tavok[j].fuvar == 1))
        {
        cout << "A het legelso utja km-ben: " << tavok[j].km << " km" << endl;
        break;
        }

    cout << "\n3. feladat" << endl;
    int maxNap = 0;
    for (int j=0; j<i; j++)
    {
        if (tavok[j].nap > maxNap) maxNap = tavok[j].nap;
    }
    int maxFuvar = 0;
    for (int j=0; j<i; j++)
    {

        if ((tavok[j].nap == maxNap) && (tavok[j].fuvar > maxFuvar)) maxFuvar = tavok[j].fuvar;
    }

    for (int j=0; j<i; j++)
        if ((tavok[j].nap == maxNap) && (tavok[j].fuvar == maxFuvar))
        {
            cout << "A het legutollso utja km-ben:  " << tavok[j].km << " km" << endl;
            break;
        }


        cout << "\n4. feladat" << endl;
        int napok[8] = {0};
        for (int j=0; j<i; j++) napok[tavok[j].nap]+=1;
        for (int j=1; j<8; j++)
            if (napok[j] == 0) cout << "A futar a " << j << "-edik/odik napon nem dolgozott." << endl;

        cout <<"\n5. feladat" << endl;
        int Max = 0;
        for (int j=0; j<i; j++)
            if (Max<napok[j])
                Max = napok[j];
                nap = j;
        cout << "A legtobb fuvar a " << nap << " napon volt." << endl;


    return 0;

}
