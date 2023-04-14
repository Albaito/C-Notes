#include <stdio.h>

int main() {
    int sum1 = 100 + 50;
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2;
 
    int sub1 = sum3 - sum1;
    int sub2 = sum1 - sum1;
    int sub3 = sub2 - sub1;

    printf("%d\n",sub3);    // -650
    printf("%d\n", sum3 > sub1);    // true (1)
    printf("%d\n", sum3 == -650);   // false (0)
}

