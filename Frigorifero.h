/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Frigorifero.h
 * Author: martinabardini
 *
 * Created on 8 marzo 2018, 18.33
 */

#ifndef FRIGORIFERO_H
#define FRIGORIFERO_H

#include "Prodotto.h"

class Frigorifero {
private:
    Prodotto* frigo;
    int numP;
    int maxFrigo;
public:
    Frigorifero(int maxFrigo);
    Frigorifero(const Frigorifero& f);
    virtual ~Frigorifero();

    bool addProdotto(Prodotto p);
    Prodotto ricercaProdotto(int codice, char* scadenza);
    int elencoPresentiFrigo(Prodotto vett[]);
    int elencoScadutiFrigo(Prodotto vett[], char* data);
    int numProdottiDaCodice(int codice);
    void salvataggioFile(char* nomefile);
    void caricaFile(char* nomefile);
};

#endif /* FRIGORIFERO_H */

