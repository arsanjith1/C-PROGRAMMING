#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main() {
    FILE *f;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    clrscr();

    f = fopen("sample.txt", "r");

    if (f == NULL) {
        printf("\nUnable to open file");
        getch();
        exit(0);
    }

    while ((ch = fgetc(f)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }

    fclose(f);

    printf("\nNumber of characters = %d", characters);
    printf("\nNumber of words = %d", words);
    printf("\nNumber of lines = %d", lines);

    getch();
}
