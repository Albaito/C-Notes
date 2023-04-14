#include <stdio.h>
 int main() {
    int votingAge = 18;
    int myAge = 20;

    // Tradditional
    if (myAge >= votingAge) {
        printf("You are elligible to vote!\n");
    }
    // Ternary Operator
    (myAge < 21) ? printf("You cannot legally drink.") : printf("You can legally drink.");

 }