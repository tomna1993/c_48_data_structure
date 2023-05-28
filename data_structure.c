#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define ARRAY_LENGTH 3

typedef struct
{
    string name;
    string phone;
}
person;


int main(void)
{
    person people[ARRAY_LENGTH];

    people[0].name = "Tomas"; 
    people[0].phone = "+1223";

    people[1].name = "Eva";
    people[1].phone = "+42987";

    people[2].name = "Peter"; 
    people[2].phone =  "+891278";

    string get_user_name = get_string("Name: ");

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        if (strcmp(people[i].name, get_user_name) == 0)
        {
            printf ("Found: %s\n", people[i].phone);
            return 0;
        }
    }

    printf ("Not found!\n");
    return 1;
}