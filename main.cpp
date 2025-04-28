#include <iostream>
#include <string>
using namespace std;
//includes
#include "personne.h"
#include "date.h"
#include "vehicule.h"
#include "client.h"
#include "employe.h"
#include "ouvriermecanicien.h"
#include "gestionnaire.h"
#include "clientemploye.h"

////partie othmane
#include"produit.h"
#include"liquide.h"
#include"mecanique.h"
#include"electronique.h"
#include"mecatronique.h"
#include"facture.h"
#include"rendezVous.h"
#include"reparation.h"


int main(){
    
    
    cout<<"----------------------------------------------------Partie de Mohamed Aziz Taalouch------------------------------------------:"<<endl;
   //test map
    Client c("Taalouch", "Aziz", 29212588, 14432289, "aziztaalouch@gmail.com", 1, "particulier", DATE(1, 1, 2020), 0, {});
    Client c1("Taalouch","Aziz",29212588,14432289,"aziztaalouch@gmail.com",1,"particulier",DATE(1, 1, 2020),2,vector<vehicule*>{
        new vehicule("Renault", "Clio", DATE(1, 1, 2021), 5000, "4321"),
        new vehicule("Peugeot", "208", DATE(1, 6, 2021), 8000, "5678")
    });
    c.ajouterInfo("preferences", "Notification par email");
    c.ajouterInfo("Remarques", "Client interessé par les promotions");
    c.ajouterInfo("Remarques", "Client fidèle depuis 5 ans");
    cout << "Preferences : " << c.obtenirInfo("preferences") << endl;
    cout << "Remarques : " << c.obtenirInfo("Remarques") << endl;

    c1.ajouterInfo("Remarques", "il travail pendant les weekends");
    cout << "Remarques : " << c1.obtenirInfo("Remarques") << endl;
    cout << "preferences : " << c1.obtenirInfo("preferences") << endl;

    /*
    // test de la classe date
    cout<<"-------------------- test de la classe date -------------------"<<endl;
    DATE d3; 
    DATE d5;                       
    DATE d4(1,2,2023);              
    cout << "-------LA METHODE AFFICHER--------" << endl;
    d4.afficher();                       
    d3=d4;                          
    cout << "-------LA METHODE COUT-----------" << endl;
    cout<<"d3: "<<d3<<endl;               
    cout << "-------LA METHODE CIN--------" << endl;
    cin>>d5;
    cout << "d5:"<<d5 << endl;
  
    



   //test de la classe vehicule 
    cout<<"-------------------- test de la classe vehicule -------------------"<<endl;

    vehicule v1;
    vehicule v2("Toyota", "Corolla", DATE(1,2,2023), 10000,"1234");
    cout << "-------LA METHODE AFFICHER--------" << endl;
    v2.afficher();    
    cout<<"---------LA METHODE getImmatriculation()---------------"<<endl;             
    cout<<v2.getImmatriculation()<<endl;                                                           
    cout<<"---------LA METHODE modifierKilomertrage----------------"<<endl;             
    v2.modifierKilometrage(15000);                                                         
    v2.afficher();                                                                       
    v1=v2;                                                                                 
    cout<<"---------LA METHODE cout<<----------------"<<endl;              
    cout<<v1<<endl;                   
    cout<<"---------LA METHODE cin>>----------------"<<endl;
    cin>>v1;
    cout<<v1<<endl;                                                       
    
    cout<<"-------------------- Operateur de Comparaison == Classe Vehicule -------------------"<<endl;
    vehicule v111("Toyota", "Corolla", DATE(1, 2, 2023), 10000, "1234");
    vehicule v222("Toyota", "Corolla", DATE(1, 2, 2023), 10000, "22");

    if (v111 == v222) {
        cout << "comme comme" << endl;
    } else {
        cout << "different" << endl;
    }

    //test de la classe Client/personne 
    cout<<"-------------------- test de la classe Client -------------------"<<endl;
    Client c1("Taalouch","Aziz",29212588,14432289,"aziztaalouch@gmail.com",1,"particulier",DATE(1, 1, 2020),2,vector<vehicule*>{
        new vehicule("Renault", "Clio", DATE(1, 1, 2021), 5000, "4321"),
        new vehicule("Peugeot", "208", DATE(1, 6, 2021), 8000, "5678")
    });
    Client c2;
    cout<<"-------------LA METHODE AFFICHER------------------" << endl;
    c1.afficher();
    c1.ajouterVehicule(new vehicule("Toyota", "Corolla", DATE(1, 1, 2020), 10000,"1234"));
    cout<<"---------LA METHODE ajoutervehicule---------------"<<endl;              
    cout<<c1<<endl;
    c1.deleteVehicule("5678");
    cout<<"---------LA METHODE deletevehicule----------------"<<endl;              
    cout<<c1<<endl;
    c1.modifier(58605362,"mohamedaziz.taalouch@enicar.ucar.tn");
    cout<<"---------------LA METHODE modifier----------------"<<endl;              
    cout<<c1<<endl;

    Client c3=c1; 
    cout<<"-------------------- Operateur d'affectation = Classe Client -------------------"<<endl;

    c2=c3;  
    cout<<"-------------------- Operateur istream >> Classe Client -------------------"<<endl;

    cin >> c3;
    cout<<"-------------------- Operateur ostream << Classe Client -------------------"<<endl;

    cout << "Client saisie: " << c3 << endl;
    

    //test de la classe Ouvriermecanicien/employe 
    cout<<"-------------------- test de la classe Ouvriermecanicien -------------------"<<endl;
    OuvrierMecanicien om1("Ahmed", "Tria", 22666777, 14425568, "ahmed@hotmail.com", 33, 1533.5, DATE(1, 1, 2020), "Mecanique", vector<vehicule*>());    
    OuvrierMecanicien om2=om1;
    om2.afficher();
    om2.augmentationSalaire();
    cout<<"---------LA METHODE augmentationsalaire---------------"<<endl;              
    cout<<om2<<endl;
    cout<<"---------methode cin---------------"<<endl;              
    OuvrierMecanicien om3;
    cin>>om3;
    cout<<"---------methode cout---------------"<<endl;
    cout<<om3<<endl;
    

   //test de la classe gestionnaire 
    cout<<"-------------------- test de la classe gestionnaire -------------------"<<endl;
    Gestionnaire g1("Taalouch","Aziz",29212588,14432289,"aziztaalouch@gmail.com",1,1533.5,DATE(1, 1, 2020),true,"directeur");
    g1.afficher();
    g1.augmentationSalaire();
    cout<<"---------LA METHODE augmentationsalaire---------------"<<endl;
    cout<<g1<<endl;
    cout<<"---------methode cin---------------"<<endl;
    Gestionnaire g2;
    cin>>g2;
    cout<<"---------methode cout---------------"<<endl;
    cout<<g2<<endl;
    
    //test de la classe ClientEmployee
    cout<<"-------------------- test de la classe ClientEmployee -------------------"<<endl;
    ClientEmployee ce1("Taalouch","Aziz",29212588,14432289,"aziztaalouch@gmail.com",1,"particulier",DATE(1, 1, 2020),2,vector<vehicule*>{
        new vehicule("Renault", "Clio", DATE(1, 1, 2021), 5000, "4321"),
        new vehicule("Peugeot", "208", DATE(1, 6, 2021), 8000, "5678")
    },33,1533.5,DATE(1, 1, 2020),2,vector<string>(),0.1,0);

    ce1.afficher();
    ce1.augmentationSalaire();
    cout<<"---------LA METHODE augmentationsalaire---------------"<<endl;
    cout<<ce1<<endl;
    cout<<"---------LA METHODE afficherAvantages---------------"<<endl;
    ce1.afficherAvantages();
    ce1.ajouterAvantage("Assurance sante");
    ce1.ajouterAvantage("Reduction sur les pieces de rechange");
    cout<<"---------LA METHODE ajouteravantages---------------"<<endl;
    ce1.afficherAvantages();
    ClientEmployee ce5;
    cout << "Entrez les informations du client employe :" << endl;
    cin >> ce5;
    cout << "Informations du client employe saisi :" << endl;
    cout << ce5;



    cout<<"-------------------- Partie Fichier + Exception Classe Client -------------------"<<endl;
    Client c11("Taalouch","Aziz",29212588,14432289,"aziztaalouch@gmail.com",1,"particulier",DATE(1, 1, 2020),3,vector<vehicule*>{
        new vehicule("Renault", "Clio", DATE(1, 1, 2021), 5000, "4321"),
        new vehicule("Peugeot", "208", DATE(1, 6, 2021), 8000, "5678"),
        new vehicule("Peugeot", "expert", DATE(1, 6, 2025), 900000, "141")
    });
    c11.creerFichier("clients.txt");
    c11.enregistrerFichier("clients.txt");
    c11.afficherFichier("clients.txt");
    
 
    cout<<"----------------------------------------------------Partie de Aziz Ben Othmane------------------------------------------:"<<endl;
    DATE d1,d2;
    int t,com;
  
    cout<<"--------classe Liquide-------------------"<<endl;
    liquide l1,l2,l3;
    double rem;
    cin>>l1;
    cout<<l1;

    cout<<"------------------Affectation = ----------------"<<endl;
    l3=l1;
    cout<<l3;
    
    cin>>l2;
    cout<<l1;
    cout<<l2;
    cout<<"-----Operation ===--------------------"<<endl;
    if(l1==l2){
        cout<<"C est le meme liquide"<<endl;
    }
    else{
        cout<<"Deux liquide differents"<<endl;
    }
    cout<<"------Fonction Remise----------"<<endl;
    cout<<"le pourcentage de la remise est : "<<endl;
    cin>>rem;
    l1.Remise(rem);
    cout<<l1;

        

    cout<<"--------classe pieceMecanique-------------------"<<endl;
    pieceMecanique pm1,pm2;
    double remC;
    cout<<"-------Saisie des pieces------------"<<endl;
    cin>>pm1;
    cin>>pm2;
    cout<<"-------affichage des pieces---------"<<endl;
    cout<<pm1;
    cout<<pm2;
    cout<<"-------Fonction Remise--------"<<endl;
    cout<<"Donner le pourcentage de la remise :"<<endl;
    cin>>remC;
    pm1.Remise(remC);
    cout<<"------Apres Remise----------"<<endl;
    cout<<pm1;

  


    cout<<"---------classe pieceElectronique------------"<<endl;
    pieceElectronique* p;
    pieceElectronique* pi2;
    pieceElectronique* pe1;
    pieceElectronique pe;
    cin>>pe;
    p= new pieceElectronique("PE127", 59.99, d2, 28, 8.0, 1.0, {"metal", "bois"},5);
    pi2= new pieceElectronique("PE129", 69.99, d2, 28, 8.0, 1.0, {"Silicium", "Or"},5);
    pe1= new pieceElectronique("PE128", 89.99, d2, 28, 8.0, 1.0, {"Aluminium", "Céramique"},5);
    cout<<pe;
    pe.ajouterPiece(p);
    pe.ajouterPiece(pi2);
    pe.ajouterPiece(pe1);
    pe.afficherEnsemble();
    

    cout<<"-----------classe pieceMecatronique----------"<<endl;
    pieceMecatronique* pme;
    pieceMecatronique* pMC;
    pieceMecatronique pmcA;
    cout<<"-----Saisie de la piece---------"<<endl;
    cin>>pmcA;
    cout<<"------Affichage de la piece-------------"<<endl;
    cout<<pmcA;
    pme = new pieceMecatronique("PM004", 299.99, {15, 4, 2023}, 36, 12.0, 3.0, {"Renault Clio", "Peugeot 208", "Volkswagen Golf"},5, "Haute", "Capteur", "Aluminium");
    pMC= new pieceMecatronique("PM001", 199.99, {15, 4, 2023}, 36, 12.0, 3.0, {"Renault Clio", "Peugeot 208", "Volkswagen Golf"},5, "Haute", "Capteur", "Aluminium");
    pMC->afficherMec();
    pMC->ajouterPieceM(pMC);
    pMC->ajouterPieceM(pme);
    pMC->afficherEnsemble();
    

    cout<<"---------classe facture-------------"<<endl;

    facture f,f1,f2;
    cout<<"-----Saisie de la facture---------"<<endl;
    cin>>f;
    cout<<"------cout de la facture-------------"<<endl;
    cout<<f; 
    cout<<"---------Saisie de la facture 1----------------"<<endl;
    cin>>f1;
    cout<<"------cout de la facture 1-------------"<<endl;
    cout<<f1;
    cout<<"donner le taux de Tax"<<endl;
    t=f.calculTax(20);
    cout<<"le Tax est "<<t<<endl;
    cout<<"---------OPERATEUR +----------------------------"<<endl;
    f2=f+f1;
    cout<<f2;

    delete pme,p,pi2,pMC;
    
    cout<<"--------Fichier Liquide-----------"<<endl;
    
    cout<<"Classe liquide"<<endl;
    l1.creerFichier("liquide.txt");
    l1.enregisterFichierLiquide("liquide.txt");
    l1.afficherFichierLiquide("liquide.txt");
   
    

   cout<<"--------------------  classe rendezVous -------------------"<<endl;
   rendezVous r;
   cin>>r;
   cout<<r;
   cout<<"-----------METHODE MODIFIER RV-----------------------"<<endl;
   r.modifierRV();
   cout<<"Nouveau RV--------------"<<endl;
   cout<<r;
   
   cout<<"---------------------  classe reparation -------------------"<<endl;
   reparation r1;
    cin>>r1;
    cout<<r1;
    r1.creerFichier("reparation.txt");
    r1.enregistrerFichier("reparation.txt");
    r1.afficherFichier("reparation.txt");
    



*/
    return 0;
}

//g++ -o main.exe main.cpp personne.cpp date.cpp vehicule.cpp client.cpp employe.cpp ouvriermecanicien.cpp gestionnaire.cpp clientemploye.cpp produit.cpp liquide.cpp mecanique.cpp electronique.cpp mecatronique.cpp facture.cpp rendezVous.cpp reparation.cpp
//./main.exe