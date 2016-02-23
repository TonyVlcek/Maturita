#include <stdio.h>
#include <stdlib.h>

typedef struct prvek {
    float cislo;
    struct prvek *dalsi;
} TPRVEK;

typedef struct {
    TPRVEK *celo;
    TPRVEK *konec;
} TFRONTA;

TFRONTA fronta;


void Init () {
    fronta.celo = NULL;
    fronta.konec = NULL;
    return;
}

void Vloz (float hod) {
    if(fronta.konec == NULL) {
        fronta.konec = (TPRVEK*)malloc(sizeof(TPRVEK));
    } else {
        fronta.konec->dalsi = (TPRVEK*)malloc(sizeof(TPRVEK));
        fronta.konec = fronta.konec->dalsi;
    }

    fronta.konec->cislo = hod;
    fronta.konec->dalsi = NULL;
    if (fronta.celo == NULL) fronta.celo = fronta.konec;

    return;
}

void Vypis (){
    TPRVEK *temp;

    temp = fronta.celo;



    do{
        printf("%.2f \n", temp->cislo);
        temp = temp->dalsi;
    }
    while(temp != NULL);
    return;
}

float Odeber () {
    if ((fronta.celo != NULL) && (fronta.konec != NULL)) { //not empty
        TPRVEK *pp = fronta.celo;
        float temp = fronta.celo->cislo;
        if(fronta.celo == fronta.konec) fronta.konec = NULL;
        fronta.celo = fronta.celo->dalsi;

        free((void *) pp);

        return temp;
    }

    return -1; //konstanta
}
