#include <stdio.h>

#include <conio.h>

long int fact(int);

void main() {
    int n;
    long int f;

    clrscr();

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    f = fact(n);

    printf("\nThe factorial value of %d is %ld", n, f);

    getch();
}

long int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
