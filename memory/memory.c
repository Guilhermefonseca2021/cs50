#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// valgrind
int main(void) 
{
    int *x = malloc(3 * sizeof(int)); // allocate memory for an integer and store the address in x
    x[0] = 42; // assign the value 42 to the memory location pointed to by x
    x[1] = 43; // assign the value 43 to the memory location pointed to by x + 1, which is out of bounds and can lead to undefined behavior
    x[2] = 44; // assign the value 44 to the memory location pointed to by x + 2, which is also out of bounds and can lead to undefined behavior
    free(x); // deallocate the memory allocated for x, which is important to prevent memory leaks and ensure that the program does not run out of memory
    
}

// on terminal, compile with: gcc -o memory memory.c -lcs50