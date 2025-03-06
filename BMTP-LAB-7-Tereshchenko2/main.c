#include <stdio.h>

void processNumbers() {
    double numbers[15];
    int count = 0;

    // Введення 15 чисел
    printf("Введіть 15 чисел:\n");
    for (int i = 0; i < 15; i++) {
        while (1) {
            printf("Число %d: ", i + 1);
            if (scanf("%lf", &numbers[i]) == 1) {
                break;
            } else {
                printf("Введено некоректне значення. Будь ласка, введіть число.\n");
                while(getchar() != '\n'); // Очищення буфера введення
            }
        }
    }

    // Підрахунок чисел у заданому діапазоні
    for (int i = 0; i < 15; i++) {
        if (numbers[i] > 3.50 && numbers[i] < 150.02) {
            count++;
        }
    }

    // Виведення чисел у зворотному порядку
    printf("\nЧисла у зворотному порядку:\n");
    for (int i = 14; i >= 0; i--) {
        printf("%.2lf ", numbers[i]);
    }

    printf("\n\nКількість чисел, більших за 3.50 і менших за 150.02: %d\n", count);
}

int main() {
    char repeat;

    do {
        processNumbers();

        // Запит на повторне виконання
        printf("\nПовторити виконання програми? (Y/N): ");
        scanf(" %c", &repeat);
        while (getchar() != '\n'); // Очищення буфера

    } while (repeat == 'Y' || repeat == 'y');

    printf("Програма завершена.\n");
    return 0;
}
