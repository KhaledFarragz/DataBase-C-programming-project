#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "AMIT_C_PROJECT.h"


void SDB_AddEntry(int n, int k)
{
    int kk;
    kk = k;
    if (kk + n > 10)
    {
        system("cls");
        printf("The DataBase Can take 10 students only\n\n");
        delay(3);
        system("cls");
        return main();
    }
    do {
        printf("\n Enter Student ID: ");
        scanf("%d", &s[k].ID);
        printf("\n Enter Student Class Year: ");
        scanf("%d", &s[k].Year);
        printf("\n Enter Course 1 is ID: ");
        scanf("%s", &s[k].C1ID);
        printf("\n Enter Course 1 is Grade: ");
        scanf("%d", &s[k].C1G);
        printf("\n Enter Course 2 is ID: ");
        scanf("%s", &s[k].C2ID);
        printf("\n Enter Course 2 is Grade: ");
        scanf("%d", &s[k].C2G);
        printf("\n Enter Course 3 is ID: ");
        scanf("%s", &s[k].C3ID);
        printf("\n Enter Course 3 is Grade: ");
        scanf("%d", &s[k].C3G);
        printf("*************************\n\n");
        ++k;
        system("cls");
    }
    while (k < (kk + n));
}

void SDB_GetIdList()
{
    int i;
    int flag1 = 0;
    for (i = 0; i < 10; ++i)
    {
        if (s[i].ID != NULL)
        {
            flag1 += 1;
        }
    }
    if (flag1 == 0)
    {
        printf("The database is empty \n\n");
    }
    else
    {
        for (i = 0;i < 10;i++)
        {
            if (s[i].ID != NULL)
            {
                printf("\n Student ID: %d \n\n", s[i].ID);

            }
        }
    }
}

void SDB_ReadEntry(int number)
{
    int  flag2 = 0;
    for (int i = 0;i < 10;i++)
    {
        if (s[i].ID == number)
        {
            printf("\n Student ID: %d \n", s[i].ID);
            printf("\n Student Class Year: %d \n", s[i].Year);
            printf("\n Course 1 is ID: %s \n", s[i].C1ID);
            printf("\n Course 1 is Grade: %d \n", s[i].C1G);
            printf("\n Course 2 is ID: %s \n", s[i].C2ID);
            printf("\n Course 2 is Grade: %d \n", s[i].C2G);
            printf("\n Course 3 is ID: %s \n", s[i].C3ID);
            printf("\n Course 3 is Grade: %d \n\n", s[i].C3G);
            printf("*************************************\n\n");
            flag2 = 1;
            break;
        }
    }
    if (flag2 == 0)
    {
        printf("student not found \n\n");

    }
}

void  SDB_IsFull()
{
    int checker_Empty = 0;
    int checker_Used = 0;
    for (int h = 0; h < 10;++h)
    {
        if (s[h].ID == NULL)
        {
            checker_Empty += 1;
        }
    }
    checker_Used = 10 - checker_Empty;
    if (checker_Empty == 0)
    {
        printf("The List is full\n\n");
    }
    else
    {
        printf("The List is Not Full Yet!\n");
        delay(3);
        system("cls");
    }
}

void SDB_DeleteEntry(int number)
{
    int flag3 = 0;
    for (int i = 0;i < 10;i++)
    {
        if (s[i].ID == number)
        {

            s[i].ID = NULL;

            flag3 = 1;
            break;
        }
    }
    if (flag3 == 1)
    {
        printf("student Has been deleted \n\n");
    }
    else if (flag3 == 0)
    {
        printf("Student Not Found\n \n");
    }
}

void  SDB_GetUsedSize()
{
    int checker_Empty = 0;
    int checker_Used = 0;
    for (int h = 0; h < 10;++h)
    {
        if (s[h].ID == NULL)
        {
            checker_Empty += 1;
        }
    }
    checker_Used = 10 - checker_Empty;
  printf("You Have only used %d from the available entries \n", checker_Used);
         printf("%d is avaliable \n\n", checker_Empty);
}

void SDB_IsIdExist(int n)
{
    int flag4 = 0 ;
 for(int i = 0;i < 10; ++i)
 {
     if(s[i].ID == n)
     {
        flag4 += 1 ;
     }
 }

 if(flag4 == 1)
 {
      printf("The Student Is Exist In The DataBase\n");
      printf("************************************\n\n");
 }
 else
    {
     printf("The Student Is Not In The DataBase\n");
      printf("************************************\n\n");
    }
}

void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds);
}
