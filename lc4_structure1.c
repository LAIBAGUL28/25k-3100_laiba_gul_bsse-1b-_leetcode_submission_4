#include <stdio.h>

						//structure q1

//structure declaration
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    // Create a Student variable
    struct Student s;

    // Taking input
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);  

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

