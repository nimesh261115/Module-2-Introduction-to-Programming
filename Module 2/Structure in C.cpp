#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

main() 
{
    struct Student s[3];  // Array of 3 Student structures
    int i;

    printf("Enter details of 3 students:\n");
    for (i = 0; i < 3; i++) 
	{
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);  

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNumber);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < 3; i++) 
	{
        printf("\nStudent %d\n", i + 1);
        printf("Name       : %s\n", s[i].name);
        printf("Roll No.   : %d\n", s[i].rollNumber);
        printf("Marks      : %.2f\n", s[i].marks);
    }
}
