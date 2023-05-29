#include <stdio.h>
#include <string.h>

#define MAX_CHARACTERS 40
#define MIN_CHARACTERS 30

void printPage(const char* text) {
    int len = strlen(text);
    int start = 0;
    int end = 0;

    while (start < len) {
        end = start + MAX_CHARACTERS;

        if (end >= len) {
            end = len;
        } else {
            while (end > start && text[end] != ' ') {
                end--;
            }

            if (end == start) {
                end = start + MAX_CHARACTERS;
            }
        }

        if (end - start < MIN_CHARACTERS) {
            end = start + MIN_CHARACTERS;
        }

        for (int i = start; i < end; i++) {
            printf("%c", text[i]);
        }

        printf("\n");
        start = end;
    }
}

int main() {
    const char* pageText = "Este es un ejemplo de texto para imprimir una página con no más de 40 caracteres pero no menos de 30";

    printPage(pageText);

    return 0;
}

