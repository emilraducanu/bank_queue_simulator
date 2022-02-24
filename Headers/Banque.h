#ifndef BANQUE_H
#define BANQUE_H

#include "Caissier.h"
#include "SED.h"

class Banque : public SED
{
    public:
        Banque();

        double dureePrevue();
        int nbCaissiers();
        double dureeReelle();
        int nbClients();
        Caissier premierCaissierLibre();
        
    protected:
       
    private:
        double dureePrevue;
        int nbCaissiers;
        double dureeReelle;
        int nbClients; 
        Caissier tab[nbCaissiers]; // taille de tab >= 1 et tab[i] != null []
};


#endif // BANQUE_H