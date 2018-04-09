/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: martinabardini
 *
 * Created on 8 marzo 2018, 18.32
 */

#include <cstdlib>
#include <iostream>

#include "Frigorifero.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // MOSTRO INSERIMENTO
    Frigorifero f1 = Frigorifero(2);
    Prodotto p1 = Prodotto(1120, "carote", "2018/01/02", 35);
    Prodotto p2 = Prodotto(1121, "pizza", "2016/01/02", 340);
    Prodotto p3 = Prodotto(1100, "mela", "2020/01/02", 5);
    f1.addProdotto(p1);
    bool inserito = f1.addProdotto(p2);
    bool inserito2 =  f1.addProdotto(p3);
    cout << "Il prodotto è stato inserito: " << inserito << endl;
    cout << "Il prodotto è stato inserito2: " << inserito2 << endl;
    // MOSTRO PRELEVA
    Frigorifero f2 = Frigorifero(5);
    f2.addProdotto(p1);
    f2.addProdotto(p1);
    f2.addProdotto(p2);
    f2.addProdotto(p2);
    f2.addProdotto(p2);
    Prodotto* vett = new Prodotto[10];
    cout << "Il prodotto ricercato è: " << f1.ricercaProdotto(1120, "2018/01/02").GetDescrizione() << endl;
    cout << "I prodotti presente nel frigo sono: " << f2.elencoPresentiFrigo(vett) << endl;
    cout << "Il prodotto del codice è presente : " << f2.numProdottiDaCodice(1121) << endl;
    
    return 0;
}

