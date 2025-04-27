#include<iostream>
#include<string.h>
#include<fstream>
#include"vehicule.h"
#include"client.h"
#include"employe.h"
#include"date.h"
#include"facture.h"
#include"reparation.h"




reparation::reparation(DATE d ,Client c,vehicule v,string des,facture f){
    date=d;
    client=c;
    vehiculeR=v;
    description=des;
    factureR=f;
}

reparation::reparation(){

}

reparation::~reparation(){}

istream& operator>>(istream& in,reparation& r1){
    cout<<"donner la date"<<endl;
    in>>r1.date;
    cout<<"donner le client"<<endl;
    in>>r1.client;
    cout<<"donner le vehicule"<<endl;
    in>>r1.vehiculeR;
    cout<<"donner la description"<<endl;
    in>>r1.description;
    cout<<"donner la facture"<<endl;
    in>>r1.factureR;
    
    return in;


}
ostream& operator<<(ostream& out,reparation& r1){
    cout<<"------------------affichage de la reparation-----------------"<<endl;
    out<<"date:"<<r1.date<<endl;
    out<<"client:"<<r1.client<<endl;    
    out<<"vehicule:"<<r1.vehiculeR<<endl;
    out<<"description:"<<r1.description<<endl;
    out<<"facture:"<<r1.factureR<<endl;
    return out;
}

void reparation::creerFichier(const string& rep){
    try{
        ofstream file(rep,ios::out|ios::trunc);
        if (!file.is_open()) {
            throw runtime_error("Erreur lors de la creation du fichier: "+rep);
        }
        file.close();
    }
    catch (exception& e) {
        cerr << e.what() << endl;
    }
}

void reparation::enregistrerFichier(const string& rep) const  {
    try{
        ofstream file(rep,ios::out|ios::trunc);
        if (!file.is_open()) {
            throw runtime_error("Erreur lors de la creation du fichier: "+rep);
        }
        file<<"date:"<<date<<endl;
        file<<"client:"<<client<<endl;
        file<<"vehicule:"<<vehiculeR<<endl;
        file<<"description:"<<description<<endl;
        //file<<"facture:"<<factureR<<endl;
        file.close();


    }
    catch (exception& e) {
        cerr << e.what() << endl;
    } 

}

void reparation::afficherFichier(const string& rep) {
    try {
        ifstream file(rep);
        if (!file.is_open()) {
            throw runtime_error("Erreur lors de l'ouverture du fichier: " + rep);
        }
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } catch (exception& e) {
        cerr << e.what() << endl;
    }
}