#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate_characters(char *str) {
    while (*str) {
        *str += 2; // Rotate by +2
        if (*str > 'z') // Wrap around if needed
            *str -= 26;
        str++;
    }
}

int access_code(){
    char code[9]; // 8 characters for the code + 1 for null terminator
    printf("Hola, ingresa el código de acceso!\n");
    read(0, code, sizeof(code));
    code[8] = '\0'; // Null terminate the string

    // Rotate characters in the code
    rotate_characters(code);

    if(strcmp(code, "r6uuy2tf") == 0){ // Rotated version of "p4ssw0rd"
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
