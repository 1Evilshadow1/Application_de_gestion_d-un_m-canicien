#include<iostream>
#include "liquide.h"
#include"produit.h"
#include<fstream>
#include<string>
using namespace std;


liquide::liquide(){  
    compteurL++;

}
liquide::liquide(string referance, double prix, DATE dateFabrication, int dureeGarantie, string flammable, float volume, string viscosite, string contenance, string type, string description): produit(referance,prix,dateFabrication,dureeGarantie){
    this->flammable=flammable;
    this->volume=volume;
    this->viscosite=viscosite;
    this->contenance=contenance;
    this->type=type;
    this->description=description;

    compteurL++;
}
int liquide::compteurL=0;



liquide::~liquide(){
}
istream& operator>>(istream& in ,liquide& l){
    in>>static_cast<produit&>(l);
    cout<<"donner est ce que flammable ou non(true/false)"<<endl;
    in>>l.flammable;
    cout<<"donner le volume"<<endl;
    in>>l.volume;
    cout<<"donner la viscosite"<<endl;
    in>>l.viscosite;
    cout<<"donner la contenance"<<endl;
    in>>l.contenance;
    cout<<"le type est "<<endl;
    in>>l.type;
    cout<<"donner la description de ce liquide"<<endl;
    in>>l.description;
    return in;

}
ostream& operator<<(ostream& out, liquide& l){
    out<<static_cast<produit&>(l);
    out<<"Flammable="<<l.flammable<<endl;
    out<<"volume="<<l.volume<<endl;
    out<<"viscosite="<<l.viscosite<<endl;
    out<<"contenance="<<l.contenance<<endl;
    out<<"type="<<l.type<<endl;
    out<<"description:"<<l.description<<endl;
    return out;

}

void liquide::creerFichier(const string& f){
    try{
        ofstream file(f,ios::out|ios::trunc);
        if (!file.is_open()) {
            throw runtime_error("Erreur lors de la creation du fichier: "+f);
        }
        file.close();
    }
    catch (exception& e) {
        cout <<"Exception: "<<e.what()<<endl;
    }
    }
    
void liquide::enregisterFichierLiquide(const string& f) const{
    produit::enregistrerFichier(f) ;
    try {
        ofstream file(f, ios::out | ios::app);
        if (!file.is_open()) {
            throw runtime_error("Erreur lors de l'ouverture du fichier pour l'ecriture: " + f);
        }
        file<<"flammable="<<flammable<<endl;
        file<<"volume="<<volume<<endl;
        file<<"viscosite="<<viscosite<<endl;
        file<<"contenance="<<contenance<<endl;
        file<<"type="<<type<<endl;
        file<<"Description:"<<description<<endl;
        file.close();
    } catch (exception& e) {
        cout << "Exception: " << e.what() << endl;
    }
}

void liquide::afficherFichierLiquide(const string& f) {
    produit::afficherFichier(f);
    try {
        ifstream file(f, ios::in);
        if (!file.is_open()) {
            throw runtime_error("Erreur lors de l'ouverture du fichier pour la lecture: "+f);
        }
        string line;
        getline(file, line);
        cout <<"Flammable:"<< line << endl;
        getline(file, line);
        cout <<"volume:"<< line << endl;
        getline(file, line);
        cout <<"viscosite:"<< line << endl;
        getline(file, line);
        cout <<"contenance:"<< line << endl;
        getline(file, line);
        cout <<"type:"<< line << endl;
        getline(file, line);
        cout <<"description:"<< line << endl;
        file.close();
    } catch (exception& e) {
        cout << "Exception: " << e.what() << endl;
    }
}

void liquide::Remise(float p){
    prix=prix-(prix*p/100);
}
       
bool liquide::operator==(const liquide& other) const{
    return(referance==other.referance && prix==other.prix 
        && dateFabrication.getAnnee()==other.dateFabrication.getAnnee() && dateFabrication.getMois()==other.dateFabrication.getMois() && dateFabrication.getJour()==other.dateFabrication.getJour() && 
        dureeGarantie==other.dureeGarantie && flammable==other.flammable && volume==other.volume && viscosite==other.viscosite && contenance==other.contenance && type==other.type && description==other.description);
}

liquide& liquide::operator=(const liquide& l){
    if (this != &l) { 
        referance = l.referance;
        prix = l.prix;
        dateFabrication = l.dateFabrication; 
        dureeGarantie = l.dureeGarantie;
        flammable = l.flammable;
        volume = l.volume;
        viscosite = l.viscosite;
        contenance = l.contenance;
        type = l.type;
        description = l.description;
    }
    return *this;
    
}
void liquide::ajouterProp(string prop,int va){
    propriete.insert(make_pair(prop,va));

}

void liquide::supprimerLiquide(const string& cle) {
    propriete.erase(cle);
}
int liquide::obtenirInfo(const string& cle) const {
    map<string, int>::const_iterator it;
    it = propriete.find(cle);
    if (it != propriete.end()) {
        return it->second;
    }
    return 0; 
}