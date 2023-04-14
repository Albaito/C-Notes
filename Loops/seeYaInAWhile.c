#include <stdbool.h>

int main() {
    int whileCounter = 0;

    while (whileCounter < 5) {
        printf("Goodbye, world!\n");
        whileCounter++;
    }

    int doCounter = 0;

    do {
        printf("Hello, world!\n");
        doCounter++;
    } while (doCounter < 3);
}