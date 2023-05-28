#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define ARRAY_LENGTH 3

int main(void)
{
    string name[ARRAY_LENGTH] = {"Tomas", "Eva", "Peter"};
    string phone[ARRAY_LENGTH] = {"+1223", "+42987", "+891278"};

    string get_user_name = get_string("Name: ");

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        if (strcmp(name[i], get_user_name) == 0)
        {
            printf ("Found: %s\n", phone[i]);
            return 0;
        }
    }

    printf ("Not found!\n");
    return 1;
}