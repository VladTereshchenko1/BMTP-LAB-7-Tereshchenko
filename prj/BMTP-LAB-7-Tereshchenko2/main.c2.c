#include <stdio.h>

void processNumbers() {
    double numbers[15];
    int count = 0;

    printf("Vvedit' 15 chisel:\n");
    for (int i = 0; i < 15; i++) {
        while (1) {
            printf("Chislo %d: ", i + 1);
            if (scanf("%lf", &numbers[i]) == 1) {
                break;
            } else {
                printf("Vvedeno nekorektne znachennya. Bud' laska, vvedit' chislo.\n");
                while(getchar() != '\n'); 
            }
        }
    }

    
    for (int i = 0; i < 15; i++) {
        if (numbers[i] > 3.50 && numbers[i] < 150.02) {
            count++;
        }
    }

    printf("\nChisla u zvorotnomu poryadku:\n");
    for (int i = 14; i >= 0; i--) {
        printf("%.2lf ", numbers[i]);
    }

    printf("\n\nKilkist' chisel, bil'shykh za 3.50 i menshykh za 150.02: %d\n", count);
}

int main() {
    char repeat;

    do {
        processNumbers();

        printf("\nPovtoryty vykonannya programy? (Y/N): ");
        scanf(" %c", &repeat);
        while (getchar() != '\n'); 

    } while (repeat == 'Y' || repeat == 'y');

    printf("Programa zavershena.\n");
    return 0;
}