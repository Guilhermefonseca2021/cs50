#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    string strings[] = {"batleship", "boat", "submarine", "aircraft carrier", "destroyer"};
    string s = get_string("String to find: ");

    for (int i = 0; i < 5; i++) {
        // Use strcmp to compare strings in C and check if they are equal
        if (strcmp(strings[i], s) == 0) {
            printf("Found\n");
            return 0;
        }
    }
    
    printf("Not found\n");
    return 1;
}

// on terminal
// gcc find.c -lcs50 -o find
// ./find