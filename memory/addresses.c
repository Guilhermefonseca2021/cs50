#include <stdio.h>
#include <cs50.h>

// virtual memory is a memory management technique that allows an operating system to use more memory than is physically available on the computer by using disk space as an extension of RAM
// every variable has an address in memory, and we can use pointers to access and manipulate the value stored at that address
int main(void) 
{
    int n = 50;
    // &n is the address of n, which is a pointer to n
    int *p = &n;
    printf("n: %i\n", n);
    printf("p: %p\n", p);
    printf("p: %i\n", *p);

    
}


// on terminal, compile with: gcc -o addresses addresses.c