// Programme : Bataille Navale
// Auteur : Kevin Vaucher
// Date : 05.04.2019

#include <stdio.h>
#include <windows.h>
#include <conio.h>

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

int hit[5] = {0, 0, 0, 0, 0};
int grille[GRILLE][GRILLE] = {{3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 4, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 4, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 4, 0, 0, 0, 2, 0},
                              {0, 0, 0, 0, 4, 0, 0, 0, 2, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 2, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 2, 0, 0, 0, 0, 0, 0, 0, 0}};

int colonne = 0;
int ligne = 0;

// Fonction pour les barres verticales, les chiffres et le tableau
void VerticalBorders(int Numbers) {
    printf("%2d ", Numbers + 1);
    for (int i = 0; i < SIZE+2; i++) {
        printf("%c ", SVSB);
        switch (grille[Numbers][i]) {
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
            default:
                printf("  ");
                break;
        }

    }
}

// Fonction pour les barres horizontales
void HorizontalBorders(int Horizontalmiddle) {
    printf("\n");
    printf("   ");
    printf("%c", SVLB);
    for (int i = 0; i < SIZE; i++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SC);
    }
    printf("%c%c%c%c\n", SHSB, SHSB, SHSB, SVRB);
}

// Fonction pour la dernière ligne
void BottomBorder(int Bottom) {
    printf("\n");
    printf("   ");
    printf("%c", SBLC); // Coin en bas à gauche
    for (int i = 0; i < SIZE; i++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHBB);
    }
    printf("%c%c%c%c\n", SHSB, SHSB, SHSB, SBRC);
}

// Fonction pour la première ligne et les lettres
void TopBorder(int Top) {
    printf("     A   B   C   D   E   F   G   H   I   J\n");
    printf("   ");
    printf("%c", STLC); // Coin en haut à gauche
    for (int i = 0; i < SIZE; i++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHTB);
    }
    printf("%c%c%c%c", SHSB, SHSB, SHSB, STRC);
    printf("\n");
}

void Playgame() {
    int gagner = 0;
    while (gagner != 1) {
        // Afficher la grille
        printf("Legende de la grille :\n\nO : Tir a l'eau\n- : Tir touche\nX : Bateau coule\n\n");
        for (int i = 0; i <= SIZE; i++) {
            if (i < 1) { // Première ligne
                TopBorder(SIZE);
            } else {
                HorizontalBorders(SIZE);
            }
            VerticalBorders(i);
        }
        BottomBorder(SIZE);
        // Demander les coordonnées de tir
        char tir[5];
        do {
            printf("Veuillez mettre la coordonnee sous cette forme : A2");
            printf("\nChoisissez une cible : ");
            scanf("%s", &tir);
            colonne = tir[0] - 65;
            ligne = tir[1] - 49;


        } while (tir[0] <= 64 || tir[0] >= 75);
        printf("Vous avez tire sur %d////%d", ligne, colonne);
        // Tir manqué
        if (grille[ligne][colonne] == 0) {
            printf("\nA l'eau !\n\n");
            grille[ligne][colonne] = -1;
        }
        // Tir touché
        if (grille[ligne][colonne] >= 1 && grille[ligne][colonne] < 10) {
            printf("\nTouche !\n\n");
            grille[ligne][colonne] += 10;
        }
       }
    }
    // Appliquer les tirs sur le modèle


int main() {
    int Affichageaide;
    int Top;
    int Verticalmiddle;
    int Horizontalmiddle;
    int Bottom;
    char tir[5] ;
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