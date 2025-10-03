#include <stdio.h>
#include <conio.h>
void main() 
{
    int n, i, j, r;

    clrscr(); 
    printf("\nGive the value of n\n");
    scanf("%d", &n);
    printf("\nThe prime numbers are:\n");

    for (i = 2; i <= n; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0)
                break;
        }

        if (j == i)  
            printf("%d\t", i);
    }

    getch();  
}
