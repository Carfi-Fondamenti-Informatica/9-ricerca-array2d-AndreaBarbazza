#include <iostream>
#include "lib.h"
#include <cstring>
using namespace std;

int main() {

    char lista[10][20];
    char test [1][20];
    int pos;
    for (int i=0; i<10; i++){
        cin >> lista[i];
    }

    cin >> test[0];
    if (ricerca_nomi(lista, test, pos)){
        cout << pos << endl;
    }else{
        cout << "non presente"<< endl;
    }

    return 0;
}
