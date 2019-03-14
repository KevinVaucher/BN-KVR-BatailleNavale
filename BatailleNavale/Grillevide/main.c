// Semi-graphic characters sample code
// Xavier Carrel
// Feb 2019

#include <stdio.h>
#include <windows.h>

#define STLC 218 // ┌, Single Top Left Corner
#define STRC 191 // ┐, Single Top Right Cornerl
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

int b;
int i;

int main(void) {
    SetConsoleOutputCP(65001); // For accented characters
    printf("Une grille basée sur les lignes simples:\n");
    SetConsoleOutputCP(437); // For semi-graphic characters
    printf("%c", STLC); // Coin en haut à gauche

    for (i = 0; i < 9; i++) {
        printf("%c%c", SHSB, SHTB);
    }
    printf("%c%c\n", SHSB, STRC);
        for (i = 0; i < 11; i++) {
            printf("%c ", SVSB);
        }
        printf("\n");
        printf("%c", SVLB);
        for (i = 0; i < 9; i++) {
            printf("%c%c", SHSB, SC);
        }
        printf("%c%c", SHSB, SVRB);
}
