#include<iostream>
#include<string.h>
#include"client.h"
#include"employe.h"
#include"ouvriermecanicien.h"
#include"date.h"




class rendezVous{
    DATE date;
    float heure;
    Client client;
    string description;
    public:
       rendezVous(DATE,float,Client,string);
       rendezVous();
       void modifierRV();
       friend istream& operator >>(istream& in, rendezVous&);
       friend ostream& operator <<(ostream& out, rendezVous&);
       ~rendezVous();

};
