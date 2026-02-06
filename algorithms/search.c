#include <stdio.h>
#include <cs50.h>

int main(void) {
    int numbers[7] = {20, 300, 200, 400, 100, 500, 600};
    int n = get_int("Number to find: ");

    for (int i = 0; i < 7; i++) {
        if (numbers[i] == n) {
            printf("Found %i at index %i\n", n, i);
            return 0;
        }
    }
    printf("%i not found\n", n);
    return 1;

}

// on terminal 
// gcc search.c -lcs50 -o search
// ./search