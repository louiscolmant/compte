#include "compte.h"

int compte::getNumero() {
    return numero;
}

float compte::getSolde() {
    return solde;
}

void compte::crediter(float montant) {
    solde += montant;
}

bool compte::debiter(float montant) {
    if (!ib && solde>=montant) {
        solde -= montant;
        return true;
    }
    return false;
}

compte::compte(int _numero) {
    numero = _numero;
    solde = 0.0;
    ib = false;
}

compte::~compte() {
    //nothing to do
}
