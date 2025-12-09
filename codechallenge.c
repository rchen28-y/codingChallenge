#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char input;
    const char *person;
    const char *verb;
    const char *thing;
    printf("type 'x' to generate a random sentence \n");
    scanf(" %c", &input);

    if (input == 'x') {
    srand(time(NULL));
    int p = rand() % 8;
    int v = rand() % 8;
    int t = rand() % 8;

        switch (p) {
        case 0: person = "I"; 
        break;
        case 1: person = "Panos"; 
        break;
        case 2: person = "My friend"; 
        break;
        case 3: person = "My dog";
        break;
        case 4: person = "My cat"; 
        break;
        case 5: person = "Bob"; 
        break;
        case 6: person = "Mario"; 
        break;
        case 7: person = "Pac-Man";
        break;
        //chooses person
        }

        switch (v) {
        case 0: verb = "ate"; 
        break;
        case 1: verb = "built";
        break;
        case 2: verb = "destroyed";
        break;
        case 3: verb = "broke"; 
        break;
        case 4: verb = "trashed"; 
        break;
        case 5: verb = "improved"; 
        break;
        case 6: verb = "buried"; 
        break;
        case 7: verb = "absolutely obliterated"; 
        break;
        //chooses verb
        }

        switch (t) {
        case 0: thing = "a sandwich"; 
        break;
        case 1: thing = "the world";
        break;
        case 2: thing = "the code"; 
        break;
        case 3: thing = "a building"; 
        break;
        case 4: thing = "my computer";
        break;
        case 5: thing = "a treasure chest";
        break;
        case 6: thing = "a hamburger";
        break;
        case 7: thing = "a shoe";
        break;
        //chooses thing
        }

        printf("%s %s %s.\n", person, verb, thing);  
    } else {
        printf("you didnt type x so you dont get that super awesome sentence");
        //you should have typed x
    }

    return 0;
}

