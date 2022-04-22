

#include <iostream>
#include "Cars.h"
#include "Color.h"
#include "Clients.h"
#include "String"
void EnterClient();
int main()
{
    EnterClient();

}

void EnterClient()
{
    std::cout << "Bonjour, Garagiste Pedro et fils, quel est le nom de votre client ?\n";
    string name;
    cin >> name;
    std::cout << "ok il s'appelle " + name + "!\n";
    std::cout << "Nom de famille?\n";
    string secondName;
    cin >> secondName;
    std::cout << "Genre?\n";
    string Genre;
    cin >> Genre;
    std::cout << "L'âges?\n";
    string Years;
    cin >> Years;



    std::cout << "Bon, passons à sa voiture\n";
    std::cout << "Quel est sa marque?\n";
    string Brand;
    cin >> Brand;
    std::cout << "Et le modéle?\n";
    string Model;
    cin >> Model;
    std::cout << "J'aurais besoin de l'année\n";
    int YearsOld;
    cin >> YearsOld;
    std::cout << "les kilos-métres au compteurs ?\n";
    string Miles;
    cin >> Miles;
    std::cout << "la plaque d'immatriculation ?\n";
    string Plate;
    cin >> Plate;
    std::cout << "Et pour finir la couleur ? (1 : Rouge, 2 : Bleu, 3 : Gris, 4 : Noire, 5 : blanc )\n";
    int Color;
    cin >> Color;
    std::cout << "Il en demandent combiens?\n";
    int Price;
    cin >> Price;
    

    Cars AcceptCars = Cars(Brand, Model,Plate, YearsOld, Color, Miles, Price )
}

