#include <stdio.h>

int main(void)
{
    for (int row = 0; row < 3; row++){ 
        print_row(3);
    }
}

void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}


// on terminal 
// gcc mario.c -o mario
// ./mario