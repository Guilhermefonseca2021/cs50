#include <stdio.h>
#include <cs50.h>

void swap(int *a, int *b); // function prototype for swap, which takes two pointers to integers as parameters and returns void

int main(void) 
{
    int x = 42;
    int y = 43;

    printf("x: %i\n", x);
    printf("y: %i\n", y);

    swap(&x, &y); // pass the addresses of x and y to the swap function

    printf("x: %i\n", x);
    printf("y: %i\n", y);
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// on terminal, compile with: gcc -o swapp swapp.c -lcs50