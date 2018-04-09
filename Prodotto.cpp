/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prodotto.cpp
 * Author: martinabardini
 * 
 * Created on 8 marzo 2018, 18.32
 */

#include "Prodotto.h"
#include <string.h>

Prodotto::Prodotto() {}

Prodotto::Prodotto(int codice, char descrizione[MAX_DIM], char scadenza[MAX_DIM], int calorie) {
    this->codice = codice;
    this->calorie = calorie;
    strcpy(this->descrizione, descrizione);
    strcpy(this->scadenza, scadenza);
}

Prodotto::Prodotto(const Prodotto& p) {
    this->codice = p.codice;
    this->calorie = p.calorie;
    strcpy(this->descrizione, p.descrizione);
    strcpy(this->scadenza, p.scadenza);
}

Prodotto::~Prodotto() {
}

int Prodotto::GetCalorie() {
    return calorie;
}

void Prodotto::SetCalorie(int calorie) {
    this->calorie = calorie;
}

int Prodotto::GetCodice() {
    return codice;
}

void Prodotto::SetCodice(int codice) {
    this->codice = codice;
}
char* Prodotto::GetDescrizione() {
    return descrizione;
}

void Prodotto::SetDescrizione(char descrizione[MAX_DIM]) {
    strcpy(this->descrizione, descrizione);
}
char* Prodotto::GetScadenza() {
    return scadenza;
}

void Prodotto::SetScadenza(char scadenza[MAX_DIM]) {
    strcpy(this->scadenza, scadenza);
}
