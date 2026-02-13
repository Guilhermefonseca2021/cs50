#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    string s = "hello";
    printf("s: %s\n", s);
    // in memory:  [H][E][L][L][O][\0] who any string in C is an array of characters a adress in the memory where the first character is stored, and the string is terminated with a null character '\0' to indicate the end of the string

    printf("%p\n", s); // address of the first character in the string, which is the same as &s[0]
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

// on terminal, compile with: gcc -o string string.c -lcs50