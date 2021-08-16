#ifndef PERSON_H_
#define PERSON_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

typedef char NAME[41];

typedef struct date
{
	int month;
	int day;
	int year;
} DATE;

typedef struct person
{
	NAME name;
	int age;
	float height;
	DATE bday;
} PERSON;

void inputPersonalData(PERSON *person);
void addPersonalDataToDatabase(PERSON *person);
void displayDatabase();
void clearDatabase();
void displayPerson(PERSON *person);
PERSON *findPersonInDatabase(char *name);
void removePersonFromDatabase(char *name);

#endif /* PERSON_H_ */
