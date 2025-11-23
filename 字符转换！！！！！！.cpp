#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    scanf("%c", &c);
    
    char new_char;
    
    if (islower(c)) {
        // Ð¡Ð´×ÖÄ¸£ºa->d, b->e, ..., z->c
        new_char = (c - 'a' + 3) % 26 + 'a';
    }
    else if (isupper(c)) {
        // ´óÐ´×ÖÄ¸£ºA->Y, B->Z, C->A, ..., Z->X
        new_char = (c - 'A' - 2 + 26) % 26 + 'A';
    }
    else if (isdigit(c)) {
        // Êý×Ö£º0->9, 1->8, ..., 9->0
        new_char = '9' - (c - '0');
    }
    else if (c == ' ') {
        // ¿Õ¸ñ -> *
        new_char = '*';
    }
    else {
        // ÆäËû×Ö·û -> #
        new_char = '#';
    }
    
    printf("%c %c", c, new_char);
    return 0;
}
