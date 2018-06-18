#include <stdio.h>
#include <time.h>

/**
 * Type t_friend represents the Friend
 */
typedef struct {
    int id;
    char firstName[15];
    char lastName[15];
    int dayOfBirth;
    int monthOfBirth;
    int yearOfBirth;
} t_friend;

/**
* Function GetAge calculate age of a friend
*
* @param int year
* @param int month
* @param int day 
* @return double age
*/
double getAge(int year, int month, int day) {
    struct tm *date;
    time_t now;
    double age;

    time(&now);
    date = localtime(&now);

    age = 1900 + date->tm_year - year + (date->tm_mon - month)*0.1 + (date->tm_mday - day)*0.01;

    return age;
}

int main() {
    t_friend friendCollection[4] = {
        {0, "Volodya", "Pasechnik", 24, 12, 1998},
        {1, "Irina", "Sneznaya", 22, 12, 1997},
        {0, "Masha", "Garanina", 12, 12, 1999},
        {1, "Semen", "Prostoy", 24, 12, 1996}
    };

    int i, year, age;

    printf("Enter a Year: ");
    scanf("%d", &year);

    for (i = 0; i < 4; i++) {
        if (friendCollection[i].yearOfBirth == year) {
            age = getAge(friendCollection[i].yearOfBirth, 1, friendCollection[i].dayOfBirth);

            printf("ID: %d,\nFirst Name: %s,\nLast Name: %s,\nDay: %d,\nMonth: %d,\nYear: %d,\nAge: %d\n",
            friendCollection[i].id,friendCollection[i].firstName, friendCollection[i].lastName, friendCollection[i].dayOfBirth,
            friendCollection[i].monthOfBirth, friendCollection[i].yearOfBirth, age);
        }
    }

    return 0;
}