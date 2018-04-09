/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProdottoPrecotto.h
 * Author: martinabardini
 *
 * Created on 8 marzo 2018, 18.33
 */

#ifndef PRODOTTOPRECOTTO_H
#define PRODOTTOPRECOTTO_H
#include "Prodotto.h"

#define MAX_DIM 30

class ProdottoPrecotto : public Prodotto {
private:
    char tipologia[MAX_DIM];
    int porzioni;
    
public:
    ProdottoPrecotto();
    ProdottoPrecotto(int codice, char descrizione[MAX_DIM], 
                    char scadenza[MAX_DIM], int calorie, char tipologia[MAX_DIM],
                    int porzioni);
    ProdottoPrecotto(const ProdottoPrecotto& pP);
    virtual ~ProdottoPrecotto();


};

#endif /* PRODOTTOPRECOTTO_H */

