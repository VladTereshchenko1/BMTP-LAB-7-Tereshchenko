#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char sentence[MAX_LEN];
    printf("Vvedit' rechenya: ");
    fgets(sentence, MAX_LEN, stdin);

    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }

    if ((len >= 1 && sentence[len - 1] == '.') || (len >= 3 && strcmp(&sentence[len - 3], "...") == 0)) {
        printf("Rechenya maye korektne zavershennya.\n");

        if (strstr(sentence, "masyv") != NULL) {
            printf("U rechenni ye slovo 'masyv'.\n");
        } else {
            printf("U rechenni nemaye slova 'masyv'.\n");
        }
    } else {
        printf("Rechenya maye nekorektne zavershennya.\n");
    }

    return 0;
}

