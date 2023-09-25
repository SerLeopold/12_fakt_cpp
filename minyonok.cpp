#include <iostream>
#include <fstream>
using namespace std;

struct MINYONOK
{

    string nev;
    int ehseg;
    int lelkes;
    string meret;
};
MINYONOK minyonok[4];
void kiir(int x);
int main()
{
    ifstream bemenet;
    bemenet.open ("minyon_bemenet.txt");

    int i=0;
    while (! bemenet.eof())
    {
        bemenet >> minyonok[i].nev >> minyonok[i].ehseg >> minyonok[i].lelkes >> minyonok[i].meret;

        i++;

    }

    bemenet.close();
    for (int i=0; i<4; i++) kiir(i);

    int max=0, maxindex;
    for (int i=0; i<4; i++)
    {
        if (max < minyonok[i].lelkes)
        {
            max = minyonok[i].lelkes;
            maxindex = i;
        }
    }

    cout << minyonok[maxindex].nev << " " << minyonok[maxindex].ehseg << " (" << minyonok[maxindex].meret << ") " << endl;

    return 0;
}
void kiir(int x)
{
    cout << minyonok[x].nev << " " << minyonok[x].ehseg << " " << minyonok[x].lelkes << minyonok[x].meret << endl;

}
