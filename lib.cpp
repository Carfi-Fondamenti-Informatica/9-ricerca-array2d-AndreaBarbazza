#include "lib.h"
#include <iostream>
#include <cstring>


bool ricerca_nomi(char lista[10][20], char nome[1][20], int &posizione){

    for (int i=0; i<10; i++){
        if (strcmp(lista[i],nome[0])==0){
            posizione=i;
            return true;
        }


    }

    return false;



}
