#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "person.h"

#define DEF_NUM    1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "person.h"

#define DEF_NUM    1

int main(void)
{
    // TODO replace stdin with the file input from ../in.txt

    PERSON *person;

    int num;
    puts("Enter the initial number of records:");
    if (scanf("%d", &num) < 1)
        num = DEF_NUM;

    printf("\n--> Reading Personnel Records...\n");

    while (num-- > 0)
    {
        person = (PERSON *) malloc(sizeof(PERSON));
        inputPersonalData(person);
        addPersonalDataToDatabase(person);
    }

    printf("\n--> Displaying Database...\n");
    displayDatabase();

    puts("\n--> Searching database for Maya...\n");
    PERSON *maya = findPersonInDatabase("Maya");
    if (maya == NULL)
        puts("\nMaya not found...\n");
    else
    {
        displayPerson(maya);
        puts("\n--> Removing Maya from database...\n");
        removePersonFromDatabase("Maya");
    }
    displayDatabase();

// added to test finding and removing the last element
    puts("\n--> Searching database for Frank...\n");
    PERSON *frank = findPersonInDatabase("Frank");
    if (frank == NULL)
        puts("\nFrank not found...\n");
    else
    {
        displayPerson(frank);
        puts("\n--> Removing Frank from database");
        removePersonFromDatabase("Frank");
    }
    displayDatabase();

    puts("\n--> Removing Miro from database...\n");
    removePersonFromDatabase("Miro");

    displayDatabase();


    puts("\n--> Adding new record to database...\n");
    person = (PERSON *) malloc(sizeof(PERSON));
    inputPersonalData(person);
    addPersonalDataToDatabase(person);

    displayDatabase();

    puts("\n--> Clearing database...\n");
    clearDatabase();

    displayDatabase();

    puts("\n--> Adding new record to database...\n");
    person = (PERSON *) malloc(sizeof(PERSON));
    inputPersonalData(person);
    addPersonalDataToDatabase(person);

    displayDatabase();
    clearDatabase();
}
