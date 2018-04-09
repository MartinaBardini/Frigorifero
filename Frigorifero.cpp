/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Frigorifero.cpp
 * Author: martinabardini
 * 
 * Created on 45 marzo 2018, 18.33
 */

#include "Frigorifero.h"
#include <string.h>
#include <fstream>
using namespace std;

Frigorifero::Frigorifero(int maxFrigo) {
    this->numP = 0; //inizializzo numProdotti che ho
    this->maxFrigo = maxFrigo; //ottengo la grandezza
    this->frigo = new Prodotto[maxFrigo]; //creo il vettore della grandezza appena ottenuta
}

Frigorifero::Frigorifero(const Frigorifero& f) {
    this->maxFrigo = f.maxFrigo; //copio della grandezza
    this->numP = f.numP;//copio i numProdotti
    this->frigo = new Prodotto[f.maxFrigo]; //creo la copia del vettore
    //copio tutti gli elementi dentro il vettore
    for(int i = 0; i < numP; i++) {
        this->frigo[i] = f.frigo[i];
    }
}

Frigorifero::~Frigorifero() {
    delete[] frigo; //cancello la memoria dinamica allocata
}

bool Frigorifero::addProdotto(Prodotto p) {
    if(numP < maxFrigo) { // se numP è minore della grandezza
        frigo[numP] = p; //frigo aggiunge il prodotto
        numP++;
        return true;
    }
    return false;
}

Prodotto Frigorifero::ricercaProdotto(int codice, char* scadenza) {
    Prodotto p = Prodotto(); //da utilizzare per l'errore, in caso non trovassi quello che cerco
    for(int i = 0; i < numP; i++) {
        if((!strcmp(frigo[i].GetScadenza(), scadenza)) && frigo[i].GetCodice() == codice) 
            return frigo[i];
    }
    return p; // non ho trovato quello che cercavo
}

int Frigorifero::elencoPresentiFrigo(Prodotto vett[]) {
    for(int i = 0; i < numP; i++) {
        vett[i] = frigo[i];
    }
    //numP cosi capisce dove mi devo fermare senza andare a leggere cose non mie
    return numP;
}

int Frigorifero::elencoScadutiFrigo(Prodotto vett[], char* data) {
    int j = 0;
    for(int i = 0; i < numP; i++) {
        if(strcmp(frigo[i].GetScadenza(), data) > 0) // >0 vuol dire c > a
            vett[i] = frigo[j];
            j++;
    }
    //numP cosi capisce dove mi devo fermare senza andare a leggere cose non mie
    return numP;
}

int Frigorifero::numProdottiDaCodice(int codice) {
    int j = 0;
    for(int i = 0; i < numP; i++) {
        if(frigo[i].GetCodice() == codice)
            j++;
    }
    return j;
}


void Frigorifero::salvataggioFile(char nomefile[]) {
    ofstream f;
    f.open(nomefile);
    
    for(int i = 0; i < numP; i++) {
        f << frigo[i].GetCodice() << endl;
        f << frigo[i].GetDescrizione() << endl;
        f << frigo[i].GetScadenza() << endl;
        f << frigo[i].GetCalorie() << endl;
    }
    f.close();
}

void Frigorifero::caricaFile(char nomefile[]) {
    ifstream f;
    f.open(nomefile);
    int i = 0;
    
    int c;
    char d[10];
    char s[10];
    int cal;
    while(!f.eof()) {
        f >> c;
        f >> d;
        f >> s;
        f >> cal;
        
        frigo[i].SetCodice(c);
        frigo[i].SetDescrizione(d);
        frigo[i].SetScadenza(s);
        frigo[i].SetCalorie(cal);
        i++;
    }
}

