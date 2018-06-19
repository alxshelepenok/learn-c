#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Type t_student represents the Student
 */
typedef struct {
    int id;
    char firstName[15];
    char lastName[15];
    char group[15];
    double gpa;
} t_student;

/**
 * Function calcOverallGPA calculate overall GPA of students
 *
 * @param t_student students
 * @param int length
 * @return double gpa
 */
double calcOverallGPA(t_student* students, int length) {
    int i;
    double sum, gpa;

    sum = 0;

    for (i = 0; i < length; i++) {
        sum += students[i].gpa;
    }

    gpa = sum/length;

    return gpa;
}

/**
 * Function printStudentsWithHighGPA print students list with high GPA
 *
 * @param int length
 * @param t_student students[]
 * @param char[] group
 */
void printStudentsWithHighGPA(t_student* students, int length, char* group) {
    int i;
    double ogpa;

    ogpa = calcOverallGPA(students, length);

    for (i = 0; i < length; i++) {
            if (strcmp(students[i].group, group) == 0) {
                printf("\n---\nFirst Name: %s,\nLast Name: %s,\nGroup: %s,\nGPA: %f\n---\n", students[i].firstName, students[i].lastName, students[i].group, students[i].gpa);
            }
    }

}

int main() {
    char group[15];
    printf("Please, enter group: ");
    scanf("%s", group);

    t_student studentCollection[4] = {
        {0, "Volodya", "Pasechnik", "Group-01", 10},
        {1, "Irina", "Sneznaya", "Group-01", 9},
        {0, "Masha", "Garanina", "Group-02", 7},
        {1, "Semen", "Prostoy", "Group-02", 6}
    };

    double gpa = calcOverallGPA(studentCollection, 4);
    printf("Overall GPA: %f\n", gpa);

    printStudentsWithHighGPA(studentCollection, 4, group);

    return 0;
}