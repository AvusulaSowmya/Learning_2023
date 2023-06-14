#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physics, math, chemistry;
    float total, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Physics Marks: ");
    scanf("%f", &physics);

    printf("Enter Math Marks: ");
    scanf("%f", &math);

    printf("Enter Chemistry Marks: ");
    scanf("%f", &chemistry);

    total = physics+math+ chemistry;
    percentage = (total/300) * 100;

    printf("Student Summary\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("PhysicsMarks: %f\n", physics);
    printf("MathMarks: %f\n", math);
    printf("ChemistryMarks: %f\n", chemistry);
    printf("TotalMarks: %f\n", total);
    printf("Percentage: %f%%\n", percentage);

    return 0;
}

