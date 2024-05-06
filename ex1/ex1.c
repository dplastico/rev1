#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int access_code(){
    char code[9]; // 8 characters for the code + 1 for null terminator
    printf("Hola, ingresa el código de acceso!\n");
    read(0, code, sizeof(code));
    code[8] = '\0'; // Null terminate the string

    if(strcmp(code, "p4ssw0rd") == 0){
        printf("¡Felicitaciones! Objetivo logrado\n");
        exit(1); 
    }
    else{
        printf("Lo siento, código incorrecto\n");
        exit(1);
    }
    return 0;
}   

int main(){
    access_code();
    return 0;
}