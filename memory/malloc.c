#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char *s = get_string("s: ");
    // the addresss of s is stored in the stack, but the string itself is stored in the heap, which is a region of memory that can be dynamically allocated and deallocated at runtime using functions like malloc and free
    char *t = malloc(strlen(s) + 1); // allocate memory for t, which is the same length as s plus one for the null character

    if(t == NULL) 
    {
        return 1; // if malloc fails, it returns NULL, so we check for that and return 1 to indicate an error
    }

    for(int i = 0, n = strlen(s); i <= n; i++) 
    {
        t[i] = s[i]; // copy each character from s to t
    }

    if (strlen(t) > 0) 
    {   
        t[0] = toupper(t[0]);
    }
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

// on terminal, compile with: gcc -o malloc malloc.c -lcs50