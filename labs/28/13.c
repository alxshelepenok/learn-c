#include <stdio.h>

/**
 * Type t_student represents the Student
 */
typedef struct {
    int id;
    char firstName[15];
    char lastName[15];
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
 */
void printStudentsWithHighGPA(t_student *students, int length) {
    int i;
    double ogpa;

    ogpa = calcOverallGPA(students, length);

    for (i = 0; i < length; i++) {
            if (students[i].gpa > ogpa) {
                printf("\n---\nFirst Name: %s,\nLast Name: %s,\nGPA: %f\n---\n", students[i].firstName, students[i].lastName, students[i].gpa);
            }
    }

}

int main() {
    t_student studentCollection[4] = {
        {0, "Volodya", "Pasechnik", 10},
        {1, "Irina", "Sneznaya", 9},
        {0, "Masha", "Garanina", 7},
        {1, "Semen", "Prostoy", 6}
    };

    double gpa = calcOverallGPA(studentCollection, 4);
    printf("Overall GPA: %f\n", gpa);

    printStudentsWithHighGPA(studentCollection, 4);

    return 0;
}