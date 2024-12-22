#include <iostream>
using namespace std;

int main() {
    char caractere; // Pour stocker chaque caractère lu
    int compteur_caracteres = 0; // Compteur des caractères
    int compteur_mots = 0;       // Compteur des mots
    int compteur_voyelles = 0;   // Compteur des voyelles
    bool precedent_espace = true; // Pour vérifier le début d'un mot

    cout << "Entrez une phrase (terminez par un point) : ";

    do {
        cin.get(caractere); // Lire caractère par caractère

        if (caractere != '.') {
            compteur_caracteres++;

            // Vérifier si c'est une voyelle
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
                caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
                compteur_voyelles++;
            }

            // Vérifier si c'est un espace pour détecter un nouveau mot
            if (caractere == ' ') {
                precedent_espace = true;
            } else if (precedent_espace) {
                compteur_mots++;
                precedent_espace = false;
            }
        }

    } while (caractere != '.');

    // Afficher les résultats
    cout << "\nNombre total de caractères : " << compteur_caracteres << endl;
    cout << "Nombre total de mots : " << compteur_mots << endl;
    cout << "Nombre total de voyelles : " << compteur_voyelles << endl;

    return 0;
}
