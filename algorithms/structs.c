#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct {
    string name;
    string number;
} person;

int main() {
    person people[3];
    people[0].name = "Alice";
    people[0].number = "123-456-7890";
    people[1].name = "Bob";
    people[1].number = "987-654-3210";
    people[2].name = "Charlie";
    people[2].number = "555-555-5555";

    string name = get_string("Find your contact: ");
    for(int j = 0; j < 3; j++){
    if(strcmp(people[j].name, name) == 0) {
        printf("Found: %s, Number: %s\n", people[j].name, people[j].number);
        break;
    } else {
        printf("Contact not found.\n");
    }
    }
    return 0;
}

//  on terminal
// gcc structs.c -lcs50 -o structs
// ./structs