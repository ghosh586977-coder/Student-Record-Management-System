#include <stdio.h>

int main()
{
    int roll[100];
    char name[100][50];
    float marks[100];
    int choice, n = 0, i, searchRoll, found;

    while (1)
    {
        printf("\n\n===== STUDENT RECORD MANAGER =====");
        printf("\n1. Add Student");
        printf("\n2. View Students");
        printf("\n3. Search Student");
        printf("\n4. Performance Analysis");
        printf("\n5. Placement Records");
        printf("\n6. Internship Records");
        printf("\n7. Scholarship Records");
        printf("\n8. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (n == 100)
            {
                printf("\nStudent limit reached!");
            }
            else
            {
                printf("\nEnter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Student Name: ");
                scanf(" %49[^\n]", name[n]);

                printf("Enter Marks: ");
                scanf("%f", &marks[n]);

                if (marks[n] < 0 || marks[n] > 100)
                {
                    printf("\nInvalid marks! Student was not added.");
                }
                else
                {
                    n++;
                    printf("\nStudent added successfully!");
                }
            }
        }

        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("\nNo student records found.");
            }
            else
            {
                printf("\n--- STUDENT RECORDS ---");

                for (i = 0; i < n; i++)
                {
                    printf("\n\nRoll Number: %d", roll[i]);
                    printf("\nName: %s", name[i]);
                    printf("\nMarks: %.2f", marks[i]);

                    if (marks[i] >= 90)
                    {
                        printf("\nGrade: A+");
                    }
                    else if (marks[i] >= 75)
                    {
                        printf("\nGrade: A");
                    }
                    else if (marks[i] >= 50)
                    {
                        printf("\nGrade: B");
                    }
                    else
                    {
                        printf("\nGrade: C");
                    }

                    if (marks[i] >= 85)
                    {
                        printf("\nScholarship Status: Eligible");
                    }
                    else
                    {
                        printf("\nScholarship Status: Not Eligible");
                    }

                    if (marks[i] >= 75)
                    {
                        printf("\nInternship Status: Eligible");
                    }
                    else
                    {
                        printf("\nInternship Status: Not Eligible");
                    }

                    if (marks[i] >= 75)
                    {
                        printf("\nPlacement Status: Eligible");

                        if (marks[i] >= 75 && marks[i] < 80)
                        {
                            printf(" for these companies: ValueCoders, Cleveroad, Hidden Brains, etc.");
                        }
                        if (marks[i] >= 80 && marks[i] <= 85)
                        {
                            printf(" for these companies: Tata Elxsi, Oracle, Adobe, Globant, etc.");
                        }
                        if (marks[i] > 85)
                        {
                            printf(" for these companies: Wipro, Cognizant, Amazon, IBM, Microsoft, etc.");
                        }
                    }
                    else
                    {
                        printf("\nPlacement Status: Not Eligible");
                    }
                }
            }
        }

        else if (choice == 3)
        {
            printf("\nEnter roll number to search: ");
            scanf("%d", &searchRoll);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (roll[i] == searchRoll)
                {
                    printf("\nStudent found!");
                    printf("\nName: %s", name[i]);
                    printf("\nMarks: %.2f", marks[i]);

                    if (marks[i] >= 85)
                    {
                        printf("\nScholarship Status: Eligible");
                    }
                    else
                    {
                        printf("\nScholarship Status: Not Eligible");
                    }

                    if (marks[i] >= 75)
                    {
                        printf("\nInternship Status: Eligible");
                    }
                    else
                    {
                        printf("\nInternship Status: Not Eligible");
                    }

                    if (marks[i] >= 75)
                    {
                        printf("\nPlacement Status: Eligible");

                        if (marks[i] >= 75 && marks[i] < 80)
                        {
                            printf(" for these companies: ValueCoders, Cleveroad, Hidden Brains, etc.");
                        }
                        if (marks[i] >= 80 && marks[i] <= 85)
                        {
                            printf(" for these companies: Tata Elxsi, Oracle, Adobe, Globant, etc.");
                        }
                        if (marks[i] > 85)
                        {
                            printf(" for these companies: Wipro, Cognizant, Amazon, IBM, Microsoft, etc.");
                        }
                    }
                    else
                    {
                        printf("\nPlacement Status: Not Eligible");
                    }

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nStudent not found.");
            }
        }

        else if (choice == 4)
        {
            printf("\nEnter roll number: ");
            scanf("%d", &searchRoll);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (roll[i] == searchRoll)
                {
                    printf("\n--- PERFORMANCE ANALYSIS ---");
                    printf("\nName: %s", name[i]);
                    printf("\nMarks: %.2f", marks[i]);

                    if (marks[i] >= 90)
                    {
                        printf("\nGrade: A+");
                        printf("\nExcellent performance! The student has achieved outstanding results with more than 90%%");
                    }
                    else if (marks[i] >= 75)
                    {
                        printf("\nGrade: A");
                        printf("\nVery good performance! The student has shown strong academic progress.");
                    }
                    else if (marks[i] >= 50)
                    {
                        printf("\nGrade: B");
                        printf("\nGood performance! The student has demonstrated satisfactory academic progress.");
                    }
                    else
                    {
                        printf("\nGrade: C");
                        printf("\nNeeds improvement. The student should focus more on studies to achieve better results.");
                    }

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nStudent not found.");
            }
        }

        else if (choice == 5)
        {
            if (n == 0)
            {
                printf("\nNo Placement records found.");
            }
            else
            {
                printf("\n--- PLACEMENT RECORDS ---");
                printf("\n\nELIGIBLE STUDENTS LIST");

                for (i = 0; i < n; i++)
                {
                    if (marks[i] >= 75 && marks[i] < 80)
                    {
                        printf("\n\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                        printf("\nEligible for these companies: ValueCoders, Cleveroad, Hidden Brains, etc.");
                    }
                    if (marks[i] >= 80 && marks[i] <= 85)
                    {
                        printf("\n\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                        printf("\nEligible for these companies: Tata Elxsi, Oracle, Adobe, Globant, etc.");
                    }
                    if (marks[i] > 85)
                    {
                        printf("\n\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                        printf("\nEligible for these companies: Wipro, Cognizant, Amazon, IBM, Microsoft, etc.");
                    }
                }

                printf("\n\nNOT ELIGIBLE STUDENTS LIST");

                for (i = 0; i < n; i++)
                {
                    if (marks[i] < 75)
                    {
                        printf("\n\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                    }
                }
            }
        }

        else if (choice == 6)
        {
            if (n == 0)
            {
                printf("\nNo Internship records found.");
            }
            else
            {
                printf("\n--- INTERNSHIP RECORDS ---");
                printf("\nELIGIBLE STUDENTS LIST:");

                for (i = 0; i < n; i++)
                {
                    if (marks[i] >= 75)
                    {
                        printf("\n\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                    }
                }

                printf("\n\nNOT ELIGIBLE STUDENTS LIST:");

                for (i = 0; i < n; i++)
                {
                    if (marks[i] < 75)
                    {
                        printf("\n\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                    }
                }
            }
        }

        else if (choice == 7)
        {
            if (n == 0)
            {
                printf("\nNo Scholarship records found.");
            }
            else
            {
                printf("\n--- SCHOLARSHIP RECORDS ---");
                printf("\nELIGIBLE STUDENTS LIST:");

                for (i = 0; i < n; i++)
                {
                    if (marks[i] >= 85)
                    {
                        printf("\n\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                    }
                }

                printf("\n\nNOT ELIGIBLE STUDENTS LIST:");

                for (i = 0; i < n; i++)
                {
                    if (marks[i] < 85)
                    {
                        printf("\n\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                    }
                }
            }
        }

        else if (choice == 8)
        {
            printf("\nThank you for using the system!");
            break;
        }

        else
        {
            printf("\nInvalid choice. Try again.");
        }
    }

    return 0;
}
