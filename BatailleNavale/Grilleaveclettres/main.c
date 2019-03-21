// Grille bataille navale avec lettres avec semi-caractères
// Kevin Vaucher
// Mars 2019

#include <stdio.h>
#include <windows.h>

#define SIZE 10
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
#define DTLC 201 // ╔, Double Top Left Corner
#define DTRC 187 // ╗, Double Top Right Corner
#define DBLC 200 // ╚, Double Bottom Left Corner
#define DBRC 188 // ╝, Double Bottom Right Corner
#define DVSB 186 // ║, Double Vertical Simple Border
#define DVRB 185 // ╣, Double Vertical Right Border
#define DVLB 204 // ╠, Double Vertical Left Border
#define DHSB 205 // ═, Double Horizontal Simple Border
#define DHBB 202 // ╩, Double Horizontal Bottom Border
#define DHTB 203 // ╦, Double Horizontal Top Border
#define DC   206 // ╬, Double Center

// Fonction ligne du haut
void TopBorder(int Top) {
printf("%c", STLC); // Coin en haut à gauche
for (int i = 0; i < 9; i++) {
printf("%c%c", SHSB, SHTB);
}
printf("%c%c\n", SHSB, STRC);
}

void VerticalBars(int Verticalmiddle){
    for (int i = 0; i < 11; i++) {
        printf("%c ", SVSB);
    }
}

void HorizontalBar(int Horizontalmiddle){
    printf("\n");
    printf("%c", SVLB);
    for (int i = 0; i < 9; i++) {
        printf("%c%c", SHSB, SC);
    }
    printf("%c%c\n", SHSB, SVRB);
}

void BottomBar(int Bottom){

    printf("\n%c", SBLC); // Coin en bas à gauche
    for (int i = 0; i < 9; i++) {
        printf("%c%c", SHSB, SHBB);
    }
    printf("%c%c\n", SHSB, SBRC);
}
int main(void) {
    int i;
    int b;
    int Top;
    int Verticalmiddle;
    int Horizontalmiddle;
    int Bottom;
    SetConsoleOutputCP(65001); // For accented characters
    printf("Une grille basée sur des lignes simples :\n");
    SetConsoleOutputCP(437); // For semi-graphic characters

    // Lettres de la grille


    // On fait la grille avec les fonctions
    TopBorder(SIZE);
    for(int row=0;row<SIZE;row++) {
        if (row > 0) // Première ligne
        {
            HorizontalBar(SIZE);
        }
        VerticalBars(SIZE);
    }
    BottomBar(SIZE);

}
