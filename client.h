#ifndef CLIENT_H
#define CLIENT_H

#include "personne.h"
#include "vehicule.h"
#include "date.h"
#include <map>

class Client: virtual public Personne{
    private:
        int id;
        string type;
        DATE ddv;
        int nbrVehicules;
        vector<vehicule*> vehicules;
        map<string, string> infosSupplementaires; //map
        static int CompteurClient;
    public:
        Client(string nom, string prenom, int tel, int CIN, string email,int id, string type, DATE ddv,int nbrVehicules, vector<vehicule*> vehicules);
        Client();
        Client(const Client& other);

        void ajouterVehicule(vehicule* v);
        void deleteVehicule(string immatriculation);
        void afficher();
        void modifier(int tel, string email);
        //map
        void ajouterInfo(const string& cle, const string& valeur);
        void supprimerInfo(const string& cle);
        string obtenirInfo(const string& cle) const;
       //map
        int getnbrVehicules() const { return nbrVehicules; }
        static int getCompteurClient() {return CompteurClient;};
        const vector<vehicule*>& getVehicules() const { return vehicules; } 

        Client operator+(const Client& other); 
        Client& operator=(const Client& other);  
        friend ostream& operator<<(ostream& os, const Client& c);
        friend istream& operator>>(istream& is, Client& c);

        
        void creerFichier(const string& f);
        void enregistrerFichier(const string& f) const;
        //void recuperer(const string& f, Client& c);
        void afficherFichier(const string& filename);
        
        ~Client();

};
#endif // CLIENT_H