#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    char s[4];
    printf("Enter a string: ");
    scanf("%s", s); // This COULD will cause a buffer overflow since s is not allocated
    printf("You entered: %s\n", s);
}

// on terminal gcc get.c -o get