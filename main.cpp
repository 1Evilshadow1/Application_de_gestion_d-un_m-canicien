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
    
    cout<<"----------------------------------------------------Menu------------------------------------------:"<<endl;
    int option;


    do {
        cout << "Menu:" << endl;
        cout << "0. Quitter" << endl;
        cout << "-------------Partie de Mohamed Aziz Taalouch-------------:" << endl;
        cout << "1. Test de la classe DATE" << endl;
        cout << "2. Test de la classe VEHICULE" << endl;
        cout << "3. Test de la classe CLIENT" << endl;
        cout << "4. Test de la classe OUVRIER MECANICIEN" << endl;
        cout << "5. Test de la classe GESTIONNAIRE" << endl;
        cout << "6. Test de la classe CLIENT EMPLOYE" << endl;
        cout << "-------------Partie de Aziz BenOthmen-------------:" << endl;
        cout << "7. Test de la classe LIQUIDE" << endl;
        cout << "8. Test de la classe PIECE MECANIQUE" << endl;
        cout << "9. Test de la classe PIECE ELECTRONIQUE" << endl;
        cout << "10. Test de la classe PIECE MECATRONIQUE" << endl;
        cout << "11. Test de la classe FACTURE" << endl;
        cout << "12. Test de la classe RENDEZ VOUS" << endl;
        cout << "13. Test de la classe REPARATION" << endl;
        cout << "Entrez votre choix: ";
        cin >> option;

        switch (option) {
            case 0:
                cout << "Quitter le programme..." << endl;
            break;
            case 1: // Menu DATE
                cout << "Test de la classe DATE" << endl;
                int optionDate;
                do {
                    cout << "Menu DATE:" << endl;
                    cout << "0. Retour au menu principal" << endl;
                    cout << "1. Test des methodes de la classe DATE" << endl;
                    cout << "Entrez votre choix: ";
                    cin >> optionDate;
                    DATE d1; 
                    DATE d2;                       
                    switch (optionDate) {
                        case 1:
                                cout << "Execution du test de DATE" << endl;
                                cout << "-------LA METHODE CIN--------" << endl;
                                cin>>d1;
                                cout << "d1:"<<d1 << endl;
                                cout << "-------LA METHODE AFFICHER--------" << endl;
                                d1.afficher();     
                                cout << "-------affectation par operateur = (d2=d1)-----------" << endl;                  
                                d2=d1;                          
                                cout << "-------LA METHODE COUT-----------" << endl;
                                cout<<"d2: "<<d2<<endl;               
                            break;
                        case 0:
                            cout << "Retour au menu principal..." << endl;
                            break;
                        default:
                            cout << "Choix invalide." << endl;
                    }
                } while (optionDate != 0);
                break; 

            case 2: //menu vehicule
                cout << "Test de la classe Vehicule" << endl;
                int optionVehicule;
                do {
                    cout << "Menu Vehicule:" << endl;
                    cout << "0. Retour au menu principal" << endl;
                    cout << "1. Test des methodes de la classe Vehicule" << endl;
                    cout << "Entrez votre choix: ";
                    cin >> optionVehicule;
                    vehicule v1;
                    vehicule v2;
                    vehicule v3("Toyota", "Corolla", DATE(1,2,2023), 10000,"1234");
                    //vehicule v3("Toyota", "LAND CRUISER", DATE(1,11,2013), 10040,"sdq");
                    switch (optionVehicule) {
                        case 1:
                            cout << "Execution du test de Vehicule" << endl;
                            cout<<"---------LA METHODE cin>>----------------"<<endl;
                            cin>>v1;
                            cout<<v1<<endl; 
                            cout << "-------LA METHODE AFFICHER--------" << endl;
                            v1.afficher();
                            cout<<"---------LA METHODE getImmatriculation()---------------"<<endl;             
                            cout<<v1.getImmatriculation()<<endl;                                   

                            cout<<"---------LA METHODE modifierKilomertrage----------------"<<endl;  
                            int km;
                            cout << "Entrez le kilometrage: ";
                            cin >> km;           
                            v1.modifierKilometrage(km);           
                            v1.afficher();       
                            cout << "-------affectation par operateur = (v2=v1)-----------" << endl;                                                      
                            v2=v1;                                                                                 
                            cout<<"---------LA METHODE cout<<----------------"<<endl;              
                            cout<<v1<<endl;  
                            cout<<"faire le saisie d'une 3 eme vehicule :"<<endl;
                            cin>>v3;
                            cout<<v3<<endl; 
                            cout<<"---------L'operateur de comparaison == ----------------"<<endl;                 
                            if (v1 == v3) {
                                cout << "v1 et v3 sont les memes" << endl;
                            } else {
                                cout << "v1 et v3 sont different" << endl;
                            }
                            break;

                        case 0:
                            cout << "Retour au menu principal..." << endl;
                            break;
                        default:
                            cout << "Choix invalide." << endl;
                    }
                } while (optionVehicule != 0);
                break; 

            case 3:
                // Menu client
                cout << "Test de la classe Client" << endl;
                int optionClient;
                do {
                    cout << "Menu Client:" << endl;
                    cout << "0. Retour au menu principal" << endl;
                    cout << "1. Test des methodes de la classe Client" << endl;
                    cout << "2. Test de la map" << endl;
                    cout << "3. Test de la partie fichier + exception" << endl;
                    cout << "Entrez votre choix: ";
                    cin >> optionClient;
                    Client c1;
                    Client c2;  
                    Client c3; 
                    Client c4;
                    vehicule v4;
                    int tel;
                    string email;
                    string immatriculation;
                    string cle;
                    string valeur;
                    string result;
                    switch (optionClient) {
                        case 1:
                                cout << "Execution du test de Client" << endl;
                                cout<<"-------------------- Operateur istream >> Classe Client -------------------"<<endl;
                                cout << "Entrez les informations du client c1:" << endl;
                                cin >> c1;
                                cout<<"-------------LA METHODE AFFICHER------------------" << endl;
                                c1.afficher();
                                cout<<"---------LA METHODE ajoutervehicule---------------"<<endl; 
                                cout << "Entrez les informations du vehicule:" << endl;
                                cin >> v4;
                                c1.ajouterVehicule(new vehicule(v4));             
                                cout<<c1<<endl;
                                cout<<"---------LA METHODE deletevehicule----------------"<<endl;              
                                cout << "Entrez l'immatriculation du vehicule a supprimer:" << endl;
                                cin >> immatriculation;
                                c1.deleteVehicule(immatriculation);
                                cout<<c1<<endl;
                                cout<<"---------LA METHODE modifier----------------"<<endl;
                                cout << "Entrez le nouveau numero de telephone et email:" << endl;
                                cin >> tel >> email;
                                c1.modifier(tel, email);
                                cout<<c1<<endl;
                                cout<<"-------------------- Operateur d'affectation = Classe Client (c2=c1)-------------------"<<endl;
                                c2=c1;  
                                cout<<"-------------------- Operateur ostream << Classe Client -------------------"<<endl;
                                cout<<c2<<endl;
                                cout<<"-------------------- methode et attribut static -------------------"<<endl;
                                cout<<"compteur client :"<<c1.getCompteurClient()<<endl;
                            
                                                        
                             
                            break;
                        case 2:
                                cout << "-----------------test map-------------------------------<<" << endl;
                                cout << "Entrez les informations du client c3:" << endl;
                                cin >> c3;
                                cout << "Donner la cle de la map: ";
                                cin.ignore();
                                getline(cin, cle);
                                
                                cout << "Donner la valeur de la map: ";
                                getline(cin, valeur);
                            
                                cout << "-------------------- La methode ajouterInfo / obtenirInfo -------------------" << endl;
                                c3.ajouterInfo(cle, valeur);
                            
                                cout << "Cle: " << cle << " - Valeur: " << c3.obtenirInfo(cle) << endl;
                            
                                cout << "-------------------- La methode supprimerInfo -------------------" << endl;
                                cout << "Entrez la cle à supprimer: ";
                                cin.ignore();
                                getline(cin, cle); 

                                c3.supprimerInfo(cle);

                                result = c3.obtenirInfo(cle);
                                if (result.empty()) {
                                    cout << "Cle introuvable après suppression." << endl;
                                } else {
                                    cout << "Valeur associee à la cle: " << result << endl;
                                }

                        
                            break;  
                        case 3:
                                cout<<"-------------------- Partie Fichier + Exception Classe Client -------------------"<<endl;
                                cout << "Entrez les informations du client c4:" << endl;
                                cin >> c4;
                                cout<<"creation du fichier"<<endl;
                                c4.creerFichier("clients.txt");
                                cout<<"enregistrement dans le fichier"<<endl;
                                c4.enregistrerFichier("clients.txt");
                                cout<<"affichage depuis le fichier"<<endl;
                                c4.afficherFichier("clients.txt");
                            break; 
                        case 0:
                            cout << "Retour au menu principal..." << endl;
                            break;
                        default:
                            cout << "Choix invalide." << endl;
                    }
                } while (optionClient != 0);
                break; 

            case 4: //menu ouvrier mecanicien
                cout << "Test de la classe OUVRIER MECANICIEN" << endl;

                 int optionOuvrierMecanicien;
                 do {
                     cout << "Menu Ouvrier Mecanicien:" << endl;
                     cout << "0. Retour au menu principal" << endl;
                     cout << "1. Test des methodes de la classe Ouvrier Mecanicien" << endl;
                     cout << "Entrez votre choix: ";
                     cin >> optionOuvrierMecanicien;
                     OuvrierMecanicien om1;    

                     switch (optionOuvrierMecanicien) {
                         case 1:
                                cout<<"-------------------- test de la classe Ouvriermecanicien -------------------"<<endl;
                                cout<<"---------methode cin---------------"<<endl;              
                                cin>>om1;
                                cout<<"methode afficher"<<endl;
                                om1.afficher();
                                cout<<"---------LA METHODE augmentationsalaire---------------"<<endl;              

                                om1.augmentationSalaire();
                                cout<<"---------methode cout---------------"<<endl;
                                cout<<om1<<endl;
          
                             break;
                         case 0:
                             cout << "Retour au menu principal..." << endl;
                             break;
                         default:
                             cout << "Choix invalide." << endl;
                     }
                 } while (optionOuvrierMecanicien != 0);
                 break; 

            case 5: //menu gestionnaire
            cout << "Test de la classe Gestionnaire" << endl;

            int optionGestionnaire;
            do {
                cout << "Menu Gestionnaire:" << endl;
                cout << "0. Retour au menu principal" << endl;
                cout << "1. Test des methodes de la classe Gestionnaire" << endl;
                cout << "Entrez votre choix: ";
                cin >> optionGestionnaire;
                Gestionnaire g1;
                Gestionnaire g2;

                switch (optionGestionnaire) {
                    case 1:
                            cout<<"-------------------- test de la classe Gestionnaire -------------------"<<endl;
                            cout<<"---------methode cin---------------"<<endl;
                            cin>>g1;
                            cout<<"---------LA METHODE afficher ---------------"<<endl;
                            g1.afficher();
                            cout<<"---------LA METHODE augmentationsalaire---------------"<<endl;
                            g1.augmentationSalaire();
                            cout<<"---------methode cout---------------"<<endl;
                            cout<<g1<<endl;
     
                        break;
                    case 0:
                        cout << "Retour au menu principal..." << endl;
                        break;
                    default:
                        cout << "Choix invalide." << endl;
                }
            } while (optionGestionnaire != 0);
            break; 

            case 6://menu client employe
            cout << "Test de la classe Client_Employe" << endl;

            int optionClientEmploye;
            do {
                cout << "Menu Client_Employe:" << endl;
                cout << "0. Retour au menu principal" << endl;
                cout << "1. Test des methodes de la classe Client_Employe" << endl;
                cout << "Entrez votre choix: ";
                cin >> optionClientEmploye;
                ClientEmployee ce1;
                ClientEmployee ce5;
                string avantage;

                switch (optionClientEmploye) {
                    case 1:
                            cout<<"-------------------- test de la classe ClientEmployee -------------------"<<endl;
                            cout<<"---------methode cin---------------"<<endl;
                            cin>>ce1;
                            cout<<"---------LA METHODE afficher---------------"<<endl;
                            cout<<ce1<<endl;
                            cout<<"---------LA METHODE augmentationSalaire ---------------"<<endl;
                            ce1.augmentationSalaire();
                            cout<<"---------methode cout---------------"<<endl;
                            cout<<ce1<<endl;
                            cout<<"---------LA METHODE afficherAvantages---------------"<<endl;
                            ce1.afficherAvantages();
                            cout<<"---------LA METHODE ajouterAvantages---------------"<<endl;
                            cout << "Entrez le 1er avantage à ajouter: ";
                            cin.ignore(); 
                            getline(cin, avantage);
                            ce1.ajouterAvantage(avantage);
                            cout << "Entrez le 1er avantage à ajouter: ";
                            getline(cin, avantage);
                            ce1.ajouterAvantage(avantage);
                            cout<<"---------LA METHODE ajouteravantages---------------"<<endl;
                            ce1.afficherAvantages();
            
                        break;
                    case 0:
                        cout << "Retour au menu principal..." << endl;
                        break;
                    default:
                        cout << "Choix invalide." << endl;
                }
            } while (optionClientEmploye != 0);
            break; 


            case 7:
                cout << "Test de la classe LIQUIDE" << endl;
                break;

            case 8:
                cout << "Test de la classe PIECE MECANIQUE" << endl;
                break;

            case 9:
                cout << "Test de la classe PIECE ELECTRONIQUE" << endl;
                break;

            case 10:
                cout << "Test de la classe PIECE MECATRONIQUE" << endl;
                break;

            case 11:
                cout << "Test de la classe FACTURE" << endl;
                break;

            case 12:
                cout << "Test de la classe RENDEZ VOUS" << endl;
                break;

            case 13:
                cout << "Test de la classe REPARATION" << endl;
                break;

            default:
                cout << "Choix invalide. Veuillez reessayer." << endl;
        }
    } while (option != 0);
    cout<<"----------------------------------------------------Menu------------------------------------------:"<<endl;





    /*
    cout<<"----------------------------------------------------Partie de Mohamed Aziz Taalouch------------------------------------------:"<<endl;

    
   
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
    cout<<"compteur client :"<<c1.getCompteurClient()<<endl;

    Client c3=c1; 
    cout<<"-------------------- Operateur d'affectation = Classe Client -------------------"<<endl;

    c2=c3;  
    cout<<"-------------------- Operateur istream >> Classe Client -------------------"<<endl;

    cin >> c3;
    cout<<"-------------------- Operateur ostream << Classe Client -------------------"<<endl;

    cout << "Client saisie: " << c3 << endl;

    cout << "-----------------test map-------------------------------<<"<< endl;
    c3.ajouterInfo("preferences", "Notification par email");
    c3.ajouterInfo("Remarques", "Client interesse par les promotions");
    c3.ajouterInfo("Remarques", "Client fidele depuis 5 ans");
    cout << "Preferences : " << c3.obtenirInfo("preferences") << endl;
    cout << "Remarques : " << c3.obtenirInfo("Remarques") << endl;

    c1.ajouterInfo("Remarques", "il travail pendant les weekends");
    cout << "Remarques : " << c1.obtenirInfo("Remarques") << endl;
    cout << "preferences : " << c1.obtenirInfo("preferences") << endl;

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
    cout<<"Nbr de Liquide est :"<<l1.getCompteur()<<endl;

    cout<<"---------------MAP Liquide----------------"<<endl;
    int comp;
    while(true){
        string cle;
        int val;
        cout<<"fin pour arreter"<<endl;
        cout<<"Propriete :"<<endl;
        cin>>cle;
        if(cle=="fin"){
            break;
        }
        cout<<"donner Valeur"<<endl;
        cin>>val;
        l1.ajouterProp(cle,val);
        comp++;
       
    }
    for (const auto& paire : l1.getMap()) {
        cout << "Cle: " << paire.first << ", Valeur : " << paire.second << endl;
    }




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
    pe1= new pieceElectronique("PE128", 89.99, d2, 28, 8.0, 1.0, {"Aluminium", "Ceramique"},5);
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