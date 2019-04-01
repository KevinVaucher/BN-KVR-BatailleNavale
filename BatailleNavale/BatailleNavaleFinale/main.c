#include <stdio.h>
#include <windows.h>

#pragma execution_character_set( "utf-8")

#define SIZE 9
#define GRILLE 10

#define STLC 218 // ┌, Single Top Left Corner
#define STRC 191 // ┐, Single Top Right Corner
#define SBLC 192 // └, Single Bottom Left Corner
#define SBRC 217 // ┘, Single Bottom Right Corner
#define SVSB 179 // │, Single Vertical Simple Border
#define SVRB 180 // ┤, Single Vertical Right Border
#define SVLB 195 // ├, Single Vertical Left Border
#define SHSB 196 // ─, Single Horizontal Simple Border
#define SHBB 193 // ┴, Single Horizontal Bottom Border
#define SHTB 194 // ┬, Single Horizontal Top Border
#define SC   197 // ┼, Single Center

int grille[GRILLE][GRILLE] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, -1, 0, 1, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {14, 0, 0, 0, 0, 0, 23, 0, 0, 0},
                              {4, 0, 0, 0, 2, 0, 23, 0, 0, 0},
                              {4, 0, 0, 0, 2, 0, 23, 0, 0, 0},
                              {4, 0, 0, 0, 0, 0, 0, -1, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

int Numbers = 1;
int Verticalborders;
int colonne=0;
int ligne=0;

// Fonction pour les barres verticales, les chiffres et le tableau
void VerticalBorders() {
    printf("%2d ", Numbers);
    for (int i = 0; i < 11; i++) {
        printf("%c ", SVSB);
        switch(grille[ligne][colonne-1]){

            case -1:
                printf("O ");
                break;
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                printf("  ");
                break;
            case 12:
            case 13:
            case 14:
                printf("- ");
                break;
            case 22:
            case 23:
            case 24:
                printf("X ");
                break;
        }
        colonne++;
//        if(colonne==10){
//            ligne++;
//            colonne=0;
//        }
    }
    ligne++;
    colonne=0;
    Numbers++;

}

// Fonction pour les barres horizontales
void HorizontalBorders(int Horizontalmiddle) {
    printf("\n");
    printf("   ");
    printf("%c", SVLB);
    for (int i = 0; i < 9; i++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SC);
    }
    printf("%c%c%c%c\n", SHSB, SHSB, SHSB, SVRB);
}

// Fonction pour la dernière ligne
void BottomBorder(int Bottom) {

    printf("\n");
    printf("   ");
    printf("%c", SBLC); // Coin en bas à gauche
    for (int i = 0; i < 9; i++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHBB);
    }
    printf("%c%c%c%c\n", SHSB, SHSB, SHSB, SBRC);
}

// Fonction pour la première ligne et les lettres
void TopBorder(int Top) {
    printf("     A   B   C   D   E   F   G   H   I   J\n");
    printf("   ");
    printf("%c", STLC); // Coin en haut à gauche
    for (int i = 0; i < 9; i++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHTB);
    }
    printf("%c%c%c%c", SHSB, SHSB, SHSB, STRC);
    printf("\n");
    VerticalBorders();
}

void Playgame() {
    int gagner = 0;
    while (gagner != 1) {
        // Afficher la grille
        for (int i = 0; i < SIZE; i++) {
            if (i < 1) { // Première ligne
                TopBorder(SIZE);
            }
            HorizontalBorders(SIZE);

            VerticalBorders();
        }
        BottomBorder(SIZE);
        // Demander les coordonnées de tir
        char tir[5];
        int hit[5];
        printf("\nChoisissez une cible : ");
        scanf("%s", &tir);
        int ligne = tir[0] - 65;
        int colonne = tir[1] - 49;
        if (grille[ligne][colonne] == 0) {
            printf("\nA l'eau !\n\n");
            grille[ligne][colonne] = 10;
        }
        if (grille[ligne][colonne] == 2) {
            printf("\nTouche !\n\n");
            grille[ligne][colonne] = 11;
        }
                                                                        //        if (grille[ligne][colonne] ){
                                                                        //            printf("\nTouche-coule !\n\n");
                                                                        //            grille[ligne][colonne] = 1;
                                                                        //         }
}
        // Appliquer les tirs sur le modèle
    }


int main() {

    int Affichageaide;
    int Top;
    int Verticalmiddle;
    int Horizontalmiddle;
    int Bottom;
    char tir[5];

    // Afficher les règles et demander pour passer
    printf("\nBonjour, voici les regles de la bataille navale :\n\n");
    printf("1. Chaque joueur peut tirer un coup par tour\n");
    printf("2. Le jeu vous signalera si vous touchez, ratez ou faites couler un bateau\n");
    printf("3. Il faut neutraliser tout les bateaux pour remporter la victoire !\n\n");
    printf("BONNE CHANCE !\n\n");

    printf("Appuyez sur ENTREE pour passer\n");
    getchar();

    // Présenter la grille et demander une case à attaquer
    Playgame();

    //
}