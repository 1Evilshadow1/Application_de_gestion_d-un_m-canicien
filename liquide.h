#include <iostream>
#include <string>
#include <vector>
#include"produit.h"
#include <map>

using namespace std;
#pragma once



class liquide : public virtual produit{
    private:
        string flammable;
        float volume;
        string viscosite;
        string contenance;
        string type;
        string description;
        static int compteurL;
        map<string,int> propriete;//<propriete:valeur>
    public:
        liquide(string referance, double prix, DATE dateFabrication, int dureeGarantie, string flammable, float volume, string viscosite, string contenance, string type, string description);
        liquide();
        void  Remise(float) override;
        friend istream& operator>>(istream& in ,liquide& );
        friend ostream& operator<<(ostream& out,liquide&);
        bool operator==(const liquide& other) const;
        liquide& operator=(const liquide& v);
        int getcompteurL(){return compteurL;};
        void ajouterProp(string,int);
        void afficherMap();
        void supprimerLiquide(const string&);
        int obtenirInfo(const string& cle) const;
        map<string,int> getMap(){return propriete;};

        //Fonctions Fichier
        void creerFichier(const string& f);
        void enregisterFichierLiquide(const string& f) const;
        void afficherFichierLiquide(const string& f);

        ~liquide();
};
