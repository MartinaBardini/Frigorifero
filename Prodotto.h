
/*!
 \file  Prodotto.h
 \author martinabardini
 \brief rappresenta un prodotto alimntare generico
 \date  8 marzo 2018, 18.32
 */

#ifndef PRODOTTO_H
#define PRODOTTO_H
#define MAX_DIM 30

/*! 
 \class Prodotto
 \brief rappresenta un prodotto alimntare generico
 */
class Prodotto {
private:
    //! \var codice
    //! \brief rappresenta il codice numerico che identifica univocamente il prodotto 
    int codice;
    
    //! \var descrizione
    //! \brief rappresenta la descrizione breve del prodotto (max 30 caratteri)
    char descrizione[MAX_DIM];
    
    //! \var scadenza
    //! \brief rappresenta la data di scadenza del prodotto in formato AAAA/MM/GG
    char scadenza[MAX_DIM];
    
    //! \var calorie
    //! \brief rappresenta il numero di calorie presenti nel prodotto kJ
    int calorie;

public:
    //! \fn Prodotto
    //! \brief costruttore predefinito
    Prodotto();
    
    //! \fn Prodotto
    //! \brief costruttore 
    //! \param[in] codice codice univoco numerico
    //! \param[in] descrizione descrizione breve del prodotto (max 30 caratteri)
    //! \param[in] scadenza scadenza del prodotto in formato AAAA/MM/GG
    //! \param[in] calorie calorie del prodotto kJ
    Prodotto(int codice, char descrizione[MAX_DIM], char scadenza[MAX_DIM], int calorie);
    
    //! \fn Prodotto
    //! \brief costruttore di copia
    //! \param[in] p prodotto da copiare 
    Prodotto(const Prodotto& p);
    
    //! \fn ~Prodotto
    //! \brief distruttore predefinito
    virtual ~Prodotto();

    //! \fn GetCalorie
    //! \brief  restituisce il numero di calorie
    //! \return il numero di calorie
    int GetCalorie();
    
    //! \fn SetCalorie
    //! \brief modifica il valore delle calorie di un prodotto
    //! \param[in] calorie calorie da inserire
    void SetCalorie(int calorie);
    
    //! \fn GetCodice
    //! \brief  restituisce il codice del prodotto
    //! \return il codice del prodotto
    int GetCodice();
    
    //! \fn SetCodice
    //! \brief modifica il valore delle codice di un prodotto
    //! \param[in] codice codice da inserire
    void SetCodice(int codice);
    
    //! \fn GetDescrizione
    //! \brief  restituisce la descrizione del prodotto
    //! \return  la descrizione del prodotto
    char* GetDescrizione();
    
    //! \fn SetDescrizione
    //! \brief modifica la descrizione di un prodotto
    //! \param[in] descrizione descrizione da inserire
    void SetDescrizione(char descrizione[MAX_DIM]);
    
    //! \fn GetScadenza
    //! \brief  restituisce la scadenza del prodotto
    //! \return  la scadenza del prodotto
    char* GetScadenza();
    
    //! \fn SetScadenza
    //! \brief modifica la scadenza di un prodotto
    //! \param[in] scadenza scadenza da inserire
    void SetScadenza(char scadenza[MAX_DIM]) ;



};

#endif /* PRODOTTO_H */

