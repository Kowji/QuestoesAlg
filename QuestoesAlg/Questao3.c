
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite 3 numeros:\n");
    scanf("%i %i %i'", &a, &b, &c);
    if (a > c) {
        int temp = c;
        c = a;
        a = temp;
    }
    if (a > b) {
        int temp = b;
        b = a;
        a = temp;
    }
    if (b > c) {
        int temp = c;
        c = b;
        b = temp;
    }
    printf("%d %d %d", a, b, c);
}
