#include <stdio.h>  
#include <stdint.h> 

typedef uint8_t BYTE;
 
int main(int argc, char *argv[]) {
    FILE *src = fopen(argv[1], "r");
    FILE *dst = fopen(argv[2], "w");

    BYTE b;

    // copy byte by byte until we hit the end of the file
    while(fread(&b, sizeof(BYTE), 1, src) == 1) {
        // write byte to destination file
        fwrite(&b, sizeof(BYTE), 1, dst);
    }

    fclose(src);
    fclose(dst);
}

// on terminal, compile with: gcc -o cp cp.c
// then run with: ./cp phonebook.txt copiedPhoneBook.txt