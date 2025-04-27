#include<iostream>
#include<string.h>
#include"client.h"
#include"employe.h"
#include"ouvriermecanicien.h"
#include"date.h"
#include"rendezVous.h"



rendezVous::rendezVous(){}

rendezVous::rendezVous(DATE d,float h,Client c,string des){
    date=d;
    heure=h;
    client=c;
    description=des;
}
void rendezVous::modifierRV(){
    cout<<"donner la nouvelle date"<<endl;
    cin>>date;
    cout<<"donner la nouvelle heure"<<endl;
    cin>>heure;
    cout<<"donner la nouvelle description"<<endl;
    cin>>description;
}
rendezVous::~rendezVous(){
    
}

istream& operator >>(istream& in, rendezVous& r){
    cout<<"donner le client"<<endl;
    in>>r.client;
    cout<<"donner la date"<<endl;
    in>>r.date;
    cout<<"donner l'heure"<<endl;
    in>>r.heure;
    cout<<"donner la description"<<endl;
    in>>r.description;
   
    return in;
}

ostream& operator <<(ostream& out, rendezVous& r){
    cout<<"----------affichage du rendez vous------------------"<<endl;
    out<<"date:"<<r.date<<endl;
    out<<"heure:"<<r.heure<<endl;
    out<<"description:"<<r.description<<endl;
    out<<"client:"<<r.client<<endl;
    return out;
}
