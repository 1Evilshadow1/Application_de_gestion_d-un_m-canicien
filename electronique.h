#include <iostream>
#include <string>
#include <vector>
#include<list>
#include"produit.h"
using namespace std;
#pragma once



class pieceElectronique : virtual public produit{
    private:
         double tension;
         double courant;
         //vector<string> MatU;
         list<string> MatU;//Materiels Utlisés
         int nbrP;
         vector<pieceElectronique*> ensemble;
         public:
         pieceElectronique(string referance, double prix, DATE dateFabrication, int dureeGarantie, double tension, double courant, vector<string> compatibilite,int Nbr);
         pieceElectronique(const  pieceElectronique& other);
         pieceElectronique();
         void  Remise(float);
         void ajouterPiece(pieceElectronique*);
         friend istream& operator>>(istream& in,pieceElectronique&) ;
         friend ostream& operator<<(ostream& out,pieceElectronique&);
         void afficherPiece();
         void afficherEnsemble();
         double gettension(){return tension;};
         double getcourant(){return courant;};
         void Setcourant(double courant1){courant=courant1;};
         void SetTension(double tension){this->tension=tension;};
         void SetComp(list<string>matul){MatU=matul;};
         ~pieceElectronique();
 };