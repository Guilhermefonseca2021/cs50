#include <stdio.h>
#include <cs50.h>

// in libray we have a function that returns the length of a string, but we will implement our own version of it
int string_length(string s);

int main(void) {
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("Length of name: %d\n", length);
}

int string_length(string s) {
    int n = 0;
    while(s[n] != '\0') {
        n++;   
    }
    return n;
}

// on terminal
// gcc length.c -lcs50 -o length
// ./length