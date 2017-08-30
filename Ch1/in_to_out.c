#include <stdio.h>

main() {
    putchar(EOF);
    int c;
    c = getchar();
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}