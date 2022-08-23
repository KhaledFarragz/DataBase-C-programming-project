#ifndef AMIT_C_PROJECT_H_
#define AMIT_C_PROJECT_H_

struct student
{
    int Student_ID;
    char firstName[20];
    char SecondName[20];
    int ID;
    int Year;
    char C1ID[5];
    int C1G;
    char C2ID[5];
    int C2G;
    char C3ID[5];
    int C3G;
}s[10];

#endif
void AddEntry(int, int);
void ReadEntry();
void SearchEntry(int);
void ListIsFull();
void DeleteEntry(int);
