#include <iostream>
#include <fstream>
#include <string>

#define MAX 805

using namespace std;

int main()
{
    ofstream out("wyniki.txt");
    string d;
    fstream t;
    int dl;
    t.open("tekst.txt");
    out<<"Slowa zaczynajace sie i konczace na literke 'd': "<<endl;

    for(int i=0;i<805;i++)
    {
        t>>d;
        dl=d.length();
        if(d[0]=='d'&&d[dl-1]=='d')
        {
            out<<d<<" ";
        }


    }



    return 0;
}
