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

int es_operador(char c) {
    int estado = 0;

    if (c == '+' || c == '-' || c == '*' || c == '/') {
        estado = 1;
    }

    return estado;
}

int es_parentesis(char c) {
    int estado = 0;

    if (c == '(' || c == ')') {
        estado = 1;
    }

    return estado;
}

int es_llave(char c){
 int estado = 0;

    if (c == '{' || c == '}') {
        estado = 1;
    }

    return estado;
}

int es_asignacion(char c) {
    int estado = 0;

     if (c == '=')  {
        estado = 1;
    }

    return estado;
}


int es_tipo(char *token) {
    int estado = 0;

    if (strcmp(token, "int") == 0 ||strcmp(token, "float") == 0 ||strcmp(token, "char") == 0 ||strcmp(token, "double") == 0 ||strcmp(token, "void") == 0) {
        estado = 1;
    }

    return estado;
}







