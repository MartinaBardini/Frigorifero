/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProdottoPrecotto.cpp
 * Author: martinabardini
 * 
 * Created on 8 marzo 2018, 18.33
 */

#include "ProdottoPrecotto.h"
#include <string.h>

ProdottoPrecotto::ProdottoPrecotto(): Prodotto(){
}

ProdottoPrecotto::ProdottoPrecotto(int codice, char descrizione[MAX_DIM], 
                    char scadenza[MAX_DIM], int calorie, char tipologia[MAX_DIM],
                    int porzioni) : Prodotto(codice, descrizione, 
                    scadenza, calorie) {
    this->porzioni = porzioni;
    strcpy(this->tipologia, tipologia);
}
 
ProdottoPrecotto::ProdottoPrecotto(const ProdottoPrecotto& pP) : Prodotto(pP) {
    this->porzioni = pP.porzioni;
    strcpy(this->tipologia, pP.tipologia);
}

ProdottoPrecotto::~ProdottoPrecotto() {
}

