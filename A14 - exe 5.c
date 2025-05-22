#include <stdio.h>
#include <string.h>

void inverter_string(char *plv) {

    char *inicio = plv;
    char *fim = plv + strlen(plv) - 1;
    char temp;

    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char palavra[101];

    printf("Digite uma palara: ");
    scanf("%100s", palavra);

    inverter_string(palavra);

    printf("Palavra invertida: %s\n", palavra);

    return 0;
}
