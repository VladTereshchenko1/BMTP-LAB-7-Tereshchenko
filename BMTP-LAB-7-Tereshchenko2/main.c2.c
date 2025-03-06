#include <stdio.h>

void processNumbers() {
    double numbers[15];
    int count = 0;

  
    printf("������ 15 �����:\n");
    for (int i = 0; i < 15; i++) {
        while (1) {
            printf("����� %d: ", i + 1);
            if (scanf("%lf", &numbers[i]) == 1) {
                break;
            } else {
                printf("������� ���������� ��������. ���� �����, ������ �����.\n");
                while(getchar() != '\n'); // �������� ������ ��������
            }
        }
    }

    
    for (int i = 0; i < 15; i++) {
        if (numbers[i] > 3.50 && numbers[i] < 150.02) {
            count++;
        }
    }

    
    printf("\n����� � ���������� �������:\n");
    for (int i = 14; i >= 0; i--) {
        printf("%.2lf ", numbers[i]);
    }

    printf("\n\nʳ������ �����, ������ �� 3.50 � ������ �� 150.02: %d\n", count);
}

int main() {
    char repeat;

    do {
        processNumbers();

        printf("\n��������� ��������� ��������? (Y/N): ");
        scanf(" %c", &repeat);
        while (getchar() != '\n'); // �������� ������

    } while (repeat == 'Y' || repeat == 'y');

    printf("�������� ���������.\n");
    return 0;
}
