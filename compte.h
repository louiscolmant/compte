#ifndef compte_h
#define compte_h

class compte {
private:
    bool ib;
    int numero;

protected:
    float solde;
    
public:
    float getSolde();
    int getNumero();

    void crediter(float montant);
    bool debiter(float montant);

    // constructeurs
    compte(int numero);

    // destructeur
    ~compte();
};

#endif /* compte_h */
