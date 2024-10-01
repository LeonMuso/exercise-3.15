#include <stdio.h>

int main(void) {
        float biglietto, totbiglietto;
        char tipo;
        printf("Inserisci il costo del biglietto: ");
        scanf("%f", &biglietto);
        printf("Inserisci il tipo di biglietto (P, S, D): ");
        scanf(" %c", &tipo);
        if (tipo == 'P') {
            totbiglietto = biglietto * 0.90;
        } else if (tipo == 'S') {
            totbiglietto = biglietto * 0.85;
        } else if (tipo == 'D') {
            totbiglietto = biglietto * 0.75;
        } else {
            totbiglietto = biglietto;
        }
        printf("L'importo da pagare e': %.2f\n", totbiglietto);

        return 0;
    }

