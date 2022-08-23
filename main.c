#include <stdio.h>
#include <time.h>
#include "AMIT_C_PROJECT.h"

void main()
{
    int i = 0;
    int  n;
    int choice;
    printf("\n----Welcome Amit c-programming project----\n");
    printf("--------Made by Eng.Khaled Farrag---------\n\n");
    while (i = 1)
    {
        printf("1. Add Student\n");
        printf("2. Find Student\n");
        printf("3. Delete Student\n");
        printf("4. List All Student\n");
        printf("5. See if the database is full or not\n");
        printf("6. Exit The System\n");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            printf("Enter how many students do you want: ");
            scanf("%d", &n);
            printf("\n");
            int k = 0;
            if (n > 10)
            {
                system("cls");
                printf("The database get 10 students only\n\n");
                break;
            }
            for (i = 0; i < 10; ++i)
            {
                if (s[i].ID != NULL)
                {
                    k += 1;
                }
            }
            system("cls");
            AddEntry(n, k);
            system("cls");
            break;
        case 2:
            printf("Enter The ID: ");
            scanf("%d", &n);
            printf("\n");
            system("cls");
            SearchEntry(n);
            break;
        case 3:
            printf("Enter The ID: ");
            scanf("%d", &n);
            system("cls");
            DeleteEntry(n);
            break;
        case 4:
            system("cls");
            ReadEntry();
            break;
        case 5:
            system("cls");
            ListIsFull();
            break;
        case 6:
            return ;
        default:
            system("cls");
            printf("Enter your choice from 1 to 5:\n");
            delay(3);
            system("cls");
            return main();
        }
    }
}
