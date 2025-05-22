#include <stdio.h>
#include <string.h>

int palindromo(char *plv) {
    char *inicio = plv;
    char *fim = plv + strlen(plv) - 1;

    while (inicio < fim) {
        if (*inicio != *fim) {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char palavra[101];

    printf("Digite uma palavra: ");
    scanf("%100s", palavra); 

    if (palindromo(palavra)) {
        printf("A palavra é um palíndromo!\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }

    return 0;
}
