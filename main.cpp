#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream f("graf.in");
ofstream g("graf.out");

int a[51][51], n, m, d[50];

// citire lista arce
void citire(){
    int i, j;
    f >> n;
    while(f >> i >> j) {
        a[i][j] = 1;
    }
}

// afisare matrice de adiacenta
void afisare_ad(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            g << a[i][j] << " ";
        g << endl;
    }
}

// vecinii unui nod
void vecini(int NOD){
    for(int i=1; i<=n; i++)
        if(a[NOD][i] == 1 || a[i][NOD] == 1)
            g << i << " ";
}

int main() {
    citire();
    g << "Matricea de adiacenta: " << endl;
    afisare_ad();
    g << endl;
    g << "Vecinii nodului: ";
    int NOD;
    cin >> NOD;
    vecini(NOD);
}