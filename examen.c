#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main() {

    printf("Analizador de codigo C\n");
    printf("Iniciando programa...\n");

    return 0;
}

int es_digito(char c) {
    int estado = 0;

    if (c >= '0' && c <= '9') {
        estado = 1;
    }

    return estado;
}
